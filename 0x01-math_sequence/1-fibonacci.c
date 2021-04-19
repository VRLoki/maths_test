#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "fibonacci.h"

#define alloc(t) (t *)malloc(sizeof(t))

t_cell *init_cell(int elt, t_cell *next)
{
    t_cell *cell = alloc(t_cell);
    cell->elt = elt;
    cell->next = next;
    return cell;
}

int list_length(t_cell *head)
{
    t_cell *cur = head;
    int size = 0;
    while (cur != NULL)
    {
        ++size;
        cur = cur->next;
    }
    return size;
}

double gold_number(t_cell *head)
{
    if (head == NULL || list_length(head) - 3 == 1000)
        return -1;
    else if (head->next != NULL)
    {
        t_cell *tmp = head->next;
        return (head->elt / (double)tmp->elt);
    }
    else
        return -1;
}

t_cell *Fibonnaci()
{
    int f1, f2, f3, n;
    t_cell *head;

    n = 0;
    f1 = 1;
    f2 = 1;
    f3 = f2 + f1;
    head = NULL;
    head = init_cell(f1, head);
    head = init_cell(f2, head);
    head = init_cell(f3, head);
    while ((n < 1000) && ((fabs((f3 / (float)f2) - (f2 / (float)f1))) > pow(10, -7)))
    {
        f1 = f2;
        f2 = f3;
        f3 = f3 + f1;
        head = init_cell(f3, head);
        n++;
    }
    if (n == 1000 && ((fabs((f3 / (float)f2) - (f2 / (float)f1))) > pow(10, -7)))
        return NULL;
    else
        return head;
}
