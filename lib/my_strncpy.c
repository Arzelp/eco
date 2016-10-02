/*
** my_strncpy.c for strncpy in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:38:04 2016 Frederic ODDOU
** Last update Mon Mar 14 17:38:04 2016 Frederic ODDOU
*/

#include <stdlib.h>

char		*my_strncpy(char *dest, char *src, int len)
{
  int		nb;

  nb = 0;
  if (src == NULL)
    return (NULL);
  while (src[nb] != '\0' && nb < len)
    {
      dest[nb] = src[nb];
      nb++;
    }
  while (nb < len)
    dest[nb++] = '\0';
  return (dest);
}
