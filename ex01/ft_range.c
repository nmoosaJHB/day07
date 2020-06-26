/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:57:36 by nmoosa            #+#    #+#             */
/*   Updated: 2020/06/26 09:02:45 by nmoosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define LEN 50

int *ft_range(int min, int max)
{
	int *range;
	int index;

	index = 0;
	range =(int*)malloc(sizeof(*range) * (LEN + 1);
	if (min >= max)
		return NULL;
	while (min < max)
	{
		range[index] = min;
		index++;
		min++;
	}
	return (range);
}
