/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:55:33 by chermida          #+#    #+#             */
/*   Updated: 2022/05/24 14:55:43 by chermida         ###   ########.fr       */
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

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		while (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		i++;
	}
}

/*
int	main(void)
{
	int	a[9] = {0,1,7,5,3,2,6,4,8};
	ft_sort_int_tab(a, 9);
// for(variable contador; condición; comportamiento del contador)
	for(int i = 0; i < 9; i++)
	{
		printf("%d, ", a[i]);
	}
	return (0);
}
*/