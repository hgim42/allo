/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 01:18:51 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/16 01:18:51 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	word_start(char *str)
{
	if (*(str-1) == ' ')
		return (1);
	else
		return (0);
}

void	char_upper_lower(char *str)
{
	if (word_start(str) && (*str >= 'a' && *str <= 'z'))
			*str -= 32;
	else if ((*str >= 'A' && *str <= 'Z'))
			*str += 32;
}

void	pre_special_char(char *str)
{
	if (!((*(str-1) >= '0' && *(str-1) <= '9')
		|| (*(str-1) >= 'A' && *(str-1) <= 'Z')
		|| (*(str-1) >= 'a' && *(str-1) <= 'z')) 
			&& (*str >= 'a' && *str <= 'z'))
				*str -= 32;
}

void	pre_num_char(char *str)
{
	if((*str >= 'A' && *str <= 'Z') 
		&& (*(str-1) >= '0' && *(str-1) <= '9'))
			*str += 32;
}

char	*ft_strcapitalize(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
	{
		char_upper_lower(str);
		pre_special_char(str);
		pre_num_char(str);
		str++;
	}
	return (tmp);
}

int	main(void)
{
	char	str[] = "sAlut, COmMent TU vas ? 42Mots quarAnte-deux; cinquante+et+un";

	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}