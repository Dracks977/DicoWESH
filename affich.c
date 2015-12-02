/*
** affich.c for  in /Users/vanhem_n/Documents/DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct 15 15:59:48 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct 17 09:04:31 2015 VAN HEMELRYCK Nathan
*/

#include "struct.h"

void		aff(t_dico *dico)
{
  if (dico == NULL)
    {
      my_putstr("\033c");
      my_putstr("\n---\e[31mle dictionaire est vide\e[39m---\n");
    }  
  else
    {
      my_putstr("\033c");
      my_putstr("\n-----Wesh : Fr-----\n");
      while (dico != NULL)
	{
	  my_putstr(dico->fr);
	  my_putstr(" : ");
	  my_putstr(dico->wh);
	  my_putstr("\n");
	  dico = dico->next;
	}
my_putstr("-------------------\n");
    }
}

void		aff2(t_dico *dico)
{
  t_dico	*temp;

  temp = NULL;
  if (dico == NULL)
    {
      my_putstr("\033c");
      my_putstr("\n---\e[31mle dictionaire est vide\e[39m---\n");
    }
  else
    {
  while (dico != NULL)
    {
      temp = add(temp, dico->wh, dico->fr);
      dico = dico->next;      
    }
  my_putstr("\033c");
  my_putstr("\n-----Fr : Wesh-----\n");
  while (temp != NULL)
    {
      my_putstr(temp->fr);
      my_putstr(" : ");
      my_putstr(temp->wh);
      my_putstr("\n");
      temp = temp->next;
    }
my_putstr("-------------------\n");
    }
}
