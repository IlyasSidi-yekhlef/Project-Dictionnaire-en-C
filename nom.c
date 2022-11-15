//
// Created by miche on 12/11/2022.
//

#include "nom.h"


p_nom_node create_nom_node(char letter){
    p_nom_node nouv;
    nouv = (p_nom_node) malloc(sizeof(t_nom_node));
    nouv->letter = letter;
    return nouv;
};
