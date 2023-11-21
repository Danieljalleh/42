/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djalleh <Djalleh@student.42.kl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:50:01 by djalleh           #+#    #+#             */
/*   Updated: 2023/09/26 17:27:43 by djalleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ultb;
	int	ulta;

	ulta = *a;
	ultb = *b;
	*a = ulta / ultb;
	*b = ulta % ultb;
}
/*int main()
{
	int number1;
	int number2;
	int *main = &number1;
	int *tool = &number2;
	number1 = 23;
	number2 = 5;
	ft_ultimate_div_mod(main, tool);

	printf("the new value of a is %d\n", *main);
	printf("the new value of b is %d\n", *tool);
}*/
