/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:55:19 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/15 21:55:19 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = dest;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (tmp);
}

int	main(void)
{
	char	dest[100];
	char	src[] = "hello world";
	int		n;

	n = 4;
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%s\n", ft_strncpy(dest, src, n));
	return (0);
}
