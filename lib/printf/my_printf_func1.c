/*
** my_printf_func.c for Printf_func in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Wed Nov  4 14:02:57 2015 Frederic ODDOU
** Last update Mon Nov 16 14:09:11 2015 Frederic ODDOU
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

void	my_fptr(int i, va_list args, int *val, int *params)
{
  void	(*ftab[20])(va_list, int *, int, int);

  ftab[0] = &my_printf_c;
  ftab[1] = &my_printf_s;
  ftab[2] = &my_printf_o;
  ftab[3] = &my_printf_x;
  ftab[4] = &my_printf_X;
  ftab[5] = &my_printf_p;
  ftab[6] = &my_printf_b;
  ftab[7] = &my_printf_S;
  ftab[8] = &my_printf_u;
  ftab[9] = &my_printf_n;
  ftab[10] = &my_printf_d;
  ftab[11] = &my_printf_d;
  ftab[12] = &my_printf_ld;
  ftab[13] = &my_printf_lu;
  ftab[14] = &my_printf_lld;
  ftab[15] = &my_printf_llu;
  ftab[16] = &my_printf_hd;
  ftab[17] = &my_printf_hu;
  ftab[18] = &my_printf_hhd;
  ftab[19] = &my_printf_hhu;
  (i >= 45) ?
      my_fptr_next(i - 45, args, val, params) :
  (*(ftab[i]))(args, val, params[0], params[1]);
}

void	my_printf_s(va_list list, int *val, int space, int where)
{
  char	*var;

  var = va_arg(list, char *);
  if (var == NULL)
    var = "(null)";
  if (where > 0)
    *val += my_add_space(space - my_strlen(var));
  *val += my_putstr(var);
  if (where < 0)
    *val += my_add_space(space - my_strlen(var));
}

void	my_printf_c(va_list list, int *val, int space, int where)
{
  int	var;

  var = va_arg(list, int);
  if (where > 0)
    *val += my_add_space(space - 1);
  *val += my_putchar(var);
  if (where < 0)
    *val += my_add_space(space - 1);
}

void	my_printf_n(va_list list, int *val, int space, int where)
{
  int	*nb;

  space = space + 1;
  where = where + 1;
  nb = va_arg(list, int *);
  *nb = *val;
}

void	my_printf_o(va_list list, int *val, int space, int where)
{
  int	var;

  var = va_arg(list, int);
  if (where > 0)
    *val += my_add_space(space - my_inbr_int(var, 8));
  *val += my_putnbr_base(var, "01234567");
  if (where < 0)
    *val += my_add_space(space - my_inbr_int(var, 8));
}
