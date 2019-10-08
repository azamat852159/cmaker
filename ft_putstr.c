#ifndef FT_PUTSTR_C
#define FT_PUTSTR_C

# include "ft.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

#endif