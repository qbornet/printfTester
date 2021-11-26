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
	ft_putc('\n');
}

int	main(void)
{
	ft_test_return_printf();
	return (0);
}
