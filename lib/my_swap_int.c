/*
** my_swap_int.c for swap int in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 21 10:06:24 2016 Frederic ODDOU
** Last update Mon Mar 21 10:06:24 2016 Frederic ODDOU
*/

void		my_swap_int(void	*input,
			    int		i)
{
  char		tmp;
  char		*output;
  int		low;

  output = input;
  low = 0;
  while (--i > low)
    {
      tmp = output[low];
      output[low] = output[i];
      output[i] = tmp;
      low++;
    }
}
