//
// Created by sidiy on 17/11/2022.
//

#ifndef PROJET_DICOREEL_NODE_ADJECTIF_H
#define PROJET_DICOREEL_NODE_ADJECTIF_H

#include "stdlib.h"
#include "stdio.h"

typedef struct s_adj_node
{
    char letter ;
    struct s_adj_node * sons [27];
    char base[35];
    char flechie[4][35];
    int nb;

}t_adj_node,  *p_adj_node;

p_adj_node creat_node_adj(char l);

#endif //PROJET_DICOREEL_NODE_ADJECTIF_H
