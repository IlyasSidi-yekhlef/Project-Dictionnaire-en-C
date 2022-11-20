//
// Created by sidiy on 17/11/2022.
//

#include "node_adv.h"

p_adv_node creat_node_adv(char l){
    p_adv_node new;
    new = (p_adv_node)malloc(sizeof(t_adv_node));
    new->letter = l;
    for(int k = 0;k<=26;k++){
        new->sons[k] = NULL;
    }
    printf("%c",l);
    return new;
}
