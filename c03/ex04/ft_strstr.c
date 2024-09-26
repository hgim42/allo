/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:53:19 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/17 21:53:19 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	char	*tmp_str;
	char	*tmp_to_find;

	while (*str)
	{
		if (*str == *to_find)
		{
			tmp_str = str;
			tmp_to_find = to_find;
			while (*tmp_str && (*tmp_str == *tmp_to_find))
			{
				tmp_str++;
				tmp_to_find++;
				if (*tmp_to_find == '\0')
					return (str);
			}
		}
		str++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "welcome to the hell like this";
	char	to_find[] = "elc";

	printf("%s\n", str);
	printf("%s\n", to_find);
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}