//
// Created by miche on 12/11/2022.
//

#ifndef MAIN_C_TREE_NOM_H
#define MAIN_C_TREE_NOM_H
#include "nom.h"
#include "nom.c"


typedef struct s_tree_nom{
    p_nom_node root[25];
}t_tree_nom, p_tree_nom;

p_tree_nom fill_tree_nom();

void display_tree_nom (t_tree_nom);
void display_ftree_nom();

#endif //MAIN_C_TREE_NOM_H

