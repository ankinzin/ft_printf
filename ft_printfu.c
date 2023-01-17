/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:03:30 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/15 16:24:49 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfu(unsigned int number)
{
	int	count;

	count = 0;
	if (number < 10)
		count += ft_printfc(number + '0');
	else
	{
		count += ft_printfd(number / 10);
		count += ft_printfd(number % 10);
	}
	return (count);
}
