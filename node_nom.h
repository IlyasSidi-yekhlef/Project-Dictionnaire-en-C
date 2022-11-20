//
// Created by sidiy on 14/11/2022.
//

#ifndef PROJET_DICOREEL_NODE_NOM_H
#define PROJET_DICOREEL_NODE_NOM_H

#include "stdlib.h"
#include "stdio.h"


typedef struct s_nom_node
{
    char letter ;
    struct s_nom_node * sons [27];
    int nb;
    char base[35];
    char flechie[35];

}t_nom_node,  *p_nom_node;

p_nom_node creat_node_nom(char l);
void display_nom_node(p_nom_node node);


#endif //PROJET_DICOREEL_NODE_NOM_H

