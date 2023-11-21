/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djalleh <Djalleh@student.42.kl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:43:52 by djalleh           #+#    #+#             */
/*   Updated: 2023/09/26 17:33:46 by djalleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>
//#include	<stdio.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write (1, &str[n], 1);
		n++;
	}
}
/*int main(int ac, char **av)
{
	if(ac != 2)
	{
		printf("invalid input");
		return (0);
	}
	ft_putstr(av[1]);
	return (0);
}*/
