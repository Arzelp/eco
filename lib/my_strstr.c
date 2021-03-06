/*
** my_strstr.c for strstr in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:53:56 2016 Frederic ODDOU
** Last update Mon Mar 14 17:53:56 2016 Frederic ODDOU
*/

#include "my.h"

int	my_strstr(char *str, char *end)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (my_strncmp(&str[i], end, my_strlen(end)) == 0)
	return (i);
      i++;
    }
  return (-1);
}

int	my_strstr_end(char *str, char *end)
{
  int	i;
  int	first;

  first = -1;
  i = 0;
  while (str[i] != '\0')
    {
      if (my_strncmp(&str[i], end, my_strlen(end)) == 0)
	first = i;
      i++;
    }
  return (first);
}
