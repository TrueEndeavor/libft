
#include "libft.h"

void	ft_putnbr_base_fd(int n, int fd, int base)
{
	long	nbr;
	int		digit;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= base)
		ft_putnbr_base_fd(nbr / base, fd, base);
	digit = nbr % base;
	if (digit >= 10)
		ft_putchar_fd(digit - 10 + 'a', fd);
	else
		ft_putchar_fd(digit + '0', fd);
}
