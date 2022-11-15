#include <stdio.h>
#include "tree_nom.h"
#include "tree_nom.c"

int main() {
    t_tree_nom nom = fill_tree_nom();
    display_tree_nom(nom);
    return 0;
}