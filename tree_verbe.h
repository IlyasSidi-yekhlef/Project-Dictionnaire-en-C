//
// Created by sidiy on 17/11/2022.
//

#ifndef PROJET_DICOREEL_TREE_VERBE_H
#define PROJET_DICOREEL_TREE_VERBE_H

#include "node_verbe.h"
#include "node_verbe.c"

typedef struct s_tree_ver{
    t_ver_node * root[27] ;
}t_tree_ver, p_tree_ver;

p_tree_ver fill_tree_ver();

#endif //PROJET_DICOREEL_TREE_VERBE_H
