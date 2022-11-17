//
// Created by miche on 12/11/2022.
//

#ifndef MAIN_C_NOM_H
#define MAIN_C_NOM_H

//
//typedef struct s_mot{
//    char tab[35];
//}t_mot;

typedef struct s_nom_node
{
    char letter;
    struct s_nom_node * sons [25];
    char flechie[35];

}t_nom_node,  *p_nom_node;

p_nom_node create_nom_node(char);


#endif //MAIN_C_NOM_H