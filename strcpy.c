/*
** strcpy.c for  in /Users/vanhem_n/Documents/SVN_DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct 15 22:12:56 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct 17 11:45:12 2015 VAN HEMELRYCK Nathan
*/

#include "struct.h"

char    *my_strcpy(char *dest, char *src)
{
  int   c1;
  
  c1 = 0;
  while (src[c1] != '\0')
    {
      dest[c1] = src[c1];
      ++c1;
    }
  return (dest);
}
