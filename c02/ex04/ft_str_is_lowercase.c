/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 00:55:12 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/16 00:55:12 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if(*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "sfdg";
	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}