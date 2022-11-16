//
// Created by sidiy on 14/11/2022.
//

#include "tree_nom.h"

p_tree_nom fill_tree_nom(){
    p_tree_nom simple_tree;
    for(int k = 0;k<=25;k++){
        simple_tree.root[k] = NULL;
        printf("1");
    }
    int i;
    p_nom_node temp = NULL;
    int count = 1;
    char end = '\0';
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
            i = base[0] - 97;
            printf("%s\n",base);
            printf("%d\n",i);
            if( simple_tree.root[i] == NULL && base[0] != end){
                temp = creat_node_nom(base[0]);
            }
            simple_tree.root[i] = temp;
            printf("%c",temp->letter);
            while (base[count] != end) {
                printf("A\n");
//                for (i = 1; i >= count; i++) {
//                    temp = temp->sons[base[i] - 97];
//                }
                i = base[count] - 97;
//                printf("%d",temp->sons[i]->letter);
//                if(count != 1){
//                    temp = temp->sons[i];
//                }

                if (temp->sons[i] == NULL && base[count] != end) {
                    printf("Z\n");
                    temp->sons[i] = creat_node_nom(base[count]);
                }
                temp = temp->sons[i];
                count++;
                printf("%d",count);
//                display_tree_nom(simple_tree);
            }
            printf("fin");
            i = base[0] - 97;

            count = 1;


        }
        fclose(dicofile);
    } return simple_tree;
    printf("l");
    return simple_tree;
}


//void fill_nodes_nom(p_tree_nom simple_tree, char base[35]) {
//    int i;
//    p_nom_node temp;
//    temp = simple_tree.root[base[0]];
//    int count = 0;
//    char l = base[count];
//    while(count != 35){
//        printf("%c",base[count]);
//        count++;
//    }
//    while (l != "b") {
//        for (i = 0; i >= count; i++) {
//            temp = temp->sons[base[i] - 97];
//            }
//        if (temp != NULL) {
//            temp = creat_node_nom(base[count]);
//            }
//        count++;
//        l = base[count];
//        }
//
//
//    }


void display_tree_nom(t_tree_nom simple_tree){
    for(int i = 0; i<=25;i++){
        if(simple_tree.root[i] != NULL){
            display_nom_node(simple_tree.root[i]);
        }
    }
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

