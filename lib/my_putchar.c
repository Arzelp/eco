/*
** my_putchar.c for putchar in /lib/
**
** Made by Frederic ODDOU
** Login oddou_f <frederic.oddou@epitech.eu>
**
** Started on  Mon Mar 14 17:31:41 2016 Frederic ODDOU
** Last update Mon Mar 14 17:31:41 2016 Frederic ODDOU
*/

#include <unistd.h>

int		my_putchar(char c)
{
  return (write(1, &c, 1));
}
