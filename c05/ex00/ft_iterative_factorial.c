/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 01:11:21 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/18 01:11:21 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int result;
    int i;

	result = 1;
    i = 1;
	if (nb < 0)
    	return (0);
	while (i <= nb)
	{
        result = result * i;
        i++;
    }
    return result;
}

int	main(void)
{
	int	nb;

	nb = 2;
	printf("%d\n", ft_iterative_factorial(nb));
	return (0);
}