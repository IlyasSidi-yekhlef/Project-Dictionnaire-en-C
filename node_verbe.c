//
// Created by sidiy on 17/11/2022.
//

#include "node_verbe.h"

p_ver_node creat_node_ver(char l){
    p_ver_node new;
    new = (p_ver_node)malloc(sizeof(t_ver_node));
    new->letter = l;
    new->nb = 0;
    for(int k = 0;k<=26;k++){
        new->sons[k] = NULL;
    }
    printf("%c",l);
    return new;
}