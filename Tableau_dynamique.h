#ifndef __TAB_DYN__
#define __TAB_DYN__
#define TAILLE_INIT 3
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct{
    unsigned int taille_reelle;
    unsigned int taille_max;
    void **donnees;
}Tab_dyn;

void appliquer_tab_dyn(Tab_dyn *tab, void (*appliquer)(void *));
void liberer_tab(Tab_dyn **tab, void (*liberer_elem)(void *));
int init_tab_dyn(Tab_dyn *tab);
int ajouter_fin(Tab_dyn *tab, void *elem, void *(*allouer_elem)(const void *));
#endif
