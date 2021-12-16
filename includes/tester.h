/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbornet <qbornet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:36:17 by qbornet           #+#    #+#             */
/*   Updated: 2021/12/10 16:14:04 by qbornet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H
# include <placeholder>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <fcntl.h>

# define CLOSE_OUT freopen("/dev/null/", "w", stdout);
# define OPEN_OUT freopen("/dev/tty", "w", stdout);
# define SUCCESS 10
# define SKO 15
# define FAIL 1
# define OK " \e[1;38;5;10mOK\e[0m"
# define KO " \e[1;38;5;9mKO\e[0m"
# define SPKO " \e[1;38;5;11mSKO\e[0m"
# define ALIGN "\e[20G:"
# define SHOW_RES(status) \
	OPEN_OUT; \
	if (WIFEXITED(status) && (WEXITSTATUS(status) != 0)) \
	{ \
		if (WEXITSTATUS(status) == SKO) \
			ft_puts(SPKO); \
		else \
			ft_puts((WEXITSTATUS(status) == SUCCESS) ? OK : KO); \
	} \
	else if (WEXITSTATUS(status) == 0)\
		ft_puts("child process exited with status equal to 0, creation failed"); \
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
void	ft_printf_c_1(void);
void	ft_printf_c_2(void);
void	ft_printf_c_3(void);
void	ft_printf_c_4(void);
void	ft_printf_c_5(void);
void	ft_printf_s_1(void);
void	ft_printf_s_2(void);
void	ft_printf_s_3(void);
void	ft_printf_s_4(void);
void	ft_printf_s_5(void);
void	ft_printf_s_6(void);
void	ft_printf_s_7(void);
void	ft_printf_p_1(void);
void	ft_printf_p_2(void);
void	ft_printf_p_3(void);
void	ft_printf_p_4(void);
void	ft_printf_di_1(void);
void	ft_printf_di_2(void);
void	ft_printf_di_3(void);
void	ft_printf_di_4(void);
void	ft_pritnf_u_1(void);
void	ft_pritnf_u_2(void);
void	ft_pritnf_u_3(void);
void	ft_printf_x_1(void);
void	ft_printf_x_2(void);
void	ft_printf_x_3(void);
void	ft_printf_x_4(void);
void	ft_printf_X_1(void);
void	ft_printf_X_2(void);
void	ft_printf_X_3(void);
void	ft_printf_X_4(void);
void	ft_printf_mix_1(void);
void	ft_printf_mix_2(void);
void	ft_printf_mix_3(void);
void	ft_printf_mix_4(void);
#endif
