#ifndef FT_PUTCHAR_C
#define FT_PUTCHAR_C

# include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

#endif
