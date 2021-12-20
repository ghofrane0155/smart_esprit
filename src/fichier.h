#ifndef FICHIER_H_
#define FICHIER_H_
#include <gtk/gtk.h>
struct stock{
int stock_actuel;
int entree;
int sortie;
char date_mvt[11];
int stock_max;
int seuil_min;
char alerte[10];
};typedef struct stock Stock;

struct produit{
char reference[15];
char designation[30];
char categorie[30];
char unite_mesure[10];
char date_expiration[11];
char etagere[10];
Stock qte;
char fournisseur[20];
float prix_unite;
};typedef struct produit Produit;

int ajout(char nom_fich[], Produit p);
Produit recherche(char nom_fich[],char ref[]);//retourne -1 sil n'exsite pas sinon son pos
int supprimer(char nom_fich[],char ref[]);
int modif(char nom_fich[],Produit p);
void dashboard(char nom_fich[]);
void affiche1(GtkWidget *liste,char nom_fich[]);
 #endif
