//
// Created by sidiy on 14/11/2022.
//

#include "tree_nom.h"

t_tree_nom fill_tree_nom(){
    p_tree_nom simple_tree;
    int i;
    p_nom_node temp;
    int count = 0;
    char l ;
//    int i;
//    p_nom_node temp = simple_tree.root;
//    temp = (p_nom_node) malloc(sizeof(t_nom_node));
//    temp =simple_tree.root;

    FILE *dicofile =fopen("C:\\Users\\sidiy\\CLionProjects\\PRojet_DicOReel\\dictio.txt", "rt"); //mettre true path (clique droit sur le fichier copy path reference puis absolute reference car C part de la racine)
    char flechie[35];
    char base[35];
    char formes[35];
    if (dicofile != NULL)
    {
        while(fscanf(dicofile,"%s\t%s\t%s", flechie, base, formes) != EOF) //EOF pour end of file et \t pour les tabulations
        {
            l = base[0];
            if( simple_tree.root[base[0]] != NULL && base[0] = "/0"){
                simple_tree.root[base[0]] = creat_node_nom(base[0]);
            }
            temp = simple_tree.root[base[0]];
            while (l != "b") {
                for (i = 0; i >= count; i++) {
                    temp = temp->sons[base[i] - 97];
                }
                if (temp != NULL) {
                    temp = creat_node_nom(base[count]);
                }
                count++;
                l = base[count];
            }
            count = 0;


        }
        fclose(dicofile);
    } return simple_tree;
    printf("l");
    return simple_tree;
}


void fill_nodes_nom(p_tree_nom simple_tree, char base[35]) {
    int i;
    p_nom_node temp;
    temp = simple_tree.root[base[0]];
    int count = 0;
    char l = base[count];
//    while(count != 35){
//        printf("%c",base[count]);
//        count++;
//    }
    while (l != "b") {
        for (i = 0; i >= count; i++) {
            temp = temp->sons[base[i] - 97];
            }
        if (temp != NULL) {
            temp = creat_node_nom(base[count]);
            }
        count++;
        l = base[count];
        }


    }


void display_tree_nom(t_tree_nom simple_tree){
    for(int i = 0; i<=25;i++){
        if(simple_tree.root[i] != NULL){
            display_nom_node(simple_tree.root[i]);
        }
    }
}

