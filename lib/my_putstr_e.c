/*
** my_putstr_e.c for putstr_e in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:42:03 2016 Frederic ODDOU
** Last update Mon Mar 14 17:42:03 2016 Frederic ODDOU
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int		my_putstr_e(char *str)
{
  if (str == NULL)
    return (my_putstr_e("(null)"));
  return (write(2, str, my_strlen(str)));
}
