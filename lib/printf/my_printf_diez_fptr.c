/*
** my_printf_diez_fptr.c for diez fpt in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Sun Nov 15 18:01:12 2015 Frederic ODDOU
** Last update Mon Nov 16 14:04:43 2015 Frederic ODDOU
*/

#include <stdarg.h>
#include "my.h"

void		my_fptr_diez(int	i,
			     va_list	args,
			     int 	*val,
			     int 	*params)
{
  void		(*ftab[6])(va_list, int *, int, int);

  ftab[0] = &my_printf_Do;
  ftab[1] = &my_printf_Dx;
  ftab[2] = &my_printf_DX;
  ftab[3] = &my_printf_Dlo;
  ftab[4] = &my_printf_Dlx;
  ftab[5] = &my_printf_DlX;
  (*(ftab[i]))(args, val, params[0], params[1]);
}

void		my_printf_Do(va_list	list,
			     int 	*val,
			     int 	space,
			     int 	where)
{
  int		var;

  var = va_arg(list, int);
  if (where > 0)
    *val += my_add_space(space - my_inbr_int(var, 8));
  *val += my_putchar('0');
  *val += my_putnbr_base(var, "01234567");
  if (where < 0)
    *val += my_add_space(space - my_inbr_int(var, 8));
}

void		my_printf_Dx(va_list	list,
			     int 	*val,
			     int 	space,
			     int 	where)
{
  unsigned int	var;

  var = va_arg(list, unsigned int);
  if (where > 0)
    *val += my_add_space(space - my_inbr_long((long) var, 16));
  *val += my_putstr("0x");
  *val += my_putnbr_base(var, "0123456789abcdef");
  if (where < 0)
    *val += my_add_space(space - my_inbr_long((long) var, 16));
}

void		my_printf_DX(va_list	list,
			     int 	*val,
			     int 	space,
			     int 	where)
{
  unsigned int	var;

  var = va_arg(list, unsigned int);
  if (where > 0)
    *val += my_add_space(space - my_inbr_long((long) var, 16));
  *val += my_putstr("0X");
  *val += my_putnbr_base(var, "0123456789ABCDEF");
  if (where < 0)
    *val += my_add_space(space - my_inbr_long((long) var, 16));
}
