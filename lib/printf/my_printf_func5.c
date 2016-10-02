/*
** my_printf_func5.c for printf func 5 in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Nov 16 13:19:40 2015 Frederic ODDOU
** Last update Mon Nov 16 13:40:05 2015 Frederic ODDOU
*/

#include <stdarg.h>
#include "my.h"

void		my_fptr_next(int i, va_list args, int *val, int *params)
{
  void		(*ftab_next[4])(va_list, int *, int, int);

  ftab_next[0] = &my_printf_lo;
  ftab_next[1] = &my_printf_lx;
  ftab_next[2] = &my_printf_lX;
  ftab_next[3] = &my_printf_lb;
  (*(ftab_next[i]))(args, val, params[0], params[1]);
}

void		my_printf_lo(va_list list, int *val, int space, int where)
{
  long		var;

  var = va_arg(list, long);
  if (where > 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 8));
  *val += my_putnbr_base(var, "01234567");
  if (where < 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 8));
}

void		my_printf_lx(va_list list, int *val, int space, int where)
{
  unsigned long	var;

  var = va_arg(list, unsigned long);
  if (where > 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 16));
  *val += my_putnbr_base(var, "0123456789abcdef");
  if (where < 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 16));
}

void		my_printf_lX(va_list list, int *val, int space, int where)
{
  unsigned long	var;

  var = va_arg(list, unsigned long);
  if (where > 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 16));
  *val += my_putnbr_base(var, "0123456789ABCDEF");
  if (where < 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 16));
}

void		my_printf_lb(va_list list, int *val, int space, int where)
{
  unsigned long	var;

  var = va_arg(list, unsigned long);
  if (where > 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 2));
  *val += my_putnbr_base(var, "01");
  if (where < 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 2));
}
