/*
** my_printf_func3.c for Printf func3 in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Sat Nov  7 19:10:59 2015 Frederic ODDOU
** Last update Sun Nov 15 17:01:44 2015 Frederic ODDOU
*/

#include <stdarg.h>
#include "my.h"

void			my_printf_u(va_list	list,
				    int 	*val,
				    int 	space,
				    int 	where)
{
  unsigned int		var;

  var = va_arg(list, unsigned int);
  if (where > 0 && where <= 5)
    *val += my_add_space(space - my_inbr_long((long) var, 10));
  if ((where > 5 && where < 100) || (where < -5 && where > -100) ||
      where == 1000 || where == -1000)
    *val += my_add_zero(space - my_inbr_long((long) var, 10));
  *val += my_putnbr_u(var);
  if ((where < 0 && where >= -5) || where <= -100)
    *val += my_add_space(space - my_inbr_long((long) var, 10));
}

void			my_printf_llu(va_list	list,
				      int 	*val,
				      int 	space,
				      int 	where)
{
  unsigned long long	var;

  var = va_arg(list, unsigned long long);
  if (where > 0 && where <= 5)
    *val += my_add_space(space - my_inbr_unsignedlonglong(var, 10));
  if ((where > 5 && where < 100) || (where < -5 && where > -100) ||
      where == 1000 || where == -1000)
    *val += my_add_zero(space - my_inbr_long((long) var, 10));
  *val += my_putnbr_llu(var);
  if ((where < 0 && where >= -5) || where <= -100)
    *val += my_add_space(space - my_inbr_unsignedlonglong(var, 10));
}

void			my_printf_lu(va_list	list,
				     int 	*val,
				     int 	space,
				     int 	where)
{
  unsigned long int	var;

  var = va_arg(list, unsigned long int);
  if (where > 0 && where <= 5)
    *val += my_add_space(space - my_inbr_unsignedlonglong(var, 10));
  if ((where > 5 && where < 100) || (where < -5 && where > -100) ||
      where == 1000 || where == -1000)
    *val += my_add_zero(space - my_inbr_long((long) var, 10));
  *val += my_putnbr_lu(var);
  if ((where < 0 && where >= -5) || where <= -100)
    *val += my_add_space(space - my_inbr_unsignedlonglong(var, 10));
}

void			my_printf_hu(va_list	list,
				     int 	*val,
				     int 	space,
				     int 	where)
{
  unsigned short int	var;

  var = va_arg(list, unsigned int);
  if (where > 0 && where <= 5)
    *val += my_add_space(space - my_inbr_int((int) var, 10));
  if ((where > 5 && where < 100) || (where < -5 && where > -100) ||
      where == 1000 || where == -1000)
    *val += my_add_zero(space - my_inbr_long((long) var, 10));
  *val += my_putnbr_hu(var);
  if ((where < 0 && where >= -5) || where <= -100)
    *val += my_add_space(space - my_inbr_int((int) var, 10));
}

void			my_printf_hhu(va_list	list,
				      int 	*val,
				      int 	space,
				      int 	where)
{
  unsigned char		var;

  var = va_arg(list, unsigned int);
  if (where > 0 && where <= 5)
    *val += my_add_space(space - my_inbr_int((int) var, 10));
  if ((where > 5 && where < 100) || (where < -5 && where > -100) ||
      where == 1000 || where == -1000)
    *val += my_add_zero(space - my_inbr_long((long) var, 10));
  *val += my_putnbr_hhu(var);
  if ((where < 0 && where >= -5) || where <= -100)
    *val += my_add_space(space - my_inbr_int((int) var, 10));
}
