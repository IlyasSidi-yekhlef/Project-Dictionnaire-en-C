//
// Created by sidiy on 17/11/2022.
//

#include "node_adjectif.h"

p_adj_node creat_node_adj(char l){
    p_adj_node new;
    new = (p_adj_node)malloc(sizeof(t_adj_node));
    new->letter = l;
    new->nb = 0;
    for(int k = 0;k<=26;k++){
        new->sons[k] = NULL;
    }
    printf("%c",l);
    return new;
}