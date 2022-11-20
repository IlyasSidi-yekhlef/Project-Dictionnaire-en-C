//
// Created by sidiy on 17/11/2022.
//

#ifndef PROJET_DICOREEL_NODE_VERBE_H
#define PROJET_DICOREEL_NODE_VERBE_H

#include "stdlib.h"
#include "stdio.h"

typedef struct s_ver_node
{
    char letter ;
    struct s_ver_node * sons [27];
    char flechie[4][6][35];
    int nb;

}t_ver_node,  *p_ver_node;

p_ver_node creat_node_ver(char l);


#endif //PROJET_DICOREEL_NODE_VERBE_H
