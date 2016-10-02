/*
** eco.c for taux0 in /home/arzel_p/rendu/Solo/Eco/
**
** Made by Paskal Arzel
** Login   <arzel_p@epitech.eu>
**
** Started on  Tue Sep 27 23:03:51 2016 Paskal Arzel
** Last update Sun Oct  2 21:14:54 2016 Paskal Arzel
*/

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "eco.h"
#include "my.h"

void	help()
{
  printf("Fonctionnement de la fonction :\n\n");
  printf("     ./eco [Zone (A B b C)] [Nb de personnes] [taux (en pourcentage)] [duree (en années)] [emprunt]\n");
}

int	**maketab()
{
  int	**tab;
  int	i;

  i = 0;
  if ((tab = malloc(6 * sizeof(int *))) == NULL)
    return (NULL);
  while (i < 6)
    {
      if ((tab[i] = malloc(6 * sizeof(int))) == NULL)
	return (NULL);
      i++;
    }
  tab[0][0] = ZA1P; //sale
  tab[0][1] = ZA2P;
  tab[0][2] = ZA3P;
  tab[0][3] = ZA4P;
  tab[0][4] = ZA5P;
  tab[1][0] = ZB1P;
  tab[1][1] = ZB2P;
  tab[1][2] = ZB3P;
  tab[1][3] = ZB4P;
  tab[1][4] = ZB5P;
  tab[2][0] = Zb1P;
  tab[2][1] = Zb2P;
  tab[2][2] = Zb3P;
  tab[2][3] = Zb4P;
  tab[2][4] = Zb5P;
  tab[3][0] = ZC1P;
  tab[3][1] = ZC2P;
  tab[3][2] = ZC3P;
  tab[3][3] = ZC4P;
  tab[3][4] = ZC5P;
  return (tab);
}

char	**makezones()
{
  char	**zones;

  if ((zones = malloc(50 * sizeof(char))) == NULL)
    return (NULL);
  zones[0] = "A";
  zones[1] = "B1";
  zones[2] = "B2";
  zones[3] = "C";
  return (zones);
}

int	findzone(char *av)
{
  int	zone;
  char	**zones;

  if ((zones = makezones()) == NULL)
    return (-1);
  zone = 0;
  while (zones[zone] && strcmp(zones[zone], av) != 0)
    zone++;
  if (zones[zone] == NULL)
    return (-1);
  return (zone);
}

int	getpers(char *av)
{
  int	pers;

  pers = atoi(av);
  if (pers <= 0)
    return (-1);
  if (pers >= 5)
    return (4);
  return (pers - 1);
}

double	my_min(double n1, double n2)
{
  if (n1 < n2)
    return (n1);
  return (n2);
}

int	main(int ac, char **av)
{
  int		**tab;
  int		zone;
  int		pers;
  double	emprunt;
  double	taux;
  double	montant;
  double	taz;

  if (ac != 6 || av == NULL)
    {
      help();
      return (1);
    }
  tab = maketab(av);
  if ((zone = findzone(av[1])) == -1)
    {
      printf("Zone introuvable\n");
      return (1);
    }
  if ((pers = getpers(av[2])) == -1)
    {
      printf("Nombre de personnes incorrect\n");
      return (1);
    }
  if ((taux = atof(av[3])) < 0 || atof(av[4]) <= 0)
    {
      printf("Taux ou durée incorrect(s) (< 0)\n");
      return (1);
    }
  if ((emprunt = atof(av[5])) <= 0)
    {
      printf("Emprunt incorrect (< 0)\n");
      return (1);
    }
  taz = my_min(tab[zone][pers], 0.4 * emprunt);
  montant = ((float)taz / (12.0 * (float)atoi(av[4]))) + ((((float)taux / 100.0) * ((float)emprunt - (float)taz)) / (12.0 * (1.0 - pow(1.0 + ((float)(taux / 100.0) / 12.0), (float)(-12.0 * atoi(av[4]))))));
  printf("zone : %d\ntaux : %.4f\npers : %d\ntaz : %.2f\nemprunt : %.2f\n", zone, taux, pers, taz, emprunt);
  printf("Montant mensuel : %.2f\nMontant annuel : %.2f\n\033[31mMontant total : %.2f\n\033[0m\033[32mBenefice : %.2f\n\033[0m", montant, montant * 12.0, montant * 12.0 * atoi(av[4]), montant * (12.0 * atoi(av[4])) - emprunt);
  return (0);
}
