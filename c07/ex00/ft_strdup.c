/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:44:50 by marvin            #+#    #+#             */
/*   Updated: 2024/09/19 01:44:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





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

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}

char *ft_strdup(char *src)
{
    int src_len;
    char    *alloc;

    src_len = ft_strlen(src);
    alloc = (char *)malloc((src_len + 1) * sizeof(char));
    if (alloc == NULL)
    {
        printf("memory allocation fail\n");
        return NULL;
    }
    return (ft_strcpy(alloc, src));

}

int main(void)
{
    char    src[] = "hello";
    char    *alloc;

    printf("%s\n", src);
    alloc = ft_strdup(src);
    printf("%s\n", alloc);
    free(alloc);
    return (0);
}