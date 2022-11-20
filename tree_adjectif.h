//
// Created by sidiy on 17/11/2022.
//

#ifndef PROJET_DICOREEL_TREE_ADJECTIF_H
#define PROJET_DICOREEL_TREE_ADJECTIF_H

#include "node_adjectif.h"
#include "node_adjectif.c"

typedef struct s_tree_adj{
    t_adj_node * root[27] ;
}t_tree_adj, p_tree_adj;

p_tree_adj fill_tree_adj();

#endif //PROJET_DICOREEL_TREE_ADJECTIF_H
