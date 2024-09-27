/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:47:20 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/21 01:43:29 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		cnt++;
		str++;
	}
	return (cnt);
}

int total_strlen(int size, char *strs[], char*sep)
{
    int i;
    int total_len;

    i = 0;
    total_len = 0;
    while (i < size)
    {
        total_len += ft_strlen(strs[i]);
        i++;
    }
    total_len += ft_strlen(sep) * (size - 1);
    return (total_len);
}

void    ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
}

void    str_sep_strcat(int size, char *tmp, char **strs, char *sep)
{
    int i;

    i = 0;
    while (i < size)
    {
        ft_strcat(tmp, strs[i]);
        if (i < size -1)
            ft_strcat(tmp, sep);
        i++;
    }
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char    *tmp;
    char    *s_tmp;
    int     total_len;

    if (size == 0)
    {
        tmp = (char *)malloc(1);
        if (tmp)
            tmp[0] = '\0';
        return (tmp);
    }
    total_len = total_strlen(size, strs, sep);
    tmp = (char *)malloc((total_len + 1) * sizeof(char));
    if (!tmp)
    {
        printf("memory allocation fail\n");
        return NULL;
    }
    s_tmp = tmp;
    str_sep_strcat(size, tmp, strs, sep);
    return (s_tmp);

}

int main(void)
{
    int     size;
    char    *strs[] = {"welcome", "to", "the", "hell"};
    char    *sep = " - ";

    size = sizeof(strs) / sizeof(strs[0]);
    printf("%s\n", ft_strjoin(size, strs, sep));
    return (0);
}