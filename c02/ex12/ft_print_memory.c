/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:09:14 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/24 16:09:07 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void print_hex(unsigned char c)
{
    char hex_digits[] = "0123456789abcdef";
    char output[2];

    output[0] = hex_digits[c / 16];
    output[1] = hex_digits[c % 16];

    write(1, output, 2);
}

void	print_address(unsigned char *ptr, unsigned int i)
{
	unsigned long address;
	char addr_str[18];
	int j;

	address = (unsigned long)(ptr + i);
	j = 15;
	while (j >= 0)
	{
		addr_str[j] = "0123456789abcdef"[address % 16];
		address /= 16;
		j--;
	}
	addr_str[16] = ':';
	addr_str[17] = ' ';
	write(1, addr_str, 18);
}

void	print_detail(unsigned char *ptr, unsigned int i, unsigned int size)
{
	unsigned int j;
	
	j = 0;
	while (j < 16)
	{
		if (i + j < size)
		{
            print_hex(ptr[i + j]);
            if (j % 2 == 1)
			{
                write(1, " ", 1);
            }
        }
		else
		{
            write(1, "  ", 2);
        }
		j++;
	}
}

void	print_printable_char(unsigned char *ptr, unsigned int i, unsigned int size)
{
	unsigned int j;
	unsigned char c;
	
	j = 0;
	while (j < 16)
	{
		if (i + j < size)
		{
            c = ptr[i + j];
            if (c >= 32 && c <= 126)
			{
            	write(1, &c, 1);
            }
			else
			{
                write(1, ".", 1);
            }
        }
		else
		{
            write(1, " ", 1);
        }
		j++;
	}
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned char *ptr;
    unsigned int i;
	
	ptr = (unsigned char *)addr;
    if (size == 0)
	{
        return addr;
	}
	i = 0;
	while (i < size)
	{
		print_address(ptr, i);
        print_detail(ptr, i, size);     
		print_printable_char(ptr, i, size);
        write(1, "\n", 1);
		i += 16;
	}
    return addr;
}

int main() {
    char str[] = "Bonjour les amis\nCeci est un test.\n";
    ft_print_memory(str, sizeof(str));
    return 0;
}