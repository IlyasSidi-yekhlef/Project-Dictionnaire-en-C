//
// Created by miche on 12/11/2022.
//
#include "stdlib.h"
#include "tree_nom.h"



//p_tree_nom fill_tree_nom(){
//    p_tree_nom simple_tree;
//    int i;
//    p_nom_node temp;
//    temp = (p_nom_node) malloc(sizeof(t_nom_node));
//    temp =simple_tree.root;
//
//    FILE *dicofile =fopen("C:\\Users\\miche\\OneDrive\\Bureau\\cours L2\\C\\projet\\untitled10\\dictionaire.txt", "rt"); //mettre true path (clique droit sur le fichier copy path reference puis absolute reference car C part de la racine)
//    char flechie[35];
//    char base[35];
//    char formes[35];
//    if (dicofile != NULL)
//    {
//        while(fscanf(dicofile,"%s\t%s\t%s", flechie, base, formes) != EOF) //EOF pour end of file et \t pour les tabulations
//        {
//            printf("ok");
//        }
//        int count=0;
//        while(base[count] !="/o")
//        {
//            for ( i=0 ;i >= count; i++)
//            {
//                temp = temp[base[i]-97].sons;
//            }
//            if( temp != NULL){
//
//                temp[base[count]-97] = creat_node_nom(base[count]);
//            }
//            count++;
//        }
//        fclose(dicofile);
//    } return simple_tree; }


t_tree_nom fill_tree_nom(){
    p_tree_nom simple_tree;
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
            if( simple_tree.root[base[0]] != NULL){
                simple_tree.root[base[0]] = creat_node_nom(base[0]);
            }
            fill_nodes_nom(simple_tree, base);

        }
        fclose(dicofile);
    } return simple_tree; }


void fill_nodes_nom(p_tree_nom simple_tree, char base[35]) {
    int i;
    p_nom_node temp;
    temp = simple_tree.root[base[0]];
    int count = 0;
    while (base[count] != "/o") {
        for (i = 0; i >= count; i++) {
            temp = temp->sons[base[i] - 97];
        }
        if (temp != NULL) {
            temp = creat_node_nom(base[count]);
        }
        count++;
    }

}



void display_ftree_nom()