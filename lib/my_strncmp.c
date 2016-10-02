/*
** my_strncmp.c for strncmp in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:38:33 2016 Frederic ODDOU
** Last update Mon Mar 14 17:38:33 2016 Frederic ODDOU
*/

#include <stdlib.h>

int		my_strncmp(char *str, char *search, int nb)
{
  int		i;

  i = 0;
  if (str == NULL || search == NULL || str[i] != search[i])
    return (1);
  while (i < nb && str[i] != '\0' && search[i] != '\0')
    {
      if (str[i] != search[i])
	return (1);
      i++;
    }
  return (0);
}
