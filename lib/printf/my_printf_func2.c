/*
** my_printf_func2.c for Printf func2 in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Sat Nov  7 19:08:00 2015 Frederic ODDOU
** Last update Sun Nov 15 17:12:23 2015 Frederic ODDOU
*/

#include <stdarg.h>
#include "my.h"

void		my_printf_x(va_list	list,
			    int 	*val,
			    int 	space,
			    int 	where)
{
  unsigned int	var;

  var = va_arg(list, unsigned int);
  if (where > 0)
    *val += my_add_zero(space - my_inbr_long((long) var, 16));
  *val += my_putnbr_base(var, "0123456789abcdef");
  if (where < 0)
    *val += my_add_zero(space - my_inbr_long((long) var, 16));
}

void		my_printf_X(va_list	list,
			    int 	*val,
			    int 	space,
			    int 	where)
{
  unsigned int	var;

  var = va_arg(list, unsigned int);
  if (where > 0)
    *val += my_add_zero(space - my_inbr_long((long) var, 16));
  *val += my_putnbr_base(var, "0123456789ABCDEF");
  if (where < 0)
    *val += my_add_zero(space - my_inbr_long((long) var, 16));
}

void		my_printf_p(va_list	list,
			    int 	*val,
			    int 	space,
			    int 	where)
{
  long long	var;

  var = va_arg(list, long long);
  if (where > 0)
    *val += my_add_space(space - my_inbr_longlong(var, 10) - 2);
  *val += my_putstr("0x");
  *val += my_putnbr_base(var, "0123456789abcdef");
  if (where < 0)
    *val += my_add_space(space - my_inbr_longlong(var, 10) - 2);
}

void		my_printf_b(va_list	list,
			    int 	*val,
			    int 	space,
			    int 	where)
{
  unsigned int	var;

  var = va_arg(list, unsigned int);
  if (where > 0)
    *val += my_add_space(space - my_inbr_long((long) var, 2));
  *val += my_putnbr_base(var, "01");
  if (where < 0)
    *val += my_add_space(space - my_inbr_long((long) var, 2));
}

void		my_printf_S(va_list	list,
			    int 	*val,
			    int 	space,
			    int 	where)
{
  char		*var;
  int		i;

  i = 0;
  var = va_arg(list, char *);
  if (where > 0)
    *val += my_add_space(space - my_printf_S_space(var));
  while (var[i] != '\0')
    {
      if (var[i] < 32 || var[i] >= 127)
	{
	  if (var[i] <= 7)
	    *val += my_putstr("\\00");
	  else if (var[i] <= 63)
	    *val += my_putstr("\\0");
	  *val += my_putnbr_base(var[i], "01234567");
	}
      else
	*val += my_putchar(var[i]);
      i++;
    }
  if (where < 0)
    *val += my_add_space(space - my_printf_S_space(var));
}
