#include "../inc/libft.h"

int	ft_puthex(unsigned long int nb, const char *base, int count)
{
	if (nb > ft_strlen(base) - 1)
		count = ft_puthex(nb / ft_strlen(base), base, count);
	count = ft_putchar(*(base + (nb % ft_strlen(base))), count);
	return (count);
}