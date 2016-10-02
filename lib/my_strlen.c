/*
** my_strlen.c for strlen in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:34:38 2016 Frederic ODDOU
** Last update Mon Mar 14 17:34:38 2016 Frederic ODDOU
*/

#include <stdlib.h>

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    i++;
  return (i);
}
