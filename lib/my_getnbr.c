/*
** my_getnbr.c for getnbr in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:42:30 2016 Frederic ODDOU
** Last update Mon Mar 14 17:42:30 2016 Frederic ODDOU
*/

#include <stdlib.h>

int		my_check_nbr(char	*str)
{
  int		i;

  i = 0;
  if (str == NULL)
    return (1);
  while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
    i++;
  while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    i++;
  if (str[i] != '\0')
    return (1);
  return (0);
}

int		my_getnbr(char		*str)
{
  int		i;
  int		neg;
  int		nbr;

  i = 0;
  neg = 0;
  nbr = 0;
  if (str == NULL)
    return (-1);
  while ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
    {
      if (str[i] == '-')
	neg++;
      i++;
    }
  while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    {
      nbr = (nbr * 10) + (str[i] - '0');
      i++;
    }
  if (neg % 2 == 1)
    nbr = -(nbr);
  return (nbr);
}
