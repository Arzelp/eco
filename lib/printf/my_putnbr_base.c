/*
** my_putnbr_base.c for Putnbr base in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Wed Nov  4 20:51:40 2015 Frederic ODDOU
** Last update Tue Nov 10 17:17:21 2015 Frederic ODDOU
*/

#include "my.h"

int		my_putnbr_base(long long	nb,
			       char 		*base)
{
  long long	div;
  int		size;
  int		i;

  i = 0;
  size = my_strlen(base);
  if (nb < 0)
    {
      i += my_putchar('-');
      nb = -(nb);
    }
  div = 1;
  while ((nb / div) >= size)
    div = div * size;
  while (div > 0)
    {
      i += my_putchar(base[(nb / div) % size]);
      div /= size;
    }
  return (i);
}
