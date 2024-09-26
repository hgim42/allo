/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:45:29 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/20 22:46:17 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int len;

    len = max - min;
    if (len <= 0)
    {
        *range = NULL;
        return (0);
    }
    *range = (int *)malloc(len * sizeof(int));
    if (*range == NULL)
    {
        printf("memory allocation fail\n");
        return (-1);
    }
    i = 0;
    while (min < max)
    {
        (*range)[i] = min;
        printf("%d ", (*range)[i]);
        i++;
        min++;
    }
    printf("\n");
    return (len);
}

int main(void)
{
    int min;
    int max;
    int *range;

    min = 3;
    max = 11;
    printf("%d\n", min);
    printf("%d\n", max);
    printf("%d\n", ft_ultimate_range(&range, min, max));
    free(range);
    return (0);
}