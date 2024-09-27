/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 00:58:55 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/16 00:58:55 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if(*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "ASDDSFGF";
	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}
