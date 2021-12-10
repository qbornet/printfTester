/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbornet <qbornet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:09:47 by qbornet           #+#    #+#             */
/*   Updated: 2021/12/10 16:02:06 by qbornet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <tester.h>
extern int	g_pid;

void	ft_return_printf_1(void)
{
	int	pid, ret;

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("Hello");
	if (ret == -1)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
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
	else if (ret < 0)
		exit(SKO);
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
	else if (ret < 0)
		exit(SKO);
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
	else if (ret < 0)
		exit(SKO);
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
	else if (ret < 0)
		exit(SKO);
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
	else if (ret < 0)
		exit(SKO);
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
	else if (ret < 0)
		exit(SKO);
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
	else if (ret < 0)
		exit(SKO);
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
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_return_printf_10(void)
{
	int	pid, ret, retr;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("\t\n\v\r\fiqwerty\r");
	retr = printf("\t\n\v\r\fiqwerty\r");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_c_1(void)
{
	int		pid, ret, retr;
	char	c = 'a';

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%cqwerty", c);
	retr = printf("%cqwerty", c);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_c_2(void)
{
	int		pid, ret, retr;
	char	c = L'-';

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", c);
	retr = printf("%c", c);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_c_3(void)
{
	int		pid, ret, retr;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", 128);
	retr = printf("%c", 128);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_c_4(void)
{
	int		pid, ret, retr;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", 255);
	retr = printf("%c", 255);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_c_5(void)
{
	int		pid, ret, retr;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", 0);
	retr = printf("%c", 0);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_s_1(void)
{
	int		pid, ret, retr;
	char	*s = "Yolo";

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_s_2(void)
{
	int		pid, ret, retr;
	char	*s = NULL;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_s_3(void)
{
	int		pid, ret, retr;
	char	*s = "";

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_s_4(void)
{
	int		pid, ret, retr;
	char	*s = "\u00A1\u00A2\xde\xfe";

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_s_5(void)
{
	int		pid, ret, retr;
	char	*s = "¡™£¢∞§¶•ªº";

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_s_6(void)
{
	int		pid, ret, retr;
	char	*s = "\t\b\r\n\v kekw";

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_s_7(void)
{
	int		pid, ret, retr;
	char	*s = "Hello";

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_p_1(void)
{
	int		pid, ret, retr;
	char	*s = NULL;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%p", s);
	retr = printf("%p", s);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_p_2(void)
{
	int		pid, ret, retr;
	char	*s = "HellO";

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%p", s);
	retr = printf("%p", s);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_p_3(void)
{
	int		pid, ret, retr;
	int		f_value = 10;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%p", &f_value);
	retr = printf("%p", &f_value);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_p_4(void)
{
	int		pid, ret, retr;
	int		f_value = 2147483647;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%p", &f_value);
	retr = printf("%p", &f_value);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_di_1(void)
{
	int		pid, ret, retr;
	int		value = -2147483648;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%d", value);
	retr = printf("%d", value);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_di_2(void)
{
	int		pid, ret, retr;
	int		value = -2147483648;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%i", value);
	retr = printf("%i", value);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_di_3(void)
{
	int		pid, ret, retr;
	int		value = 2147483647;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%d", value);
	retr = printf("%d", value);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_di_4(void)
{
	int		pid, ret, retr;
	int		value = 2147483647;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%i", value);
	retr = printf("%i", value);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_pritnf_u_1(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 4294967295;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%u", nbr);
	retr = printf("%u", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_pritnf_u_2(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = -1;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%u", nbr);
	retr = printf("%u", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_pritnf_u_3(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 0;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%u", nbr);
	retr = printf("%u", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_x_1(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 42;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x", nbr);
	retr = printf("%x", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_x_2(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = -1;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x", nbr);
	retr = printf("%x", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_x_3(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 4294967295;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x", nbr);
	retr = printf("%x", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_x_4(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 2147483647;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x", nbr);
	retr = printf("%x", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_X_1(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 42;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%X", nbr);
	retr = printf("%X", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_X_2(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = -1;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%X", nbr);
	retr = printf("%X", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_X_3(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 4294967295;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%X", nbr);
	retr = printf("%X", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_X_4(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 2147483647;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%X", nbr);
	retr = printf("%X", nbr);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_mix_1(void)
{
	int		pid, ret, retr;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c, %p, %d", 'a' + 256, NULL, INT_MIN);
	retr = printf("%c, %p, %d", 'a' + 256, NULL, INT_MIN);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_mix_2(void)
{
	int		pid, ret, retr;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%% %c %d %i %x", L'a', 1234, INT_MAX, 42);
	retr = printf("%% %c %d %i %x", L'a', 1234, INT_MAX, 42);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_mix_3(void)
{
	int		pid, retr, ret;
	char	*str = "Hello";

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%s %c %s", str, 'a', str);
	retr = printf("%s %c %s", str, 'a', str);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}

void	ft_printf_mix_4(void)
{
	int		pid, retr, ret;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x %X %d %i %u", 42, 42, INT_MIN, INT_MAX, -1);
	retr = printf("%x %X %d %i %u", 42, 42, INT_MIN, INT_MAX, -1);
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
		exit(SKO);
	exit(FAIL);
}
