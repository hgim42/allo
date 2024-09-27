/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 01:25:23 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/18 01:25:23 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
        return 0;
    if (nb == 0 || nb == 1)
        return 1;
    return nb * ft_recursive_factorial(nb - 1);
}

int	main(void)
{
	int	nb;

	nb = 3;
	printf("%d\n", ft_recursive_factorial(nb));
	return (0);
}