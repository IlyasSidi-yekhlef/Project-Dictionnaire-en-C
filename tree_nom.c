//
// Created by sidiy on 14/11/2022.
//

#include "tree_nom.h"

p_tree_nom fill_tree_nom(){
    p_tree_nom simple_tree;
    for(int k = 0;k<=26;k++){
        simple_tree.root[k] = NULL;
    }
    int i;
    p_nom_node temp = NULL;
    int count = 1;
    char end = '\0';

    FILE *dicofile =fopen("C:\\Users\\sidiy\\CLionProjects\\PRojet_DicOReel\\dictio.txt", "rt"); //mettre true path (clique droit sur le fichier copy path reference puis absolute reference car C part de la racine)
    char flechie[35];
    char base[35];
    char formes[35];
    if (dicofile != NULL)
    {
        while(fscanf(dicofile,"%s\t%s\t%s", flechie, base, formes) != EOF) //EOF pour end of file et \t pour les tabulations
        {
            if(formes[0] == 'N' && base[0]<='z'&& base[0] >= 'a' ){
                i = base[0] - 97;
                printf("base : %s\n",base);
                printf("emplacement : %d\n",i);
                if( simple_tree.root[i] == NULL && base[0] != end){
                    simple_tree.root[i] = creat_node_nom(base[0]);
                }
                temp = simple_tree.root[i];
                while (base[count] != end) {

                    if(base[count] == '-'){
                        i = 26;
                    }
                    else{
                        i = base[count] - 97;
                    }
                    printf("%d",i);

                    if (temp->sons[i] == NULL && base[count] != end) {
                        printf("/OK/");
                        temp->sons[i] = creat_node_nom(base[count]);
                    }
                    temp = temp->sons[i];
                    count++;
                    printf("/%d\n",count);
//                display_tree_nom(simple_tree);
                }
                printf("fin\n");
                for(int a = 0;a<=35;a++){
                    temp->flechie[a] = flechie[a];
                    temp->base[a] = base[a];
                }
                temp->nb = 1;
                

                count = 1;
            }


        }
        fclose(dicofile);
    } return simple_tree;
}



void display_tree_nom(t_tree_nom simple_tree){
    for(int i = 0; i<=26;i++){
        if(simple_tree.root[i] != NULL){
            display_nom_node(simple_tree.root[i]);
        }
    }
}

