/*
** strlen.c for  in /Users/vanhem_n/Documents/SVN_DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct 15 21:48:38 2015 VAN HEMELRYCK Nathan
** Last update Thu Oct 15 21:48:46 2015 VAN HEMELRYCK Nathan
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      ++i;
    }
  return (i);
}
