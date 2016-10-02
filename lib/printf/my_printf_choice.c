/*
** my_printf_choice.c for printf choice in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <oddou_f@frederic.oddou@epitech.eu>
**
** Started on  Tue Nov 10 18:39:30 2015 Frederic ODDOU
** Last update Mon Nov 16 13:34:42 2015 Frederic ODDOU
*/

#include "my.h"

int		tab_printf_choice_long(const char *c)
{
  char		*ftype;
  int		i;
  int		res;

  ftype = "duloxXb";
  i = 0;
  res = 0;
  while (ftype[i] != '\0')
    {
      if (c[0] == ftype[i])
	res = 12 + i;
      i++;
    }
  if (res == 14 && c[1] != '\0')
    {
      if (c[1] == 'd')
	return (14);
      else if (c[1] == 'u')
	return (15);
    }
  if (res >= 15)
    return (res + 30);
  return (res);
}

int		tab_printf_choice_char(const char *c)
{
  if (c[0] == 'd')
    return (16);
  else if (c[0] == 'u')
    return (17);
  else if (c[0] == 'h' && c[1] != '\0')
    {
      if (c[1] == 'd')
	return (18);
      else if (c[1] == 'u')
	return (19);
    }
  return (0);
}

int		tab_printf_choice(const char	*c)
{
  char		*ftype;
  char		*ftype2;
  int		i;

  ftype = "csoxXpbSundi";
  ftype2 = "%# +-0123456789";
  i = 0;
  while (ftype[i] != '\0')
    {
      if (c[0] == ftype[i])
	return (i);
      i++;
    }
  i = 0;
  while (ftype2[i] != '\0')
    {
      if (c[0] == ftype2[i])
	return (25 + i);
      i++;
    }
  if (c[0] == 'l' && c[1] != '\0')
    return (tab_printf_choice_long(&c[1]));
  if (c[0] == 'h' && c[1] != '\0')
    return (tab_printf_choice_char(&c[1]));
  return (-1);
}

const char	*my_printf_check(const char	*format,
				 int		i)
{
  if (format[i + 1] != '\0')
    return (&format[i + 1]);
  return (&format[i]);
}

int		my_printf_S_space(char		*var)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  while (var[i] != '\0')
    {
      if (var[i] < 32 || var[i] >= 127)
	{
	  if (var[i] <= 7)
	    nb += 3;
	  else if (var[i] <= 63)
	    nb += 2;
	  nb += my_inbr_int((int) var[i], 8);
	}
      else
	nb += 1;
      i++;
    }
  return (nb);
}
