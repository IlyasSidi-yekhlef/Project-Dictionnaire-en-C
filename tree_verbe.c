//
// Created by sidiy on 17/11/2022.
//

#include "tree_verbe.h"

p_tree_ver fill_tree_ver(){
    p_tree_ver simple_tree;
    for(int k = 0;k<=26;k++){
        simple_tree.root[k] = NULL;
    }
    int i;
    p_ver_node temp = NULL;
    int count = 1;
    int conjugaison, pronom, count2 = 0, three = 1;
    char temps[3];
    temps[0] = 'Z';
    temps[1] = 'Z';
    temps[2] = 'Z';
    char end = '\0';

    FILE *dicofile =fopen("C:\\Users\\sidiy\\CLionProjects\\PRojet_DicOReel\\dictio.txt", "rt"); //mettre true path (clique droit sur le fichier copy path reference puis absolute reference car C part de la racine)
    char flechie[35];
    char base[35];
    char formes[35];
    if (dicofile != NULL)
    {
        while(fscanf(dicofile,"%s\t%s\t%s", flechie, base, formes) != EOF) //EOF pour end of file et \t pour les tabulations
        {
            if(formes[2] == 'r' && base[0]<='z'&& base[0] >= 'a' ){
                i = base[0] - 97;
                printf("base : %s\n",base);
                printf("emplacement : %d\n",i);
                if( simple_tree.root[i] == NULL && base[0] != end){
                    simple_tree.root[i] = creat_node_ver(base[0]);
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
                        temp->sons[i] = creat_node_ver(base[count]);
                    }
                    temp = temp->sons[i];
                    count++;
                    printf("/%d\n",count);
                }
                printf("fin\n");
                while (formes[count2] != end) {
                    if(three == 3){
                        three = 1;
                    }
                    temps[0] = temps[1];
                    temps[1] = temps[2];
                    temps[2] = formes[count2];

                    switch (temps[0]+temps[1]+temps[2]) {
                        case 'I'+'n'+'f': conjugaison = 0;
                            for (int a = 0; a <= 35; a++) {
                                temp->flechie[conjugaison][0][a] = flechie[a];
                            }
                            break;
                        case 'I'+'p'+'r': conjugaison = 1;
                            switch (formes[count2+2]) {
                                case 'S':
                                    switch (formes[count2 + 5]) {
                                        case '1':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][0][a] = flechie[a];
                                            }
                                            break;
                                        case '2':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][1][a] = flechie[a];
                                            }
                                            break;
                                        case '3':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][2][a] = flechie[a];
                                            }
                                            break;
                                    }
                                    break;
                                case 'P':
                                    switch (formes[count2 + 5]) {
                                        case '1':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][3][a] = flechie[a];
                                            }
                                            break;
                                        case '2':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][4][a] = flechie[a];
                                            }
                                            break;
                                        case '3':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][5][a] = flechie[a];
                                            }
                                            break;
                                    }
                                    break;
                            }
                        case 'I'+'I'+'m': conjugaison = 2;
                            switch (formes[count2+2]) {
                                case 'S':
                                    switch (formes[count2 + 5]) {
                                        case '1':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][0][a] = flechie[a];
                                            }
                                            break;
                                        case '2':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][1][a] = flechie[a];
                                            }
                                            break;
                                        case '3':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][2][a] = flechie[a];
                                            }
                                            break;
                                    }
                                    break;
                                case 'P':
                                    switch (formes[count2 + 5]) {
                                        case '1':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][3][a] = flechie[a];
                                            }
                                            break;
                                        case '2':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][4][a] = flechie[a];
                                            }
                                            break;
                                        case '3':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][5][a] = flechie[a];
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;
                        case 'S'+'P'+'r': conjugaison = 3;
                            switch (formes[count2+2]) {
                                case 'S':
                                    switch (formes[count2 + 5]) {
                                        case '1':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][0][a] = flechie[a];
                                            }
                                            break;
                                        case '2':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][1][a] = flechie[a];
                                            }
                                            break;
                                        case '3':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][2][a] = flechie[a];
                                            }
                                            break;
                                    }
                                    break;
                                case 'P':
                                    switch (formes[count2 + 5]) {
                                        case '1':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][3][a] = flechie[a];
                                            }
                                            break;
                                        case '2':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][4][a] = flechie[a];
                                            }
                                            break;
                                        case '3':
                                            for (int a = 0; a <= 35; a++) {
                                                temp->flechie[conjugaison][5][a] = flechie[a];
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;

                    }



                    three +=1;
                }

                
                for(int a = 0;a<=35;a++){
                    
                }
                temp->nb += 1;

                count = 1;
            }


        }
        fclose(dicofile);
    } return simple_tree;
}