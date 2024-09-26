/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:19:52 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/16 17:19:52 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

    i = 1;
    while (*src && i < size)
    {
    	*dest = *src;
		dest++;
		src++;
		i++;
    }
    *dest = '\0';
    return (i-1);
}

int	main(void)
{
	char	dest[50];
	char	src[] = "welcome to the hell";
	unsigned int	size;

	size = 5;
	printf("%s\n", src);
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	return (0);
}