/*
** my_printf_func4.c for Printf func4 in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Sat Nov  7 19:12:22 2015 Frederic ODDOU
** Last update Sun Nov 15 16:50:51 2015 Frederic ODDOU
*/

#include <stdarg.h>
#include "my.h"

void		my_printf_d(va_list	list,
			    int 	*val,
			    int 	space,
			    int 	where)
{
  int		var;
  int		plus;
  int		moins;

  var = va_arg(list, int);
  plus = my_printf_cplus(where, (var < 0) ? -1 : 1);
  moins = my_printf_cmoins(where, (var < 0) ? -1 : 1);
  space -= my_printf_cspace(where, (var < 0) ? -1 : 1);
  if (where > 0 && where <= 5)
    *val += my_add_space(space - my_inbr_int(var, 10));
  *val += my_print_p_m(plus, moins, where, (var < 0) ? -1 : 1);
  if ((where > 5 && where < 100) || (where < -5 && where > -100) ||
      where == 1000 || where == -1000)
    *val += my_add_zero(space - my_inbr_long((long) var, 10));
  *val += my_putnbr(var, moins);
  if ((where < 0 && where >= -5) || where <= -100)
    *val += my_add_space(space - my_inbr_int(var, 10));
}

void		my_printf_hd(va_list	list,
			     int 	*val,
			     int 	space,
			     int 	where)
{
  short int	var;
  int		plus;
  int		moins;

  var = va_arg(list, int);
  plus = my_printf_cplus(where, (var < 0) ? -1 : 1);
  moins = my_printf_cmoins(where, (var < 0) ? -1 : 1);
  space -= my_printf_cspace(where, (var < 0) ? -1 : 1);
  if (where > 0 && where <= 5)
    *val += my_add_space(space - my_inbr_int((int) var, 10));
  *val += my_print_p_m(plus, moins, where, (var < 0) ? -1 : 1);
  if ((where > 5 && where < 100) || (where < -5 && where > -100) ||
      where == 1000 || where == -1000)
    *val += my_add_zero(space - my_inbr_long((long) var, 10));
  *val += my_putnbr_hd(var, moins);
  if ((where < 0 && where >= -5) || where <= -100)
    *val += my_add_space(space - my_inbr_int((int) var, 10));
}

void		my_printf_hhd(va_list	list,
			      int 	*val,
			      int 	space,
			      int 	where)
{
  signed char	var;
  int		plus;
  int		moins;

  var = va_arg(list, int);
  plus = my_printf_cplus(where, (var < 0) ? -1 : 1);
  moins = my_printf_cmoins(where, (var < 0) ? -1 : 1);
  space -= my_printf_cspace(where, (var < 0) ? -1 : 1);
  if (where > 0 && where <= 5)
    *val += my_add_space(space - my_inbr_int((int) var, 10));
  *val += my_print_p_m(plus, moins, where, (var < 0) ? -1 : 1);
  if ((where > 5 && where < 100) || (where < -5 && where > -100) ||
      where == 1000 || where == -1000)
    *val += my_add_zero(space - my_inbr_long((long) var, 10));
  *val += my_putnbr_hhd(var, moins);
  if ((where < 0 && where >= -5) || where <= -100)
    *val += my_add_space(space - my_inbr_int((int) var, 10));
}

void		my_printf_lld(va_list	list,
			      int 	*val,
			      int 	space,
			      int 	where)
{
  long long	var;
  int		plus;
  int		moins;

  var = va_arg(list, long long);
  plus = my_printf_cplus(where, (var < 0) ? -1 : 1);
  moins = my_printf_cmoins(where, (var < 0) ? -1 : 1);
  space -= my_printf_cspace(where, (var < 0) ? -1 : 1);
  if (where > 0 && where <= 5)
    *val += my_add_space(space - my_inbr_longlong(var, 10));
  *val += my_print_p_m(plus, moins, where, (var < 0) ? -1 : 1);
  if ((where > 5 && where < 100) || (where < -5 && where > -100) ||
      where == 1000 || where == -1000)
    *val += my_add_zero(space - my_inbr_long((long) var, 10));
  *val += my_putnbr_lld(var, moins);
  if ((where < 0 && where >= -5) || where <= -100)
    *val += my_add_space(space - my_inbr_longlong(var, 10));
}

void		my_printf_ld(va_list	list,
			     int 	*val,
			     int 	space,
			     int 	where)
{
  long int	var;
  int		plus;
  int		moins;

  var = va_arg(list, long int);
  plus = my_printf_cplus(where, (var < 0) ? -1 : 1);
  moins = my_printf_cmoins(where, (var < 0) ? -1 : 1);
  space -= my_printf_cspace(where, (var < 0) ? -1 : 1);
  if (where > 0 && where <= 5)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 10));
  *val += my_print_p_m(plus, moins, where, (var < 0) ? -1 : 1);
  if ((where > 5 && where < 100) || (where < -5 && where > -100) ||
      where == 1000 || where == -1000)
    *val += my_add_zero(space - my_inbr_long((long) var, 10));
  *val += my_putnbr_ld(var, moins);
  if ((where < 0 && where >= -5) || where <= -100)
    *val += my_add_space(space - my_inbr_longlong((long long) var, 10));
}
