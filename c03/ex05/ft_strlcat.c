/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:15:14 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/17 22:15:14 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	arr_length(char *arr)
{
	int	len;

	len = 0;
	while (*arr)
	{
		len++;
		arr++;
	}
	return (len);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*tmp;
	unsigned int		dest_len;
	unsigned int		src_len;
	unsigned int		i;

	if (size == 0)
		return (0);
	tmp = dest;
	dest_len = arr_length(dest);
	src_len = arr_length(src);
	i = 0;
	while (*dest)
		dest++;
	while (*src && i + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	printf("%s\n", tmp);
	if (dest_len > size)
		return (src_len + size);
	return (dest_len + src_len);
}

int	main(void)
{
	char	dest[] = "hello";
	char	src[] = "world";
	unsigned int size;

	size = 8;
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%d\n", size);
	printf("%d\n", ft_strlcat(dest, src, size));
	return (0);
}