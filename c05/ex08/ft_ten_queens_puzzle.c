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

typedef struct people
{
	int age;
	char name;
} person;

#define SIZE 10

int is_safe(int *queens, int row, int col) {
    for (int i = 0; i < col; i++) {
        if (queens[i] == row || 
            queens[i] - i == row - col || 
            queens[i] + i == row + col) {
            return 0;
        }
    }
    return 1;
}

void print_solution(int *queens) {
    for (int i = 0; i < SIZE; i++) {
        char c = queens[i] + '0';
        write(1, &c, 1);
    }
    write(1, "$\n", 2);
}

int solve(int *queens, int col) {
    if (col == SIZE) {
        print_solution(queens);
        return 1;
    }

    int count = 0;
    for (int row = 0; row < SIZE; row++) {
        if (is_safe(queens, row, col)) {
            queens[col] = row;
            count += solve(queens, col + 1);
        }
    }
    return count;
}

int ft_ten_queens_puzzle(void) {
    int queens[SIZE];`
    return solve(queens, 0);
}

int main(void) {
    int total_solutions = ft_ten_queens_puzzle();
  

    person pp;
    pp.name = 'c';
    pp.age = 46;
    pp.age
    printf("%c\n", pp.name);
    
		  return total_solutions;
	
}

`