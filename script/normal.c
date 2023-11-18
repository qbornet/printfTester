#include <stdio.h>

int main(void)
{
	char	*str = "YES YOU CAN FIND A FIX TO THIS\n";

    printf("This should not be able to compile %d\n", str);
    return (0);
}
