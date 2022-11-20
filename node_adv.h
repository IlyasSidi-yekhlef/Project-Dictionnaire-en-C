//
// Created by sidiy on 17/11/2022.
//

#ifndef PROJET_DICOREEL_NODE_ADV_H
#define PROJET_DICOREEL_NODE_ADV_H

#include "stdlib.h"
#include "stdio.h"

typedef struct s_adv_node
{
    char letter ;
    struct s_adv_node * sons [27];
    char base[35];

}t_adv_node,  *p_adv_node;

p_adv_node creat_node_adv(char l);

#endif //PROJET_DICOREEL_NODE_ADV_H
