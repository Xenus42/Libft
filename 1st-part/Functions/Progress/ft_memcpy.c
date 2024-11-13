/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebroue <lebroue@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:33:36 by lebroue           #+#    #+#             */
/*   Updated: 2024/11/13 14:07:08 by lebroue          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
/*#include <stdlib.h>
#include <stdio.h>*/
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 == dest;
	s2 == src;
	i = 0;
	if (src == (void *)NULL && dest == (void *)NULL)
		return (dest);
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char dst[] = "bonjour";
	char src[] = "salut";
	printf("%s\n", (char *)ft_memcpy(dst, src, 3));
 //   printf("%s\n", (char *)memcpy(dst, src, 3));
}*/