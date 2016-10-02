/*
** my_printf_diez_fptr_next.c for printf diez next in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Nov 16 14:08:03 2015 Frederic ODDOU
** Last update Mon Nov 16 14:11:10 2015 Frederic ODDOU
*/

#include <stdarg.h>
#include "my.h"

void	my_printf_Dlo(va_list list, int *val, int space, int where)
{
  long	var;

  var = va_arg(list, long);
  if (where > 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 8));
  *val += my_putchar('0');
  *val += my_putnbr_base(var, "01234567");
  if (where < 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 8));
}

void	my_printf_Dlx(va_list list, int *val, int space, int where)
{
  unsigned long	var;

  var = va_arg(list, unsigned long);
  if (where > 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 16));
  *val += my_putstr("0x");
  *val += my_putnbr_base(var, "0123456789abcdef");
  if (where < 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 16));
}

void	my_printf_DlX(va_list list, int *val, int space, int where)
{
  unsigned long	var;

  var = va_arg(list, unsigned long);
  if (where > 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 16));
  *val += my_putstr("0X");
  *val += my_putnbr_base(var, "0123456789ABCDEF");
  if (where < 0)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 16));
}
