/*
** my_count_char.c for count char x in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 21 13:13:31 2016 Frederic ODDOU
** Last update Mon Mar 21 13:13:31 2016 Frederic ODDOU
*/

int	my_count_char(char *str, char c)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	count++;
      i++;
    }
  return (count);
}
