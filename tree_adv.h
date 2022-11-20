//
// Created by sidiy on 17/11/2022.
//

#ifndef PROJET_DICOREEL_TREE_ADV_H
#define PROJET_DICOREEL_TREE_ADV_H

#include "node_adv.h"
#include "node_adv.c"

typedef struct s_tree_adv{
    t_adv_node * root[27] ;
}t_tree_adv, p_tree_adv;

p_tree_adv fill_tree_adv();

#endif //PROJET_DICOREEL_TREE_ADV_H
