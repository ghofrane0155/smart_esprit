#include <gtk/gtk.h>
typedef struct {
   int j;
   int m;
   int a;
}date;
typedef struct  { 
 char id [200];
char t[200];
 int nc ;
 char qd[200] ;
 date d;
 char cons[200];
 char eq[200]; 
}plat;
void ajoutyes(plat p);
int chercheryes(plat *p,char reference[]);
void modifieryes(plat p);
 void supprimeryes(plat p,char ref[]);
int control_e(char ref[]);
void aff_che(GtkWidget *liste,char ref[]);
void affe(GtkWidget *liste);
void videre(GtkWidget *liste);
void aff_chee(GtkWidget *liste,char ref[]);
void aff_chte(GtkWidget *liste,char ref[]);
int bestmenuyes();
