/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:34:22 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/23 23:35:16 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int check_charset(char c, char *charset)
{
    while (*charset)
    {
        if (c == *charset)
            return (1);
        charset++;
    }
    return (0);
}

int count_words(char *str, char *charset)
{
    int count;
    int word_flag;

    count = 0;
    word_flag = 0;
    while (*str)
    {
        if (check_charset(*str, charset))
        {
            if (word_flag)
                word_flag = 0;
        }
        else
        {
            if (!word_flag)
            {
                word_flag = 1;
                count++;
            }
        }
        str++;        
    }
    return (count);
}

char *get_next_word(char **str, char *charset)
{
    char    *start;
    char    *word;
    int     i;

    start = *str;
    while (**str && check_charset(**str, charset))
        (*str)++;
    start = *str;
    while (**str && !check_charset(**str, charset))
        (*str)++;    
    word = malloc((*str - start) + 1);
    i = 0;
    if (word)
    {
        while (i < (*str - start))
        {
            word[i] = start[i];
            i++;
        }
        word[*str - start] = '\0';
    }
    return (word);
}

char **ft_split(char *str, char *charset)
{
    int     word_count;
    char    **result;
    int     i;

    word_count = count_words(str, charset);
    result = malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return NULL;
    i = 0;
    while (i < word_count)
    {
        result[i] = get_next_word(&str, charset);
        if (!result[i])
        {
            while (1 > 0)
                free (result[--i]);
            free (result);
            return (NULL);
        }
        i++;
    }
    result[i] = 0;
    return (result);
}

int main() {
    char str[] = "Hello,World!This is a test.";
    char charset[] = ",.! ";
    char **result = ft_split(str, charset);
    int i;

    if (result)
    {
        i = 0;
        while (result[i] != NULL)
        {
            printf("result[%d]: %s\n", i, result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    } 
    else
        printf("Memory allocation fail\n");
    return 0;
}