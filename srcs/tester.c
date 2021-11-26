#include <tester.h>
int	g_pid;
int	g_status;

void	ft_test_return_printf(void)
{
	ft_return_printf_1();
	waitpid(g_pid, &g_status, 0);
	ft_puts("RETURN VALUE");
	ft_puts(ALIGN);
	SHOW_RES(g_status);
	ft_return_printf_2();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_status);
	ft_return_printf_3();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_status);
	ft_return_printf_4();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_status);
	ft_return_printf_5();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_status);
	ft_return_printf_6();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_status);
	ft_return_printf_7();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_status);
	ft_return_printf_8();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_status);
	ft_return_printf_9();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_status);
	ft_return_printf_10();
	waitpid(g_pid, &g_status, 0);
	SHOW_RES(g_status);
	ft_putc('\n');
}

int	main(void)
{
	ft_test_return_printf();
	return (0);
}
