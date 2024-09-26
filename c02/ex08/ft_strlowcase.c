/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 01:16:13 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/16 01:16:13 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if(*tmp >= 'A' && *tmp <= 'Z')
			*tmp += 32;
		tmp++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "zaSsdAfZz";
	printf("%s\n", ft_strlowcase(str));
	return (0);
}