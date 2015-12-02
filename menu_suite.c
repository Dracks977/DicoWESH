/*
** t.c for  in /Users/vanhem_n/Documents/DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct 15 15:14:38 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct 17 14:55:52 2015 VAN HEMELRYCK Nathan
*/

#include "struct.h"

int		my_strcmp(char *s1, char *s2)
{   
  int		i;
  
  i= 0;
  while ((s1[i] != '\0') && (s2[i] != '\0'))
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s1[i] > s2[i])
	return (1);
      i++;
    }
  if (s1[i] < s2[i])
    return (-1);
  if (s1[i] > s2[i])
    return (1);
  return (0);
}

void		mfich()
{
  my_putstr("\n --------------------------------------------------------\n");
  my_putstr(" | a : afficher le dictionnaire sous la forme wesh : fr |\n");
  my_putstr(" | b : afficher le dictionnaire sous la forme fr : wesh |\n");
  my_putstr(" | 1 : ajouter une définition                           |\n");
  my_putstr(" | 2 : traduire du wesh au francais                     |\n");
  my_putstr(" | 3 : traduire du francais au wesh                     |\n");
  my_putstr(" | q : quitter                                          |\n");
  my_putstr(" --------------------------------------------------------\n");
  my_putstr("\033[0;5m>>\033[0m");
}

void		ab(char *rov, t_dico **dico)
{
  if (rov[0] == 'a')
    {
      aff(*dico);
    }
  else /* b  */
    {
      aff2(*dico);
    }
}

void		undeuxtrois(char *rov, t_dico **dico)
{
  if (rov[0] == '1')
    {
      *dico = add_f(*dico);
    }
  else if (rov[0] == '2')
    {
      m_find(*dico);
    }
  else /* 3 */
    {
      m_find2(*dico);
    }
}
