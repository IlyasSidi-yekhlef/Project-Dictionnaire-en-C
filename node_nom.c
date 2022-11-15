//
// Created by sidiy on 14/11/2022.
//

#include "node_nom.h"

p_nom_node creat_node_nom(char l){
    p_nom_node new;
    new->letter = l;
    return new;
}

void display_nom_node(p_nom_node node){
    if(node == NULL){
        printf("NULL");
    }
    else{
        printf("%c\n|\n|\n|",node->letter);
        for(int i = 0; i<=25;i++){
            if(node->sons[i] != NULL){
                display_nom_node(node->sons[i]);
                printf("----");
            }
        }
    }
}
