/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djalleh <Djalleh@student.42.kl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:12:36 by djalleh           #+#    #+#             */
/*   Updated: 2023/10/05 21:02:43 by djalleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{	
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;

	if (src == NULL)
		return (NULL);
	len = ft_strlen(src) + 1;
	str = (char *)malloc(len);
	ft_strcpy (str, src);
	return (str);
}
/*#include <string.h>
int main(int ac, char **av)
{
	char *string1;
	char *string2;
	(void) ac;

	string1 = ft_strdup(av[1]);
	string2 = strdup(av[1]);

	printf("For ft char is %c and string is %s \n", *string1, string1);
	printf("For library char is %c and string is %s \n", *string2, string2);
	return (0);
}*/	
