/*
** my_putnbr_unsigned.c for Put nbr unsigned in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Sat Nov  7 18:49:15 2015 Frederic ODDOU
** Last update Tue Nov 10 17:18:35 2015 Frederic ODDOU
*/

#include "my.h"

int			my_putnbr_u(unsigned int nbr)
{
  unsigned int		pow;
  int			i;

  pow = 1;
  i = 0;
  while ((nbr / pow) >= 10)
    pow *= 10;
  while (pow > 0)
    {
      i += my_putchar(((nbr / pow) % 10) + '0');
      pow /= 10;
    }
  return (i);
}

int			my_putnbr_llu(unsigned long long nbr)
{
  unsigned long long	pow;
  int			i;

  pow = 1;
  i = 0;
  while ((nbr / pow) >= 10)
    pow *= 10;
  while (pow > 0)
    {
      i += my_putchar(((nbr / pow) % 10) + '0');
      pow /= 10;
    }
  return (i);
}

int			my_putnbr_lu(unsigned long int nbr)
{
  unsigned long int	pow;
  int			i;

  pow = 1;
  i = 0;
  while ((nbr / pow) >= 10)
    pow *= 10;
  while (pow > 0)
    {
      i += my_putchar(((nbr / pow) % 10) + '0');
      pow /= 10;
    }
  return (i);
}

int			my_putnbr_hu(unsigned short int nbr)
{
  unsigned short int	pow;
  int			i;

  pow = 1;
  i = 0;
  while ((nbr / pow) >= 10)
    pow *= 10;
  while (pow > 0)
    {
      i += my_putchar(((nbr / pow) % 10) + '0');
      pow /= 10;
    }
  return (i);
}

int			my_putnbr_hhu(unsigned char nbr)
{
  unsigned char		pow;
  int			i;

  pow = 1;
  i = 0;
  while ((nbr / pow) >= 10)
    pow *= 10;
  while (pow > 0)
    {
      i += my_putchar(((nbr / pow) % 10) + '0');
      pow /= 10;
    }
  return (i);
}
