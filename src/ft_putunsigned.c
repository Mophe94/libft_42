
#include "../inc/libft.h"

int	ft_putunsigned(unsigned int nb, int count)
{
	if (nb > 9)
	{
		count = ft_putnbr(nb / 10, count);
		count = ft_putnbr(nb % 10, count);
	}
	else
		count = ft_putchar(nb + 48, count);
	return (count);
}