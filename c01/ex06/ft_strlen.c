/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 01:43:53 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/15 01:43:53 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		cnt++;
		str++;
	}
	return (cnt);
}

int	main(void)
{
	char	*str;

	str = "hello world";
	printf("%d\n", ft_strlen(str));
	return (0);
}
