#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "heron.h"

#define alloc(t) (t*) malloc(sizeof(t))

t_cell *init_cell(double elt, t_cell *next)
{
	t_cell *cell = alloc(t_cell);
	cell->elt = elt;
	cell->next = next;
	return cell;
}

t_cell *heron(double p, double x0)
{
    double x;
    t_cell *head;

    head = init_cell(x0, NULL);
    x = 0.5 * (x0 + (p / x0));
    while ((fabs(x - x0)) > pow(10, -7))
    {
        x0 = x;
        x = 0.5 * (x + (p / x));
        head = init_cell(x0, head);
    }
    return (head);
}
