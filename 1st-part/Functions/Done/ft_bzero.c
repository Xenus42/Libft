/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebroue <lebroue@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:23:03 by lebroue           #+#    #+#             */
/*   Updated: 2024/11/13 14:07:28 by lebroue          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = s;
	i = 0;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}

/*int main(void)
{
	int i;
	int len;
	char str[]="Bonjour";

	i = 0;
	len = strlen(str);
	ft_bzero(str, 6);
	while (i < len)
	{
		putchar (str[i]);
		i++;
	}
	return(0);
}*/