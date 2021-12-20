#include <stdio.h> 
#include <string.h> 
#include "fichier.h"

#include <time.h>
#include <errno.h>
#include <stdlib.h>
#include <stdbool.h>
#include "callbacks.h"
#include <gtk/gtk.h>
/*_____ajouter un produit dans un fichier_______*/
int ajout(char nom_fich[], Produit p)
{FILE *f=NULL;
f=fopen(nom_fich,"a");//ecrire en fin
if(f!=NULL)
 {p.qte.stock_actuel=p.qte.stock_actuel+p.qte.entree-p.qte.sortie;
   if(p.qte.stock_actuel>=p.qte.seuil_min)
     strcpy(p.qte.alerte,"OK");
   else
    strcpy(p.qte.alerte,"Alerté!!");
  fprintf(f,"%s %s %s %s %s %s %d %d %d %s %d %d %s %s %f \n",p.reference,p.designation,p.categorie,p.unite_mesure,p.date_expiration,p.etagere,p.qte.stock_actuel,p.qte.entree,p.qte.sortie,p.qte.date_mvt,p.qte.stock_max, p.qte.seuil_min,p.qte.alerte,p.fournisseur,p.prix_unite);
  fclose(f);
  return(1);
 }
else
return (-1);
}
/*_____recherche un produit dans un fichier_______*/
Produit recherche(char nom_fich[],char ref[])//return struct s'il existe 
{FILE *f=NULL;
Produit e;
f=fopen(nom_fich,"r");
if(f!=NULL)
{
   while(fscanf(f,"%s %s %s %s %s %s %d %d %d %s %d %d %s %s %f \n",e.reference,e.designation,e.categorie,e.unite_mesure,e.date_expiration,e.etagere,&e.qte.stock_actuel,&e.qte.entree,&e.qte.sortie,e.qte.date_mvt,&e.qte.stock_max, &e.qte.seuil_min,e.qte.alerte,e.fournisseur,&e.prix_unite)!=EOF)
      if(strcmp(e.reference,ref)==0)
         {fclose(f);
          return(e);}
}
  return(e);
}
/*_____supprime un produit dans un fichier_______*/
int supprimer(char nom_fich[],char ref[])
{FILE *f=NULL;
FILE *f2=NULL;
Produit e;
int x=-1;
f=fopen(nom_fich,"r");//mode lecture seulement
f2=fopen("produit2.txt","w");//mode ecriture(s il n'existe pas il sera creer)
if(f==NULL)
    return(x);
else
  while(fscanf(f,"%s %s %s %s %s %s %d %d %d %s %d %d %s %s %f \n",e.reference,e.designation,e.categorie,e.unite_mesure,e.date_expiration,e.etagere,&e.qte.stock_actuel,&e.qte.entree,&e.qte.sortie,e.qte.date_mvt,&e.qte.stock_max, &e.qte.seuil_min,e.qte.alerte,e.fournisseur,&e.prix_unite)!=EOF)
      if(strcmp(e.reference,ref)!=0)
         fprintf(f2,"%s %s %s %s %s %s %d %d %d %s %d %d %s %s %f \n",e.reference,e.designation,e.categorie,e.unite_mesure,e.date_expiration,e.etagere,e.qte.stock_actuel,e.qte.entree,e.qte.sortie,e.qte.date_mvt,e.qte.stock_max, e.qte.seuil_min,e.qte.alerte,e.fournisseur,e.prix_unite);
      else
         x=1;
fclose(f);
fclose(f2);
remove(nom_fich); //supprimer le fichier f
rename("produit2.txt",nom_fich);  //rennommer le f2
return(x);
}
/*_____modifier un produit dans un fichier_______*/
int modif(char nom_fich[],Produit p)// cette fct retourne 1 s il y un modif,-1 si le fichier not found
{FILE *f=NULL;
FILE *f2=NULL;
Produit e;

p.qte.stock_actuel=p.qte.entree-p.qte.sortie;
if(p.qte.stock_actuel>=p.qte.seuil_min)
     strcpy(p.qte.alerte,"OK");
else
    strcpy(p.qte.alerte,"Alerté!!");
f=fopen(nom_fich,"r");//mode lecture seulement
f2=fopen("produit2.txt","w");//mode ecriture(s il n'existe pas il sera creer)
if(f==NULL)
 return(-1);
else
  {while(fscanf(f,"%s %s %s %s %s %s %d %d %d %s %d %d %s %s %f \n",e.reference,e.designation,e.categorie,e.unite_mesure,e.date_expiration,e.etagere,&e.qte.stock_actuel,&e.qte.entree,&e.qte.sortie,e.qte.date_mvt,&e.qte.stock_max, &e.qte.seuil_min,e.qte.alerte,e.fournisseur,&e.prix_unite)!=EOF)
      if(strcmp(e.reference,p.reference)==0)
         fprintf(f2,"%s %s %s %s %s %s %d %d %d %s %d %d %s %s %f \n",p.reference,p.designation,p.categorie,p.unite_mesure,p.date_expiration,p.etagere,p.qte.stock_actuel,p.qte.entree,p.qte.sortie,p.qte.date_mvt,p.qte.stock_max, p.qte.seuil_min,p.qte.alerte,p.fournisseur,p.prix_unite);
      else
         fprintf(f2,"%s %s %s %s %s %s %d %d %d %s %d %d %s %s %f \n",e.reference,e.designation,e.categorie,e.unite_mesure,e.date_expiration,e.etagere,e.qte.stock_actuel,e.qte.entree,e.qte.sortie,e.qte.date_mvt,e.qte.stock_max, e.qte.seuil_min,e.qte.alerte,e.fournisseur,e.prix_unite);
   fclose(f);
   fclose(f2);
   remove(nom_fich); //supprimer le fichier f
   rename("produit2.txt",nom_fich);  //rennommer le f2
   return(1);}
}
/*_______________________________________________________________________________________________*/
enum{ 
REF,
DES,
CAT,
UNITE,
DATE_E,
ETAGERE,
QTE,
ENTREE,
SORTIE,
DATE_MVT,
QTE_MAX,
QTE_MIN,
ALERTE,
FOURNISSEUR,
PRIX,
COLUMNS
};
/*_____affiche contenu d'un fichier_______*/
void affiche1(GtkWidget *liste,char nom_fich[])
{Produit e;
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
char ch1[10],ch2[10],ch3[10],ch4[10],ch5[10],ch6[10];
FILE *f;

store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("reference",renderer,"text",REF,NULL);//nom du colonne"reference"
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);////
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("designation",renderer,"text",DES,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("categorie",renderer,"text",CAT,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_resizable(column,TRUE);//////////////////
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("unite_mesure",renderer,"text",UNITE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("date_expiration",renderer,"text",DATE_E,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("etagere",renderer,"text",ETAGERE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("stock_actuel",renderer,"text",QTE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("entree",renderer,"text",ENTREE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("sortie",renderer,"text",SORTIE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("date_mvt",renderer,"text",DATE_MVT,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("stock_max",renderer,"text",QTE_MAX,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("seuil_min",renderer,"text",QTE_MIN,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("alerte",renderer,"text",ALERTE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("fournisseur",renderer,"text",FOURNISSEUR,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("prix_unite",renderer,"text",PRIX,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);
}

store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
f=fopen(nom_fich,"r");
if(f==NULL){return;}
else

{ f = fopen(nom_fich,"a+");
		while(fscanf(f,"%s %s %s %s %s %s %d %d %d %s %d %d %s %s %f \n",e.reference,e.designation,e.categorie,e.unite_mesure,e.date_expiration,e.etagere,&e.qte.stock_actuel,&e.qte.entree,&e.qte.sortie, e.qte.date_mvt,&e.qte.stock_max, &e.qte.seuil_min,e.qte.alerte,e.fournisseur,&e.prix_unite)!=EOF)
	{sprintf(ch1,"%d",e.qte.stock_actuel);
	sprintf(ch2,"%d",e.qte.entree);
	sprintf(ch3,"%d",e.qte.sortie);
	sprintf(ch4,"%d",e.qte.stock_max);
	sprintf(ch5,"%d",e.qte.seuil_min);
	sprintf(ch6,"%f",e.prix_unite); 
gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,REF,e.reference,DES,e.designation,CAT,e.categorie,UNITE,e.unite_mesure,DATE_E,e.date_expiration,ETAGERE,e.etagere,QTE,ch1,ENTREE,ch2,SORTIE,ch3,DATE_MVT,e.qte.date_mvt,QTE_MAX,ch4, QTE_MIN,ch5,ALERTE,e.qte.alerte,FOURNISSEUR,e.fournisseur,PRIX,ch6,-1);
	}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
}

/*___________remplir les produit en repture de stock dans un fichier dashboard.dat______________*/
void dashboard(char nom_fich[])
{FILE *f=NULL;
FILE *f2=NULL;
Produit e;
f=fopen(nom_fich,"r");
f2=fopen("dashboard.txt","w");
if(f!=NULL)
    {while(fscanf(f,"%s %s %s %s %s %s %d %d %d %s %d %d %s %s %f \n",e.reference,e.designation,e.categorie,e.unite_mesure,e.date_expiration,e.etagere,&e.qte.stock_actuel,&e.qte.entree,&e.qte.sortie,e.qte.date_mvt,&e.qte.stock_max, &e.qte.seuil_min,e.qte.alerte,e.fournisseur,&e.prix_unite)!=EOF)
       if(e.qte.stock_actuel==0)
         fprintf(f2,"%s %s %s %s %s %s %d %d %d %s %d %d %s %s %f \n",e.reference,e.designation,e.categorie,e.unite_mesure,e.date_expiration,e.etagere,e.qte.stock_actuel,e.qte.entree,e.qte.sortie,e.qte.date_mvt,e.qte.stock_max, e.qte.seuil_min,e.qte.alerte,e.fournisseur,e.prix_unite);
     fclose(f);
     fclose(f2);
    }
}
/*____________________________________________________________________________________*/
