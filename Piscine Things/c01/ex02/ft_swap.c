/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djalleh <Djalleh@student.42.kl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:35:52 by djalleh           #+#    #+#             */
/*   Updated: 2023/09/26 17:23:26 by djalleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>
//#include	<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int main()
{
	int num1 = 15;
	int num2 = 20;
	int *ptr1;
	ptr1 = &num1;
	int *ptr2;
   	ptr2 = &num2;

	ft_swap(ptr1, ptr2);

	printf("The new value of ptr 1 is %d\n", *ptr1);
	printf("The new value of ptr 2 is %d\n", *ptr2);
	return(0);
}*/
