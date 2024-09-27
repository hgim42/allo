/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:16:48 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/26 02:33:45 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>
#include <stdio.h>

#define SIZE 10

int is_safe(int *queens, int row, int col)
{
    int     i;

    i = 0;
    while (i < col)
    {
        if ((queens[i] == row)
            || (queens[i] - i == row - col)
            || (queens[i] + i == row + col))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

void    print_solution(int *queens)
{
    int     i;
    char    c;

    i = 0;
    while (i < SIZE)
    {
        c = queens[i] + '0';
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
}

int solve(int *queens, int col)
{
    int row;
    int count;

    if (col == SIZE)
    {
        print_solution(queens);
        return (1);
    }
    row = 0;
    count = 0;
    while (row < SIZE)
    {
        if (is_safe(queens, row, col))
        {
            queens[col] = row;
            count += solve(queens, col + 1);
        }
        row++;
    }
    return (count);
}

int ft_ten_queens_puzzle(void)
{
    int queens[SIZE];
    return (solve(queens, 0));
}

int main(void)
{
    printf("%d\n", ft_ten_queens_puzzle());
    return (0);
}