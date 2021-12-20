#include "yes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
void ajoutyes(plat p)
{
   
FILE* f=NULL;
   
   
        f=fopen("yes.txt","a+");
        if (f!=NULL)
            fprintf(f,"%s %s %d %s %d %d %d %s %s\n",p.id,p.t,p.nc,p.qd,p.d.j,p.d.m,p.d.a,p.cons,p.eq);
fclose(f);
}
int chercheryes(plat *p,char reference[])
        {
            plat p1;
int bol=0;
FILE* f=NULL;
           
                f=fopen("yes.txt","r");
                if (f!=NULL)
                {
                    while(fscanf(f,"%s %s %d %s %d %d %d %s %s\n",p1.id,p1.t,&p1.nc,p1.qd,&p1.d.j,&p1.d.m,&p1.d.a,p1.cons,p1.eq)!=EOF)
                    {
                        if (strcmp(p1.id,reference)==0)
{
*p=p1;
bol=1;
break;
}
}
fclose(f);
}
          return bol;    
}

enum
{
ID,
TYPE,
Nc,
Qd,
D,
Cons,
Eq,
COLUMNS,
};
void aff_che(GtkWidget *liste,char ref[])
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
plat p;
char text[200];
char text1[200];
store=NULL;
store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("ID",renderer,"text",ID,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Nb_calories",renderer,"text",Nc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Quant_de_dechets",renderer,"text",Qd,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Date",renderer,"text",D,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Constituants",renderer,"text",Cons,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Equilibree",renderer,"text",Eq,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

}
FILE* f=NULL;
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
 f=fopen("yes.txt","r");
                if (f!=NULL)
{
f=fopen("yes.txt","a+");
while(fscanf(f,"%s %s %d %s %d %d %d %s %s\n",p.id,p.t,&p.nc,p.qd,&p.d.j,&p.d.m,&p.d.a,p.cons,p.eq)!=EOF)
{
if(strcmp(p.id,ref)==0)
{
sprintf(text,"%d/%d/%d",p.d.j,p.d.m,p.d.a);
sprintf(text1,"%d",p.nc);
gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,ID,p.id,TYPE,p.t,Nc,text1,Qd,p.qd,D,text,Cons,p.cons,Eq,p.eq,-1);
}
}
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}
} 

  void affe(GtkWidget *liste)
    {
 GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
plat p;
char text[200];
char text1[200];
store=NULL;
store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("ID",renderer,"text",ID,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Nb_calories",renderer,"text",Nc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Quant_de_dechets",renderer,"text",Qd,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Date",renderer,"text",D,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Constituants",renderer,"text",Cons,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Equilibree",renderer,"text",Eq,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
}
FILE* f=NULL;
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
 f=fopen("yes.txt","r");
                 f=fopen("yes.txt","r");
                if (f==NULL)
                {
                 return;
}
else {
f=fopen("yes.txt","a+");
while(fscanf(f,"%s %s %d %s %d %d %d %s %s\n",p.id,p.t,&p.nc,p.qd,&p.d.j,&p.d.m,&p.d.a,p.cons,p.eq)!=EOF)
{
sprintf(text,"%d/%d/%d",p.d.j,p.d.m,p.d.a);
sprintf(text1,"%d",p.nc);
gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,ID,p.id,TYPE,p.t,Nc,text1,Qd,p.qd,D,text,Cons,p.cons,Eq,p.eq);
}
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}
}
void videre(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
plat p;
store=NULL;
store=gtk_tree_view_get_model(liste);
FILE* f=NULL;
if(store==NULL)
{
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("ID",renderer,"text",ID,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Nb_calories",renderer,"text",Nc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Quant_de_dechets",renderer,"text",Qd,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Date",renderer,"text",D,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Constituants",renderer,"text",Cons,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Equilibree",renderer,"text",Eq,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

}
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);

}            
         void modifieryes(plat p)
            {
plat p1;
FILE* f=NULL;
FILE* ft=NULL;
               
                    f=fopen("yes.txt","r");
                    ft=fopen("tmp.txt","w");
                    if (f!=NULL)
                    {
                          while(fscanf(f,"%s %s %d %s %d %d %d %s %s\n",p1.id,p1.t,&p1.nc,p1.qd,&p1.d.j,&p1.d.m,&p1.d.a,p1.cons,p1.eq)!=EOF)
                            {
                                if (strcmp(p.id,p1.id)==0)
                                    fprintf(ft,"%s %s %d %s %d %d %d %s %s\n",p.id,p.t,p.nc,p.qd,p.d.j,p.d.m,p.d.a,p.cons,p.eq);
                                else
                                {
                                   
                                    fprintf(ft,"%s %s %d %s %d %d %d %s %s\n",p1.id,p1.t,p1.nc,p1.qd,p1.d.j,p1.d.m,p1.d.a,p1.cons,p1.eq);
                                }
}
                               

                    }
                   
          fclose(ft);
                                fclose(f);
                                remove("yes.txt");
                                rename("tmp.txt","yes.txt");
                                         
}
              void supprimeryes(plat p,char ref[])
                {
                   
FILE* f=NULL;
FILE* ft=NULL;
                        f=fopen("yes.txt","r");
                        ft=fopen("tmp.txt","w");
                        if (f!=NULL)
                        {
                           
                          while(fscanf(f,"%s %s %d %s %d %d %d %s %s\n",p.id,p.t,&p.nc,p.qd,&p.d.j,&p.d.m,&p.d.a,p.cons,p.eq)!=EOF)
                                {
                                    if (strcmp(p.id,ref)!=0)
                                    {
                                        fprintf(ft,"%s %s %d %s %d %d %d %s %s\n",p.id,p.t,p.nc,p.qd,p.d.j,p.d.m,p.d.a,p.cons,p.eq);
                                    }
                                }
                               
                          }  
fclose(ft);
                                fclose(f);
                                remove("yes.txt");
                                rename("tmp.txt","yes.txt");
                               
                }
int control_e(char ref[])
{
            plat p1;
int bol=0;
FILE* f=NULL;
           
                f=fopen("yes.txt","r");
                if (f!=NULL)
                {
                    while(fscanf(f,"%s %s %d %s %d %d %d %s %s\n",p1.id,p1.t,&p1.nc,p1.qd,&p1.d.j,&p1.d.m,&p1.d.a,p1.cons,p1.eq)!=EOF)
                    {
                        if (strcmp(p1.id,ref)==0)
{
bol=1;
break;
}
}
fclose(f);
}
          return bol;    
}
void aff_chte(GtkWidget *liste,char ref[])
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
plat p;
char text[200];
char text1[200];
store=NULL;
store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("ID",renderer,"text",ID,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Nb_calories",renderer,"text",Nc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Quant_de_dechets",renderer,"text",Qd,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Date",renderer,"text",D,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Constituants",renderer,"text",Cons,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Equilibree",renderer,"text",Eq,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
}
FILE* f=NULL;
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
 f=fopen("yes.txt","r");
                 f=fopen("yes.txt","r");
                if (f==NULL)
                {
                 return;
}
else {
f=fopen("yes.txt","a+");
while(fscanf(f,"%s %s %d %s %d %d %d %s %s\n",p.id,p.t,&p.nc,p.qd,&p.d.j,&p.d.m,&p.d.a,p.cons,p.eq)!=EOF)
{if(strcmp(p.t,ref)==0)
{
sprintf(text,"%d/%d/%d",p.d.j,p.d.m,p.d.a);
sprintf(text1,"%d",p.nc);
gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,ID,p.id,TYPE,p.t,Nc,text1,Qd,p.qd,D,text,Cons,p.cons,Eq,p.eq);
}
}
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}
}
void aff_chee(GtkWidget *liste,char ref[])
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
plat p;
char text[200];
char text1[200];
store=NULL;
store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("ID",renderer,"text",ID,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Type",renderer,"text",TYPE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Nb_calories",renderer,"text",Nc,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Quant_de_dechets",renderer,"text",Qd,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Date",renderer,"text",D,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Constituants",renderer,"text",Cons,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("Equilibree",renderer,"text",Eq,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
}
FILE* f=NULL;
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
 f=fopen("yes.txt","r");
                 f=fopen("yes.txt","r");
                if (f==NULL)
                {
                 return;
}
else {
f=fopen("yes.txt","a+");
while(fscanf(f,"%s %s %d %s %d %d %d %s %s\n",p.id,p.t,&p.nc,p.qd,&p.d.j,&p.d.m,&p.d.a,p.cons,p.eq)!=EOF)
{if(strcmp(p.eq,ref)==0)
{
sprintf(text,"%d/%d/%d",p.d.j,p.d.m,p.d.a);
sprintf(text1,"%d",p.nc);
gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,ID,p.id,TYPE,p.t,Nc,text1,Qd,p.qd,D,text,Cons,p.cons,Eq,p.eq);
}
}
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}
}
int bestmenuyes()
{
int j,t,best,nb=0;
float dch,d=9999,d1=0;
FILE *f;
f=fopen("dechets.txt","r");
while(fscanf(f,"%d %d %f\n",&j,&t,&dch)!=EOF)
{
d1=d1+dch;
nb++;
if (nb==3)
{
nb=0;
if(d1<d)
{
d=d1;
best=j;
}
d1=0;
}
}
fclose(f);
return best;
} 


