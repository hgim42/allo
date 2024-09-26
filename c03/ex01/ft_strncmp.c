/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:06:16 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/17 21:06:16 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n) && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		i++;
		s1++;
		s2++;
	}
	if (i == n)
		return (0);
	return (*s1 - *s2);
}

int	main(void)
{
	char	s1[] = "halla";
	char	s2[] = "hallo";
	unsigned int	n;

	n = 4;	
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}