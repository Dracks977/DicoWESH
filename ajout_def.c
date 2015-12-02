/*
** ajout_def.c for  in /Users/vanhem_n/Documents/DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct 15 12:18:36 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct 17 14:08:13 2015 VAN HEMELRYCK Nathan
*/

#include "struct.h"

t_dico		*add(t_dico *dico,  char *fr, char *wh)
{
  t_dico	*node;
  
  node = malloc(sizeof(*node));
  if (node == NULL)
    return (0);
  else
    {
      t_dico        *tmp;
      t_dico        *n_dico;
      
      n_dico = dico;      
      tmp = NULL;
      node->fr = fr;
      node->wh = wh;    
      while (n_dico != NULL && (my_strcmp(n_dico->fr, fr) == -1 || my_strcmp(n_dico->fr, fr) == 0 ))
	{
	  if (my_strcmp(n_dico->fr, fr) == -1)
	    tmp = n_dico;
	  else
	    n_dico->fr = fr;
	  n_dico = n_dico->next;
	}
      node->next = n_dico;
      if (tmp != NULL)
	tmp->next = node;
      else
	dico = node;
    }
  return (dico);
}
 
t_dico		*add_f(t_dico *dico)
{
  char		*fr;
  char		*wh;
  my_putstr("\033c");
  my_putstr("\n----ajout de définition----\n");
  my_putstr("entrer le mot en 'wesh' (doit commencer par une Majuscule) : ");
  wh = readLine();
  if (wh[0] == '\0')
    {
      my_putstr("heu, t'as pas oublie un mot mec ?\n");
      my_putstr("-----------\e[31mErreure\e[39m----------\n");
      return (dico);
    }
  my_putstr("entrer le mot en 'fr' (doit commencer par une Majuscule) : ");
  fr = readLine();
  if (fr[0] == '\0')
    {
      my_putstr("heu, t'as pas oublie un mot mec ?\n");
      my_putstr("-----------\e[31mErreure\e[39m----------\n");
      return (dico);
    }
  if ((wh[0] >= 'A' && wh[0] <= 'Z') && (fr[0] >= 'A' && fr[0] <= 'Z') )
    {
      dico = add(dico, wh, fr);
      my_putstr("-------Mot enregistre-------\n");
    }
  else
      my_putstr("\e[31mLes mots doivent commencer par une majuscule\e[39m\n");
  return (dico); 
}
