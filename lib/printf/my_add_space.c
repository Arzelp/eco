/*
** my_add_space.c for add space in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Sun Nov 15 01:01:52 2015 Frederic ODDOU
** Last update Sun Nov 15 15:57:06 2015 Frederic ODDOU
*/

#include "my.h"

int	my_add_space(int 	space)
{
  int	i;

  i = 0;
  while (i < space)
    {
      my_putchar(' ');
      i++;
    }
  if (space > 0)
    return (space);
  return (0);
}

int	my_add_zero(int 	space)
{
  int	i;

  i = 0;
  while (i < space)
    {
      my_putchar('0');
      i++;
    }
  if (space > 0)
    return (space);
  return (0);
}

int	my_print_p_m(int	plus,
		     int	moins,
		     int	where,
		     int	var)
{
  int	i;

  i = 0;
  if (plus > 0)
    i += my_putchar('+');
  if (moins > 0)
    i += my_putchar('-');
  if ((where >= 100 || where <= -100) && var >= 0)
    i += my_putchar(' ');
  return (i);
}
