/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbornet <qbornet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:09:47 by qbornet           #+#    #+#             */
/*   Updated: 2021/12/19 01:23:44 by qbornet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <tester.h>

void	ft_return_printf_1(void)
{
	int	    pid, ret, printfRet;
    FILE    *trace;

    CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("Hello");
    printfRet = printf("Hello");
    trace = fopen("trace", "a"); // should always fopen after printf or it will reset stdout
    fprintf(trace, "[RETURN VALUE]\n<ft_printf, >printf\n");
	if (ret == -1)
    {
		exit(SUCCESS);
    }
	else if (ret < 0)
    {
        fprintf(trace, "[1]: <%d | >%d\n", ret, printfRet);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[1]: <%d | >%d\n", ret, printfRet);
    fclose(trace);
	exit(FAIL);
}

void	ft_return_printf_2(void)
{
	int		pid, ret,  printfRet;
	char	c = 'c';
    FILE    *trace;

    CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c, salut mon pote ta essayer de m'echapper", c);
    printfRet = printf("%c, salut mon pote ta essayer de m'echapper", c);
    trace = fopen("trace", "a");
	if (ret == -1)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[2]: <%d | >%d\n", ret, printfRet);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[2]: <%d | >%d\n", ret, printfRet);
    fclose(trace);
	exit(FAIL);
}

void	ft_return_printf_3(void)
{
	int 	pid, ret, printfRet;
    FILE    *trace;
	char	*str = "Hello";

	
    CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s, salut mon pote ta essayer de m'echapper", str);
    printfRet = printf("%s, salut mon pote ta essayer de m'echapper", str);
    trace = fopen("trace", "a");
	if (ret == -1)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3]: <%d | >%d\n", ret, printfRet);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3]: <%d | >%d\n", ret, printfRet);
    fclose(trace);
	exit(FAIL);
}

void	ft_return_printf_4(void)
{
	int		pid, ret, printfRet;
	char	*kekw = "KEKW";
    FILE    *trace;

	
    CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%p, salut mon pote ta essayer de m'echapper", kekw);
	printfRet = printf("%p, salut mon pote ta essayer de m'echapper", kekw);
    trace = fopen("trace", "a");
	if (ret == -1)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[4]: <%d | >%d\n", ret, printfRet);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[4]: <%d | >%d\n", ret, printfRet);
    fclose(trace);
	exit(FAIL);
}

void	ft_return_printf_5(void)
{
	int		pid, ret, printfRet, nb = 10;
    FILE    *trace;
	
    CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%d, salut mon pote ta essayer de m'echapper", nb);
    printfRet = printf("%d, salut mon pote ta essayer de m'echapper", nb);
    trace = fopen("trace", "a");
	if (ret == -1)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[5]: <%d | >%d\n", ret, printfRet);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[5]: <%d | >%d\n", ret, printfRet);
    fclose(trace);
	exit(FAIL);
}

void	ft_return_printf_6(void)
{
	int		pid, ret, printfRet, nb = 10;
    FILE    *trace;

	
    CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%i, salut mon pote ta essayer de m'echapper", nb);
	printfRet = printf("%i, salut mon pote ta essayer de m'echapper", nb);
    trace = fopen("trace", "a");
	if (ret == -1)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[6]: <%d | >%d\n", ret, printfRet);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[6]: <%d | >%d\n", ret, printfRet);
    fclose(trace);
	exit(FAIL);
}

void	ft_return_printf_7(void)
{
	int			pid, ret, printfRet;
	unsigned int nb = 10;
    FILE        *trace;

	
    CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%u, salut mon pote ta essayer de m'echapper", nb);
    printfRet = printf("%u, salut mon pote ta essayer de m'echapper", nb);
    trace = fopen("trace", "a");
	if (ret == -1)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[7]: <%d | >%d\n", ret, printfRet);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[7]: <%d | >%d\n", ret, printfRet);
    fclose(trace);
	exit(FAIL);
}

void	ft_return_printf_8(void)
{
	int		pid, ret, printfRet, nb = 10;
    FILE    *trace;

	
    CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x, salut mon pote ta essayer de m'echapper", nb);
	printfRet = printf("%x, salut mon pote ta essayer de m'echapper", nb);
    trace = fopen("trace", "a");
	if (ret == -1)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[8]: <%d | >%d\n", ret, printfRet);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[8]: <%d | >%d\n", ret, printfRet);
    fclose(trace);
	exit(FAIL);
}

void	ft_return_printf_9(void)
{

	int		pid, ret, printfRet, nb = 10;
    FILE    *trace;


    CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%X, salut mon pote ta essayer de m'echapper", nb);
	printfRet = printf("%X, salut mon pote ta essayer de m'echapper", nb);
    trace = fopen("trace", "a");
	if (ret == -1)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[9]: <%d | >%d\n", ret, printfRet);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[9]: <%d | >%d\n", ret, printfRet);
    fclose(trace);
	exit(FAIL);
}

void	ft_return_printf_10(void)
{
	int	    pid, ret, printfRet;
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("\t\n\v\r\fiqwerty\r");
	printfRet = printf("\t\n\v\r\fiqwerty\r");
    trace = fopen("trace", "a");
	if (ret == printfRet)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[10]: <%d | >%d\n", ret, printfRet);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[10]: <%d | >%d\n", ret, printfRet);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_c_1(void)
{
	int		pid, ret, retr;
	char	c = 'a';
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%cqwerty", c);
	retr = printf("%cqwerty", c);
    trace = fopen("trace", "a");
    fprintf(trace, "[%%c]\n<ft_printf, >printf\n");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_c_2(void)
{
	int		pid, ret, retr;
	char	c = L'-';
    FILE    *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", c);
	retr = printf("%c", c);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_c_3(void)
{
	int		pid, ret, retr;
    FILE    *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", 128);
	retr = printf("%c", 128);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_c_4(void)
{
	int		pid, ret, retr;
    FILE    *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", 255);
	retr = printf("%c", 255);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[4]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[4]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_c_5(void)
{
	int		pid, ret, retr;
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c", 0);
	retr = printf("%c", 0);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[5]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[5]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_s_1(void)
{
	int		pid, ret, retr;
	char	*s = "Yolo";
    FILE    *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
    trace = fopen("trace", "a");
    fprintf(trace, "[%%s]\n<ft_printf, >printf\n");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_s_2(void)
{
	int		pid, ret, retr;
	char	*s = NULL;
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_s_3(void)
{
	int		pid, ret, retr;
	char	*s = "";
    FILE    *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_s_4(void)
{
	int		pid, ret, retr;
	char	*s = "\u00A1\u00A2\xde\xfe";
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[4]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[4]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_s_5(void)
{
	int		pid, ret, retr;
	char	*s = "¡™£¢∞§¶•ªº";
    FILE    *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[5]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[5]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_s_6(void)
{
	int		pid, ret, retr;
	char	*s = "\t\b\r\n\v kekw";
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[6]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[6]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_s_7(void)
{
	int		pid, ret, retr;
	char	*s = "Hello";
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%s", s);
	retr = printf("%s", s);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[7]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[7]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_p_1(void)
{
	int		pid, ret, retr;
	char	*s = NULL;
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%p", s);
	retr = printf("%p", s);
    trace = fopen("trace", "a");
    fprintf(trace, "[%%p]\n<ft_printf, >printf\n");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_p_2(void)
{
	int		pid, ret, retr;
	char	*s = "HellO";
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%p", s);
	retr = printf("%p", s);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_p_3(void)
{
	int		pid, ret, retr;
	int		f_value = 10;
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%p", &f_value);
	retr = printf("%p", &f_value);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_p_4(void)
{
	int		pid, ret, retr;
	int		f_value = 2147483647;
    FILE    *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%p", &f_value);
	retr = printf("%p", &f_value);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[4]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[4]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_di_1(void)
{
	int		pid, ret, retr;
	int		value = -2147483648;
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%d", value);
	retr = printf("%d", value);
    trace = fopen("trace", "a");
    fprintf(trace, "[%%di]\n<ft_printf, >printf\n");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_di_2(void)
{
	int		pid, ret, retr;
	int		value = -2147483648;
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%i", value);
	retr = printf("%i", value);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_di_3(void)
{
	int		pid, ret, retr;
	int		value = 2147483647;
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%d", value);
	retr = printf("%d", value);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_di_4(void)
{
	int		pid, ret, retr;
	int		value = 2147483647;
    FILE    *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%i", value);
	retr = printf("%i", value);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_pritnf_u_1(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 4294967295;
    FILE            *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%u", nbr);
	retr = printf("%u", nbr);
    trace = fopen("trace", "a");
    fprintf(trace, "[%%u]\n<ft_printf, >printf\n");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_pritnf_u_2(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = -1;
    FILE            *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%u", nbr);
	retr = printf("%u", nbr);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_pritnf_u_3(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 0;
    FILE            *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%u", nbr);
	retr = printf("%u", nbr);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_x_1(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 42;
    FILE            *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x", nbr);
	retr = printf("%x", nbr);
    trace = fopen("trace", "a");
    fprintf(trace, "[%%x]\n<ft_printf, >printf\n");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_x_2(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = -1;
    FILE            *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x", nbr);
	retr = printf("%x", nbr);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_x_3(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 4294967295;
    FILE            *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x", nbr);
	retr = printf("%x", nbr);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_x_4(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 2147483647;
    FILE            *trace;
	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x", nbr);
	retr = printf("%x", nbr);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[4]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[4]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_X_1(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 42;
    FILE            *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%X", nbr);
	retr = printf("%X", nbr);
    trace = fopen("trace", "a");
    fprintf(trace, "[%%X]\n<ft_printf, >printf\n");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[1]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_X_2(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = -1;
    FILE            *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%X", nbr);
	retr = printf("%X", nbr);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[2]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_X_3(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 4294967295;
    FILE            *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%X", nbr);
	retr = printf("%X", nbr);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_X_4(void)
{
	int				pid, ret, retr;
	unsigned int	nbr = 2147483647;
    FILE            *trace;

	
	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%X", nbr);
	retr = printf("%X", nbr);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_mix_1(void)
{
	int		pid, ret, retr;
    FILE    *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%c, %p, %d", 'a' + 256, NULL, INT_MIN);
	retr = printf("%c, %p, %d", 'a' + 256, NULL, INT_MIN);
    trace = fopen("trace", "a");
    fprintf(trace, "[MIX TEST]\n<ft_printf, >printf\n");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[1][%%c, %%p, %%d]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[1][%%c, %%p, %%d]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_mix_2(void)
{
	int		pid, ret, retr;
    FILE    *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%% %c %d %i %x", L'a', 1234, INT_MAX, 42);
	retr = printf("%% %c %d %i %x", L'a', 1234, INT_MAX, 42);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[2][%%, %%c, %%d, %%i, %%x]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[2][%%, %%c, %%d, %%i, %%x]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_mix_3(void)
{
	int		pid, retr, ret;
	char	*str = "Hello";
    FILE    *trace;

	FORK_RAISE(g_pid, pid);
	fclose(stdout);
	ret = ft_printf("%s %c %s", str, 'a', str);
	retr = printf("%s %c %s", str, 'a', str);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3][%%s, %%c, %%s]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3][%%s, %%c, %%s]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}

void	ft_printf_mix_4(void)
{
	int		pid, retr, ret;
    FILE    *trace;

	CLOSE_OUT;
	FORK_RAISE(g_pid, pid);
	ret = ft_printf("%x %X %d %i %u", 42, 42, INT_MIN, INT_MAX, -1);
	retr = printf("%x %X %d %i %u", 42, 42, INT_MIN, INT_MAX, -1);
    trace = fopen("trace", "a");
	if (ret == retr)
		exit(SUCCESS);
	else if (ret < 0)
    {
        fprintf(trace, "[3][%%x, %%X, %%d, %%i, %%u]: <%d | >%d\n", ret, retr);
        fclose(trace);
		exit(SKO);
    }
    fprintf(trace, "[3][%%x, %%X, %%d, %%i, %%u]: <%d | >%d\n", ret, retr);
    fclose(trace);
	exit(FAIL);
}
