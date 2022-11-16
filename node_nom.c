//
// Created by sidiy on 14/11/2022.
//

#include "node_nom.h"

p_nom_node creat_node_nom(char l){
    p_nom_node new;
    new = (p_nom_node)malloc(sizeof(t_nom_node));
    new->letter = l;
    for(int k = 0;k<=26;k++){
        new->sons[k] = NULL;
    }
    printf("%c",l);
    return new;
}

void display_nom_node(p_nom_node node){
    if(node == NULL){
        printf("NULL");
    }
    else{
        printf("%c\n|\n|\n|",node->letter);
        for(int i = 0; i<=26;i++){
            if(node->sons[i] != NULL){
                display_nom_node(node->sons[i]);
                printf("----");
            }
        }
    }
}
