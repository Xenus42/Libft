/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebroue <lebroue@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:08:39 by lebroue           #+#    #+#             */
/*   Updated: 2024/11/13 15:00:17 by lebroue          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	if (src == /*(void *)*/ NULL && dest == /*(void *)*/ NULL)
		return (dest);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	i = 0;
	while (n > 0 && tmp_dest > tmp_src)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	while (i < n && tmp_dest < tmp_src)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char dest[] = "bonjour";
	char src[] = "salut";
	printf("%s\n", (char *)memmove(dest, src, 5));
	printf("%s", (char *)ft_memmove(dest, src, 5));
	return (0);
}