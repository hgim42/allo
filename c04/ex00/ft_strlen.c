/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:31:37 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/18 00:31:37 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	main(void)
{
	char	str[] = "hello";

	printf("%d\n", ft_strlen(str));
	return (0);	
}