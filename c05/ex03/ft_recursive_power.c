/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 07:40:41 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/18 07:40:41 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_iterative_power(nb, power - 1));
}

int	main(void)
{
	int	nb;
	int power;

	nb = 3;
	power = 3;
	printf("%d\n", ft_iterative_power(nb, power));
	return(0);
}