/*
** strdup.c for  in /Users/vanhem_n/Documents/SVN_DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct 15 21:46:27 2015 VAN HEMELRYCK Nathan
** Last update Thu Oct 15 22:14:31 2015 VAN HEMELRYCK Nathan
*/

#include <stdlib.h>
#include "struct.h"

char	*my_strdup(char *str)
{
  int	o;
  char	*str2;

  o = my_strlen(str);
  str2 = malloc(o);
  my_strcpy(str2, str);
  return (str2);
}
