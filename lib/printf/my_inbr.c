/*
** my_inbr.c for inbr in /home/oddou_f/rendu/B1-Systeme-Unix/PSU_2015_my_printf/lib/
**
** Made by Frederic ODDOU
** Login oddou_f <oddou_f@frederic.oddou@epitech.eu>
**
** Started on  Sun Nov 15 01:16:39 2015 Frederic ODDOU
** Last update Sun Nov 15 01:59:18 2015 Frederic ODDOU
*/

int			my_inbr_int(int 				nbr,
				    int 				size)
{
  int			div;
  int			i;

  i = 1;
  if (nbr < 0)
    {
      nbr = -(nbr);
      i++;
    }
  div = 1;
  while ((nbr / div) >= size)
    {
      div *= size;
      i++;
    }
  return (i);
}

int			my_inbr_long(long 				nbr,
				     int 				size)
{
  long			div;
  int			i;

  i = 1;
  if (nbr < 0)
    {
      nbr = -(nbr);
      i++;
    }
  div = 1;
  while ((nbr / div) >= size)
    {
      div *= size;
      i++;
    }
  return (i);
}

int			my_inbr_longlong(long long			nbr,
					 int				size)
{
  long long		div;
  int			i;

  i = 1;
  if (nbr < 0)
    {
      nbr = -(nbr);
      i++;
    }
  div = 1;
  while ((nbr / div) >= size)
    {
      div *= size;
      i++;
    }
  return (i);
}

int			my_inbr_unsignedlonglong(unsigned long long	nbr,
						 unsigned int		size)
{
  unsigned long long	div;
  int			i;

  i = 1;
  div = 1;
  while ((nbr / div) >= size)
    {
      div *= size;
      i++;
    }
  return (i);
}
