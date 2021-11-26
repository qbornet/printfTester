/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbornet <qbornet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:09:47 by qbornet           #+#    #+#             */
/*   Updated: 2021/11/26 16:54:34 by qbornet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <tester.h>
#include <ft_printf.h>
extern int	g_pid;

void	ft_return_printf_1(void)
{
	int	pid, ret;

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("Hello");
	if (ret == -1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_return_printf_2(void)
{
	int	pid, ret;

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("\t\n\v\r\fiqwerty\r\0");
	if (ret == 13)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_return_printf_3(void)
{
}
