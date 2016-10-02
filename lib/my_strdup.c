/*
** my_strdup.c for strdup in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:39:20 2016 Frederic ODDOU
** Last update Mon Mar 14 17:39:20 2016 Frederic ODDOU
*/

#include <stdlib.h>
#include "my.h"

char		*my_strdup(char *str)
{
  char		*new;
  int		nb;

  nb = 0;
  if (str == NULL)
    return (NULL);
  if ((new = malloc((my_strlen(str) + 1) * sizeof(char))) == NULL)
    {
      my_putstr(ERROR_MALLOC);
      return (NULL);
    }
  nb = 0;
  while (str[nb] != '\0')
    {
      new[nb] = str[nb];
      nb++;
    }
  new[nb] = '\0';
  return (new);
}
