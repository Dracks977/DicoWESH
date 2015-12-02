/*
** main.c for  in /Users/vanhem_n/Documents/DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct 15 10:50:10 2015 VAN HEMELRYCK Nathan
** Last update Fri Oct 16 16:21:51 2015 VAN HEMELRYCK Nathan
*/

#include "struct.h"

int             menu(t_dico **dico)
{
  char          *rov;
  
  mfich();
  rov = readLine();
  if (my_strcmp(rov, "a") == 0 || my_strcmp(rov, "b") == 0)
    ab(rov, dico);
  else if (my_strcmp(rov, "1") == 0 || my_strcmp(rov, "2") == 0 
	   || my_strcmp(rov, "3") == 0)
    undeuxtrois(rov, dico);
  else if (my_strcmp(rov, "q") == 0)
    {
      my_putstr("\033c");
      my_putstr("\n(`'·.¸(`'·.¸*¤*¸.·'´)¸.·'´)\n");
      my_putstr("«´¨`·..¤.·´:Bye:`·.¤..·´¨`»\n");
      my_putstr("(¸.·'´(¸.·'´*¤*`'·.¸)`'·.¸)\n\n");
      return (-1);
    }
  else
    {
      my_putstr("\033c");
      my_putstr("\nwesh faut rentrer soit a, b, 1, 2, 3 ou q pour quiter, Essaies pas de me Couiller\n");
    }
  return (0);
}
