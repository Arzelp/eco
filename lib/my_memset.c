/*
** my_memset.c for my memset in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Sun Mar 20 14:31:28 2016 Frederic ODDOU
** Last update Sun Mar 20 14:31:28 2016 Frederic ODDOU
*/

void		my_memset(void	*string,
			  int	len,
			  char	c)
{
  int		i;
  char		*str;

  str = (char *)string;
  i = 0;
  while (i < len)
    {
      str[i] = c;
      i++;
    }
}
