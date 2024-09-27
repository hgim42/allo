/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:32:11 by marvin            #+#    #+#             */
/*   Updated: 2024/09/19 01:32:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *alloc;
    int i;

    if (min >= max)
        return NULL;
    alloc = (int *)malloc((max-min) * sizeof(int));
    if (alloc == NULL)
    {
        printf("memory allocation fail\n");
        return NULL;
    }
    i = 0;
    while (min < max)
    {
        alloc[i] = min;
        printf("%d ", alloc[i]);
        i++;
        min++;
    }
    printf("\n");
    return (alloc);
}

int main(void)
{
    int min;
    int max;
    int *alloc;

    min = 3;
    max = 10;
    printf("%d\n", min);
    printf("%d\n", max);
    alloc = ft_range(min, max);
    free(alloc);
    return (0);
}