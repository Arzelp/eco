/*
** my_putnbr.c for Put nbr in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Wed Nov  4 10:49:37 2015 Frederic ODDOU
** Last update Sun Nov 15 13:17:47 2015 Frederic ODDOU
*/

#include "my.h"

int		my_putnbr(int nbr, int abso)
{
  int		pow;
  int		i;

  pow = 1;
  i = 0;
  if (nbr < 0 && abso == 0)
    i += my_putchar('-');
  if (nbr == -2147483648)
    i += my_putstr("2147483648");
  else
    {
      if (nbr < 0)
	nbr = -(nbr);
      while ((nbr / pow) >= 10)
	pow *= 10;
      while (pow > 0)
	{
	  i += my_putchar(((nbr / pow) % 10) + '0');
	  pow /= 10;
	}
    }
  return (i);
}

int		my_putnbr_lld(long long nbr, int abso)
{
  long long	pow;
  int		i;

  pow = 1;
  i = 0;
  if (nbr < 0 && abso == 0)
    i += my_putchar('-');
  if (nbr == -9223372036854775807)
    i += my_putstr("9223372036854775807");
  else
    {
      if (nbr < 0)
	nbr = -(nbr);
      while ((nbr / pow) >= 10)
	pow *= 10;
      while (pow > 0)
	{
	  i += my_putchar(((nbr / pow) % 10) + '0');
	  pow /= 10;
	}
    }
  return (i);
}

int		my_putnbr_ld(long int nbr, int abso)
{
  long int	pow;
  int		i;

  i = 0;
  pow = 1;
  if (nbr < 0 && abso == 0)
    i += my_putchar('-');
  if (nbr == -9223372036854775807)
    i += my_putstr("9223372036854775807");
  else
    {
      if (nbr < 0)
	nbr = -(nbr);
      while ((nbr / pow) >= 10)
	pow *= 10;
      while (pow > 0)
	{
	  i += my_putchar(((nbr / pow) % 10) + '0');
	  pow /= 10;
	}
    }
  return (i);
}

int		my_putnbr_hd(short int nbr, int abso)
{
  short int	pow;
  int		i;

  i = 0;
  pow = 1;
  if (nbr < 0 && abso == 0)
    i += my_putchar('-');
  if (nbr == -32768)
    i += my_putstr("32768");
  else
    {
      if (nbr < 0)
	nbr = -(nbr);
      while ((nbr / pow) >= 10)
	pow *= 10;
      while (pow > 0)
	{
	  i += my_putchar(((nbr / pow) % 10) + '0');
	  pow /= 10;
	}
    }
  return (i);
}

int		my_putnbr_hhd(signed char nbr, int abso)
{
  signed char	pow;
  int		i;

  pow = 1;
  i = 0;
  if (nbr < 0 && abso == 0)
    i += my_putchar('-');
  if (nbr == -128)
    i+= my_putstr("128");
  else
    {
      if (nbr < 0)
	nbr = -(nbr);
      while ((nbr / pow) >= 10)
	pow *= 10;
      while (pow > 0)
	{
	  i += my_putchar(((nbr / pow) % 10) + '0');
	  pow /= 10;
	}
    }
  return (i);
}
