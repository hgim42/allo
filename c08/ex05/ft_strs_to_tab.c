/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:01:31 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/22 00:56:54 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_stock_str.h"
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

void    ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char *ft_strdup(char *src)
{
    int     len;
    char    *copy;

    len = ft_strlen(src);
    copy = (char *)malloc((len + 1) * sizeof(char));
    if (copy)
    {
        ft_strcpy(copy, src);
    }
    return copy;
}

void    store_struct(int ac, char **av, t_stock_str *arr)
{
    int i;

    i = 0;
    while (i < ac)
    {
        arr[i].size = ft_strlen(av[i]);
        arr[i].str = av[i];
        arr[i].copy = ft_strdup(av[i]);
        if (!arr[i].copy)
        {
            free(arr);
            return;
        }
        i++;
    }
    arr[i].str = 0;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *arr;
    
    arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
    if (!arr)
    {
        printf("memory allocation fail\n");
        return (NULL);
    }
    store_struct(ac, av, arr);
    arr[ac].str = 0;
    return arr;
}
