#include <tester.h>
int g_ok;
int	g_pid;
int	g_status;

void	ft_test_return_printf(void)
{
	ft_puts("\e[4mRETURN VALUE\e[0m");
	ft_puts(ALIGN);
	ft_return_printf_1();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_return_printf_2();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_return_printf_3();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_return_printf_4();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_return_printf_5();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_return_printf_6();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_return_printf_7();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_return_printf_8();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_return_printf_9();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_return_printf_10();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_putc('\n');
}

void	ft_test_printf_c(void)
{
	ft_puts("\e[4m%c\e[0m");
	ft_puts(ALIGN);
	ft_printf_c_1();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_c_2();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_c_3();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_c_4();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_c_5();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_putc('\n');
}

void	ft_test_printf_s(void)
{
	ft_puts("\e[4m%s\e[0m");
	ft_puts(ALIGN);
	ft_printf_s_1();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_s_2();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_s_3();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_s_4();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_s_5();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_s_6();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_s_7();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_putc('\n');
}

void	ft_test_printf_p(void)
{
	ft_puts("\e[4m%p\e[0m");
	ft_puts(ALIGN);
	ft_printf_p_1();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_p_2();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_p_3();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_p_4();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_putc('\n');
}

void	ft_test_printf_di(void)
{
	ft_puts("\e[4m%di\e[0m");
	ft_puts(ALIGN);
	ft_printf_di_1();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_di_2();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_di_3();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_di_4();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_putc('\n');

}

void	ft_test_printf_x(void)
{
	ft_puts("\e[4m%x\e[0m");
	ft_puts(ALIGN);
	ft_printf_x_1();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_x_2();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_x_3();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_x_4();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_putc('\n');
}

void	ft_test_printf_X(void)
{
	ft_puts("\e[4m%X\e[0m");
	ft_puts(ALIGN);
	ft_printf_X_1();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_X_2();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_X_3();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_X_4();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_putc('\n');
}

void	ft_test_printf_mix(void)
{
	ft_puts("\e[4mMIX\e[0m");
	ft_puts(ALIGN);
	ft_printf_mix_1();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_mix_2();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_mix_3();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_printf_mix_4();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_ok, g_status);
	ft_putc('\n');
}

int	main(int ac, char **av)
{
    if (ac == 1) {
        ft_test_printf_c();
        ft_test_printf_s();
        ft_test_printf_p();
        ft_test_printf_di();
        ft_test_printf_x();
        ft_test_printf_X();
        ft_test_printf_mix();
        ft_test_return_printf();
        return (0);
    }

    if (ac == 2 && !strcmp("c", av[1]))
        ft_test_printf_c();
    else if (ac == 2 && !strcmp("s", av[1]))
        ft_test_printf_s();
    else if (ac == 2 && !strcmp("p", av[1]))
        ft_test_printf_p();
    else if (ac == 2 && !strcmp("di", av[1]))
        ft_test_printf_di();
    else if (ac == 2 && !strcmp("x", av[1]))
        ft_test_printf_x();
    else if (ac == 2 && !strcmp("X", av[1]))
        ft_test_printf_X();
    else if (ac == 2 && !strcmp("mix", av[1]))
        ft_test_printf_mix();
    else if (ac == 2 && !strcmp("return", av[1]))
        ft_test_return_printf();
    return (0);
}
