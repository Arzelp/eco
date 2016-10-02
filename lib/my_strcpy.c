/*
** my_strcpy.c for strcpy in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:40:26 2016 Frederic ODDOU
** Last update Mon Mar 14 17:40:26 2016 Frederic ODDOU
*/

#include <stdlib.h>

char		*my_strcpy(char *dest, char *src)
{
  int		nb;

  nb = 0;
  if (src == NULL)
    return (NULL);
  while (src[nb] != '\0')
    {
      dest[nb] = src[nb];
      nb++;
    }
  dest[nb] = '\0';
  return (dest);
}
