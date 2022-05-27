/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:34:04 by chermida          #+#    #+#             */
/*   Updated: 2022/05/24 14:34:08 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	m;

	m = *a;
	*a = *b;
	*b = m;
}

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;

	i = -1;
	while (++i < size / 2)
		ft_swap(&tab[i], &tab[size - i - 1]);
}

/*
int	main(void)
{
	int	a[9] = {0,1,2,3,4,5,6,7,8};

	ft_rev_int_tab(a, 9);
// for(variable contador; condición; comportamiento del contador)
	for(int i = 0; i < 9; i++)
	{
		printf("%d, ", a[i]);
	}
	return (0);
}
*/