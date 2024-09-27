/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 01:08:13 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/16 01:08:13 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if(*tmp >= 'a' && *tmp <= 'z')
			*tmp -= 32;
		tmp++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "zaSsdAfZz";
	printf("%s\n", ft_strupcase(str));
	return (0);
}