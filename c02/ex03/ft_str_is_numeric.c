/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 00:48:14 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/16 00:48:14 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if(*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "1212324";
	printf("%d\n", ft_str_is_numeric(str));
	return (0);
}