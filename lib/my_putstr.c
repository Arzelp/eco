/*
** my_putstr.c for put str in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:32:33 2016 Frederic ODDOU
** Last update Mon Mar 14 17:32:33 2016 Frederic ODDOU
*/

#include <stdlib.h>
#include "my.h"

int		my_putstr(char *str)
{
  int		i;

  i = 0;
  if (str == NULL)
    return (my_putstr("(null)"));
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (i);
}
