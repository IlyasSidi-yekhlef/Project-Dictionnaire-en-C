//
// Created by sidiy on 20/11/2022.
//

#include "sentence.h"

void search_word_unknow_type(char tab[],p_tree_adj adj,p_tree_adv adv,p_tree_nom nom,p_tree_ver ver){
    int existe = 1 , i = 0, stop = 0, count =0;
    char end = '\0';
    printf("%s",tab);
    p_nom_node temp_nom = nom.root[tab[i] -97];
    p_adj_node temp_adj = adj.root[tab[i] -97];
    p_adv_node temp_adv = adv.root[tab[i] -97];
    p_ver_node temp_ver = ver.root[tab[i] -97];

    while(tab[i] !=  end && existe == 1 ){
        if (temp_nom->letter == tab[i]){
            existe = 1;
            temp_nom = temp_nom->sons[tab[i+1] -97];
            i++;
        }
        else{
            existe = 0;
        }
    }
    printf("%d",existe);
    if( existe == 0){
        existe = 1;
        i = 0;
        while(tab[i] !=  end && existe == 1 ){
            if (temp_adj->letter == tab[i]){
                existe = 1;
                temp_adj = temp_adj->sons[tab[i+1] -97];
                i++;
            }
            else{
                existe = 0;
            }
        }
        printf("%d",existe);
        if( existe == 0){
            existe = 1;
            i = 0;
            while(tab[i] !=  end && existe == 1 ){
                if (temp_ver->letter == tab[i]){
                    existe = 1;
                    temp_ver = temp_ver->sons[tab[i+1] -97];
                    i++;
                }
                else{
                    existe = 0;
                }
            }
            printf("%d",existe);
            if( existe == 0){
                existe = 1;
                i = 0;
                while(tab[i] !=  end && existe == 1 ){
                    if (temp_adv->letter == tab[i]){
                        existe = 1;
                        temp_adv = temp_adv->sons[tab[i+1] -97];
                        i++;
                    }
                    else{
                        existe = 0;
                    }
                }
                printf("%d",existe);
            }
        }
    }
    if( existe == 0){
        printf("%s n'existe pas dans ce dictionnaire.",tab);
    }
    else{
        printf("%s existe dans ce dictionnaire.",tab);
    }


    }
