/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:16:50 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/18 15:16:50 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
	{
		write(1, "no argument", 11);
		return (-1);
	}
	i = argc - 1;
	while (i > 0)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		i--;
		write(1, "\n", 1);
	}
	return (0);
}