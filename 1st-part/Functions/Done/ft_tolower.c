/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebroue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:24:02 by lebroue           #+#    #+#             */
/*   Updated: 2024/11/07 13:27:21 by lebroue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_tolower(int c)
{
	c += 32;
	return (c);
}

/*int	main(void)
{
	printf("%c", ft_tolower('A'));
	return(0);
}*/