/*
** my_printf.c for Printf in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Wed Nov  4 10:55:22 2015 Frederic ODDOU
** Last update Thu Nov 19 10:47:03 2015 Frederic ODDOU
*/

#include <stdarg.h>
#include "my.h"

int		my_printf_i(int 		i,
			    int 		choice,
			    int 		type)
{
  if (choice >= 12 && choice != 25 && choice != 26)
    i++;
  if (choice == 14 || choice == 15 || choice == 18 || choice == 19)
    i++;
  if (choice != -1 && choice != 26 && type == 1)
    i++;
  if (choice != -1 && type == 2)
    i++;
  return (i);
}

int		my_printf_diez(const char	*fmt,
			       va_list		args,
			       int 		*val,
			       int 		*params)
{
  int		itab;

  itab = tab_printf_choice(fmt);
  if (itab != -1 && itab != 25 && itab != 26)
    {
      if ((itab >= 2 && itab <= 4) || (itab >= 45 && itab <= 47))
	{
	  if (itab >= 2 && itab <= 4)
	    my_fptr_diez(itab - 2, args, val, params);
	  else
	    my_fptr_diez(itab - 42, args, val, params);
	}
      else
	my_fptr(itab, args, val, params);
    }
  if (itab == 25 || itab == -1)
    *val += my_putchar('%');
  if (itab == 26)
    *val += my_putstr("%#");
  params[2] = my_printf_i(params[2], itab, 2);
  return (params[2]);
}

int		my_printf_pourcent(const char	*format,
				   va_list	args,
				   int 		*val,
				   int 		i)
{
  const char	*fmt;
  int		itab;
  int		params[3];

  fmt = my_printf_check(format, i);
  params[0] = my_printf_count(fmt);
  params[1] = (my_printf_count_neg(fmt) > 0) ? -1 : 1;
  i += my_printf_count_i(fmt);
  itab = tab_printf_choice(&fmt[my_printf_count_i(fmt)]);
  params[1] *= (my_printf_count_plus(fmt) > 0) ? 5 : 1;
  if (params[0] == 0 && fmt[0] == ' ')
    *val += my_putchar(' ');
  params[1] *= (my_printf_count_zero(fmt) > 0) ? 10 : 1;
  if (fmt[0] == ' ' &&
      (my_printf_count_zero(fmt) > 0 || my_printf_count_neg(fmt) > 0))
    params[1] *= 100;
  params[2] = i + 1;
  if (itab != -1 && itab != 25 && itab != 26)
    my_fptr(itab, args, val, params);
  if (itab == 25 || itab == -1)
    *val += my_putchar('%');
  if (itab == 26)
    i = my_printf_diez(&format[params[2] + 1], args, val, params);
  i = my_printf_i(i, itab, 1);
  return (i);
}

void		my_printf_exe(const char	*format,
			      va_list		args,
			      int 		*val)
{
  int		i;

  i = 0;
  while (format[i] != '\0')
    {
      if (format[i] == '%')
	i = my_printf_pourcent(format, args, val, i);
      else
	*val += my_putchar(format[i]);
      i++;
    }
}

int		my_printf(const char *format, ...)
{
  va_list	args;
  int		val;

  val = 0;
  va_start(args, format);
  my_printf_exe(format, args, &val);
  va_end(args);
  return (val);
}
