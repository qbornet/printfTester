/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbornet <qbornet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:10:06 by qbornet           #+#    #+#             */
/*   Updated: 2021/11/26 16:11:29 by qbornet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tester.h>

void	ft_putc(char c)
{
	write(1, &c, 1);
}
