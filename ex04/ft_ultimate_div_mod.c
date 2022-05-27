/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:31:33 by chermida          #+#    #+#             */
/*   Updated: 2022/05/23 17:31:38 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	aux1;
	int	aux2;

	aux1 = *a / *b;
	aux2 = *a % *b;
	*a = aux1;
	*b = aux2;
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 9;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("El resultado de la división es %i y el resto %i", x, y);
	return (0);
}
*/