/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 01:01:40 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/16 01:01:40 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if(*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "1${~|\\g\x07";
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}