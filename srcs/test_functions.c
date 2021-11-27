/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbornet <qbornet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:09:47 by qbornet           #+#    #+#             */
/*   Updated: 2021/11/27 09:14:22 by qbornet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <tester.h>
#include <string.h>
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
	int		pid, ret;
	char	c = 'c';

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%c, salut mon pote ta essayer de m'echapper", c);
	if (ret == -1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_return_printf_3(void)
{
	int 	pid, ret;
	char	*str = "Hello";

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%s, salut mon pote ta essayer de m'echapper", str);
	if (ret == -1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_return_printf_4(void)
{
	int		pid, ret;
	char	*kekw = "KEKW";

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%p, salut mon pote ta essayer de m'echapper", kekw);
	if (ret == -1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_return_printf_5(void)
{
	int		pid, ret, nb = 10;

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%d, salut mon pote ta essayer de m'echapper", nb);
	if (ret == -1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_return_printf_6(void)
{
	int		pid, ret, nb = 10;

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%i, salut mon pote ta essayer de m'echapper", nb);
	if (ret == -1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_return_printf_7(void)
{
	int			pid, ret;
	unsigned int nb = 10;

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%u, salut mon pote ta essayer de m'echapper", nb);
	if (ret == -1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_return_printf_8(void)
{
	int		pid, ret, nb = 10;

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%x, salut mon pote ta essayer de m'echapper", nb);
	if (ret == -1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_return_printf_9(void)
{

	int		pid, ret, nb = 10;

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%X, salut mon pote ta essayer de m'echapper", nb);
	if (ret == -1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_return_printf_10(void)
{
	int	pid, ret;

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("\t\n\v\r\fiqwerty\r\0");
	if (ret == 13)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_c_1(void)
{
	int		pid, ret;
	char	c = 'a';

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c\nqwerty", c);
	if (ret == 9)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_c_2(void)
{
	int		pid, ret;
	char	c = L'-';

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", c);
	if (ret == 1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_c_3(void)
{
	int		pid, ret;

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", 128);
	if (ret == 1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_c_4(void)
{
	int		pid, ret;

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", 255);
	if (ret == 1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_c_5(void)
{
	int		pid, ret;

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", 0);
	if (ret == 1)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_s_1(void)
{
	int		pid, ret;
	char	*s = "Yolo";

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	if (ret == 4)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_s_2(void)
{
	int		pid, ret;
	char	*s = NULL;

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	if (ret == 6)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_s_3(void)
{
	int		pid, ret;
	char	*s = "";

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	if (ret == 0)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_s_4(void)
{
	int		pid, ret;
	char	*s = "\u00A1\u00A2\xde\xfe";

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	if (ret == 6)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_s_5(void)
{
	int		pid, ret;
	char	*s = "¡™£¢∞§¶•ªº";

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	if (ret == 23)
		exit(SUCCESS);
	exit(FAIL);
}

void	ft_printf_s_6(void)
{
	int		pid, ret;
	char	*s = "\t\b\r\n\v kekw";

	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	if (ret == 10)
		exit(SUCCESS);
	exit(FAIL);
}
