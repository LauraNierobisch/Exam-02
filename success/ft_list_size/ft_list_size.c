#include<stdio.h>
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


int	ft_list_size(t_list *begin_list)
{
    t_list temp = *begin_list; 
    int i = 0;
    while (begin_list->next != NULL)
    {
        i++;
        begin_list = begin_list ->next;
    }
    return(1+i);
}