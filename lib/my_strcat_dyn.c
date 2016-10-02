/*
** my_strcat_dyn.c for strcat dyn in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:52:04 2016 Frederic ODDOU
** Last update Thu Apr 14 09:20:38 2016 Mizibi
*/

#include <stdlib.h>
#include "my.h"

char		*my_strcat_fusion(char *dest, char *src)
{
  unsigned int	id;
  unsigned int	is;
  char		*new;

  id = 0;
  is = 0;
  if (dest == NULL || src == NULL)
    return (NULL);
  if ((new = malloc(my_strlen(dest) + my_strlen(src) + 1)) == NULL)
    {
      my_putstr(ERROR_MALLOC);
      return (NULL);
    }
  while (dest[id] != '\0')
    {
      new[id] = dest[id];
      id++;
    }
  while (src[is] != '\0')
    new[id++] = src[is++];
  new[id] = '\0';
  return (new);
}

char		*my_strcat_dyn(char *dest, char *src)
{
  unsigned int	id;
  unsigned int	is;
  char		*new;

  id = 0;
  is = 0;
  if (dest == NULL || src == NULL)
    return (NULL);
  if ((new = malloc(my_strlen(dest) + my_strlen(src) + 1)) == NULL)
    {
      my_putstr(ERROR_MALLOC);
      return (NULL);
    }
  while (dest[id] != '\0')
    {
      new[id] = dest[id];
      id++;
    }
  while (src[is] != '\0')
    new[id++] = src[is++];
  new[id] = '\0';
  free(dest);
  return (new);
}

char		*my_strcat_dyn_char(char *dest, char src)
{
  unsigned int	id;
  char		*new;

  id = 0;
  if (dest == NULL)
    return (NULL);
  if ((new = malloc(my_strlen(dest) * sizeof(char) + 2)) == NULL)
    {
      my_putstr(ERROR_MALLOC);
      return (NULL);
    }
  while (dest[id] != '\0')
    {
      new[id] = dest[id];
      id++;
    }
  new[id++] = src;
  new[id] = '\0';
  free(dest);
  return (new);
}
