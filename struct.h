/*
** struct.h for  in /Users/vanhem_n/Documents/DICO
** 
** Made by VAN HEMELRYCK Nathan
** Login   <Vanhem_n@etna-alternance.net>
** 
** Started on  Thu Oct 15 12:13:47 2015 VAN HEMELRYCK Nathan
** Last update Sat Oct 17 09:39:00 2015 VAN HEMELRYCK Nathan
*/

#ifndef __STRUCT_H__
#define	__STRUCT_H__

#include <stdlib.h>

typedef struct s_dico
{
  char	*fr;
  char	*wh;
  struct s_dico *next;
}	t_dico;

void            my_putstr(char *str);
void		aff(t_dico *dico);
void            aff2(t_dico *dico);
char		*my_strdup(char *str);
int		menu(t_dico **dico);
char		*my_strcpy(char *dest, char *src);
void            my_putstr(char *str);
char            *readLine();
t_dico		*add(t_dico *dico,  char *fr, char *wh);
t_dico		*add_f(t_dico *dico);
int		my_strlen(char *str);
void		mfich();
void		ab(char *rov, t_dico **dico);
void		undeuxtrois(char *rov, t_dico **dico);
int		my_strcmp(char *s1, char *s2);
void            m_find(t_dico *dico);
void            m_find2(t_dico *dico);

#endif
