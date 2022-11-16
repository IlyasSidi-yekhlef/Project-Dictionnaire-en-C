//
// Created by sidiy on 14/11/2022.
//

#ifndef PROJET_DICOREEL_TREE_NOM_H
#define PROJET_DICOREEL_TREE_NOM_H

#include "node_nom.h"
#include "node_nom.c"

typedef struct s_tree_nom{
    t_nom_node * root[27] ;
}t_tree_nom, p_tree_nom;

p_tree_nom fill_tree_nom();
void fill_nodes_nom(p_tree_nom simple_tree, char base[35]);
void display_tree_nom(t_tree_nom simple_tree);


#endif //PROJET_DICOREEL_TREE_NOM_H
