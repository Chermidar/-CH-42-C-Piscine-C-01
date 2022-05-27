/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:22:55 by chermida          #+#    #+#             */
/*   Updated: 2022/05/18 19:57:11 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	m;

	m = *a;
	*a = *b;
	*b = m;
}

/*
int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 4;
	d = 2;
	a = &c;
	b = &d;
	printf("%i %i", *a, *b);
	ft_swap(a, b);
	printf ("%i %i", *a, *b);
	return (0);
}
*/
