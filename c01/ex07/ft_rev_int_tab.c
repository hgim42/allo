/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 01:48:44 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/15 01:48:44 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[(size - 1) - i]);
		size--;
	}
	printf("\n");
}

int	main(void)
{
	int	tab[] = {1, 2};
	int	size;
	int	i;

	i = 0;
	size = sizeof(tab) / sizeof(tab[0]);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	return (0);
}
