# include <ft_printf.h>

int	main(void)
{
	char	*str = "YES YOU CAN FIND A FIX TO THIS\n";

	ft_printf("This should not be able to compile %d\n", str);
	return (0);
}
