/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:24:45 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/22 00:49:53 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
    while (*str)
        putchar(*str++);
}

int main(int ac, char **av)
{
    struct s_stock_str *tab;

    tab = ft_strs_to_tab(ac - 1, av + 1);
    ft_show_tab(tab);
    for (int i = 0; tab[i].str != 0; i++)
    {
        free(tab[i].copy);
    }
    free(tab);
    return 0;
}
