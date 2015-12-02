/*
** find.c for  in /Users/vanhem_n/Documents/DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Fri Oct 16 13:34:23 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct 17 13:38:30 2015 VAN HEMELRYCK Nathan
*/

#include "struct.h"

void		m_find(t_dico *dico)
{
  char		*find;
  t_dico	*temp;
  char		*wh;

  temp = malloc(sizeof(*dico));
  temp = dico;
  my_putstr("\033c");
  my_putstr("\n-----Recherche Wesh-----\n");
  my_putstr("mots en wesh : ");
  find = readLine();
  wh = NULL ;
  while (temp != NULL)
    {
      if (my_strcmp(temp->fr, find) == 0)
	{
	  wh = malloc(sizeof(temp->wh));
	  my_strcpy(wh, temp->wh);
	}
      temp = temp->next;
    }
  if (wh == NULL)
    my_putstr("-----\e[31mMot introuvable\e[39m----\n");
  else
    {
      my_putstr("definition : ");
      my_putstr(wh);
      free(wh);
      my_putstr("\n---Recherche complete---\n");
    }
  free(temp);
}

void            m_find2(t_dico *dico)
{
  char          *find;
  t_dico        *temp;
  char          *fr;

  temp = malloc(sizeof(*dico));
  temp = dico;
  my_putstr("\033c");
  my_putstr("\n-----Recherche Fr-----\n");
  my_putstr("mots en fr : ");
  find = readLine();
  fr = NULL ;
  while (temp != NULL)
    {
      if (my_strcmp(temp->wh, find) == 0)
        {
          fr = malloc(sizeof(temp->fr));
          my_strcpy(fr, temp->fr);
        }
      temp = temp->next;
    }
  if (fr == NULL)
    my_putstr("-----\e[31mMot introuvable\e[39m----\n");
  else
    {
      my_putstr("definition : ");
      my_putstr(fr);
      free(fr);
      my_putstr("\n---Recherche complete---\n");
    }
  free(temp);
}
