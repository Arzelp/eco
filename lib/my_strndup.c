/*
** my_strndup.c for strndup in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 21 13:35:27 2016 Frederic ODDOU
** Last update Mon Mar 21 13:35:27 2016 Frederic ODDOU
*/

#include <stdlib.h>
#include "my.h"

char		*my_strndup(char *str, int n)
{
  char		*new;
  int		nb;

  nb = 0;
  if (str == NULL)
    return (NULL);
  if ((new = malloc((n + 1) * sizeof(char))) == NULL)
    {
      my_putstr(ERROR_MALLOC);
      return (NULL);
    }
  nb = 0;
  while (str[nb] != '\0' && nb < n)
    {
      new[nb] = str[nb];
      nb++;
    }
  new[nb] = '\0';
  return (new);
}
