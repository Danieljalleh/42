/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djalleh <Djalleh@student.42.kl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:42:29 by djalleh           #+#    #+#             */
/*   Updated: 2023/09/26 17:49:30 by djalleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str [n] != 0)
	{
		n++;
	}
	n++;
	return (n);
}
/*int main(int ac, char **av)
{
	if(ac != 2)
	{
		printf("I dont wanna say");
		return(0);
	}

	printf("the length of that string is %d \n", ft_strlen(av[1]));
	return (0);
}*/
