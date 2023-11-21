/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djalleh <Djalleh@student.42.kl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:45:38 by djalleh           #+#    #+#             */
/*   Updated: 2023/10/05 18:28:52 by djalleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		i;
	int		*nb;

	if (min >= max)
		return (NULL);
	range = max - min;
	nb = (int *)malloc(sizeof(int) * range);
	i = 0;
	while (i < range)
	{
		nb[i] = min;
		min++;
		i++;
	}
	return (nb);
}
/*int main(int ac, char **av)
{
	(void) ac;
	int min = atoi(av[1]);
	int max = atoi(av[2]);
	int *range;
	int i = 0;

	range = ft_range(min, max);

	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
