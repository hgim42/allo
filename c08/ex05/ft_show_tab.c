/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:21:35 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/22 00:24:29 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_stock_str.h"
#include <stdio.h>

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].str != 0)
    {
        printf("%s\n", par[i].str);    
        printf("%d\n", par[i].size); 
        printf("%s\n", par[i].copy); 
        i++;
    }
}