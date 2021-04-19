
typedef struct s_cell
{
    double        elt;
    struct s_cell *next;    
} t_cell;

t_cell *heron(double p, double a);
