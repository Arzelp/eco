/*
** my_printf_count.c for printf count in /lib
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Sun Nov 15 02:54:25 2015 Frederic ODDOU
** Last update Sun Nov 15 14:51:47 2015 Frederic ODDOU
*/

int	my_printf_count(const char *str)
{
  int	new;
  int	i;

  i = 0;
  while ((str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '0') &&
	 str[i] != '\0')
    i++;
  new = 0;
  while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    {
      new = (new * 10) + (str[i] - '0');
      i++;
    }
  return (new);
}

int	my_printf_count_i(const char *str)
{
  int	i;

  i = 0;
  while ((str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '0') &&
	 str[i] != '\0')
    i++;
  while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    i++;
  return (i);
}

int	my_printf_count_neg(const char *str)
{
  int	i;
  int	neg;

  i = 0;
  neg = 0;
  while ((str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '0') &&
	 str[i] != '\0')
    {
      if (str[i] == '-')
	neg++;
      i++;
    }
  return (neg % 2);
}

int	my_printf_count_plus(const char *str)
{
  int	i;
  int	plus;

  i = 0;
  plus = 0;
  while ((str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '0') &&
	 str[i] != '\0')
    {
      if (str[i] == '+')
	plus++;
      i++;
    }
  return (plus);
}

int	my_printf_count_zero(const char *str)
{
  int	i;
  int	zero;

  i = 0;
  zero = 0;
  while ((str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '0') &&
	 str[i] != '\0')
    {
      if (str[i] == '0')
	zero++;
      i++;
    }
  return (zero);
}
