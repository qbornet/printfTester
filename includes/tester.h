/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbornet <qbornet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:36:17 by qbornet           #+#    #+#             */
/*   Updated: 2021/11/26 19:36:07 by qbornet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H
# define SUCCESS 10
# define FAIL 1
# define OK " \e[1;38;5;10mOK\e[0m"
# define KO " \e[1;38;5;9mKO\e[0m"
# define ALIGN "\e[20G:"
# define SHOW_RES(status) \
	if (WIFEXITED(status) && (WEXITSTATUS(status) != 0)) \
		ft_puts((WEXITSTATUS(status) == SUCCESS) ? OK : KO); \
	else \
		ft_puts(KO)
# define FORK_RAISE(g_pid, pid) \
	if ((pid = fork()) < 0) \
		exit(0); \
	if (pid > 0) \
	{ \
		g_pid = pid; \
		return ; \
	}
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>

void	ft_puts(char *s);
void	ft_putc(char c);
void	ft_return_printf_1(void);
void	ft_return_printf_2(void);
void	ft_return_printf_3(void);
void	ft_return_printf_4(void);
void	ft_return_printf_5(void);
void	ft_return_printf_6(void);
void	ft_return_printf_7(void);
void	ft_return_printf_8(void);
void	ft_return_printf_9(void);
void	ft_return_printf_10(void);
#endif
