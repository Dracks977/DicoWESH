/*
** readline.c for  in /Users/vanhem_n/Documents/DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct 15 11:22:25 2015 VAN HEMELRYCK Nathan
** Last update Thu Oct 15 23:05:44 2015 VAN HEMELRYCK Nathan
*/

#include <unistd.h>
#include <stdlib.h>

void            my_putchar(char c)
{
  write (1, &c, 1);
}

void            my_putstr(char *str)
{
  int           i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      ++i;
    }
}

char            *readLine()
{
  size_t        ret;
  char          *buff;

  if ((buff = malloc(sizeof(*buff) * (100 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 100)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
