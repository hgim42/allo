/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:49:57 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/17 21:49:57 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*tmp;
	unsigned int i;

	i = 0;
	tmp = dest;
	while (*dest)
		dest++;
	while (*src && i < nb)
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
	char	dest[] = "hello";
	char	src[] = "world!!!!";
	unsigned int nb;

	nb = 1;
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%s\n", ft_strncat(dest, src, nb));
	return (0);
}