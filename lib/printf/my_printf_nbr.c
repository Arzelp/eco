/*
** my_printf_nbr.c for printf nbr in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Sun Nov 15 16:38:26 2015 Frederic ODDOU
** Last update Sun Nov 15 16:41:08 2015 Frederic ODDOU
*/

int	my_printf_cmoins(int 	where,
			 int 	var)
{
  if (((where > 5 && where < 100) || (where < -5 && where > -100)
       || where == -1000 || where == 1000) && var < 0)
    return (1);
  return (0);
}

int	my_printf_cplus(int 	where,
			int 	var)
{
  if ((where == 5 || where == -5 || where >= 50 || where <= -50) && var >= 0)
    {
      if (!((where >= 100 || where <= -100) && var >= 0))
	return (1);
    }
  return (0);
}

int	my_printf_cspace(int 	where,
			 int 	var)
{
  if ((where == 5 || where == -5 || where >= 50 || where <= -50) && var >= 0)
      return (1);
  return (0);
}
