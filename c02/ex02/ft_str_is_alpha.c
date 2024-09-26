/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:03:48 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/15 22:03:48 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if((*str < 'a' || *str > 'z')
			&& (*str < 'A' || *str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "asdsdffh";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}