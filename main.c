/*
** main.c for  in /Users/vanhem_n/Documents/DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct 15 13:39:57 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct 17 14:08:42 2015 VAN HEMELRYCK Nathan
*/

#include "struct.h"


int		main()
{
  t_dico	*dico;
  int		a;

  a = 0;
  dico = NULL;
  dico = add(dico, "Pakatou", "Pakistanais");
  dico = add(dico, "Finir", "Tuer");
  dico = add(dico, "Biturer", "S'enivrer");
  dico = add(dico, "Piger", "Comprendre");
  dico = add(dico, "Ouf", "Fou");
  dico = add(dico, "Porte-flouze", "Portefeuille");
  my_putstr("\033c");
  my_putstr("\n\033[0;1m               Bienvenue sur le DicoWesh !\033[0m\n");
  while (a == 0)
    a = menu(&dico);
  while (dico != NULL)
    {
      free(dico);
      dico = dico->next;
    }
  return (0);
}
