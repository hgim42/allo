/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:44:06 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/21 16:51:47 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

#define FALSE 0
#define TRUE 1
typedef int t_bool;

#define EVEN(nbr) ((nbr) % 2 == 0)
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0

#endif 