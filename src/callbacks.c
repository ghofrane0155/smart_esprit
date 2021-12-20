#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include <stdlib.h>
#include "fichier.h"
#include "user.h"
#include "reclamation.h"
#include "yes.h"
#include "fonctionr.h"
#include "etudiant.h"
int x=0;
int t[5]={0,0,0,0,0};
Produit p;
/*________________________page d'acceuil_____________________________________________*/
void
on_home_admin_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *window1;
windowacc=lookup_widget(button,"acceuil");
gtk_widget_destroy(windowacc);

window1=lookup_widget(button,"gb_welcome");
window1=create_gb_welcome();
gtk_widget_show(window1);
}
void
on_button_fiche_clicked                (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowaff,*treeview2;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowaff=lookup_widget(objet,"affiche");
windowaff=create_affiche();
gtk_widget_show(windowaff);

treeview2 = lookup_widget (windowaff, "treeview2");
affiche1(treeview2,"produit1.txt");
}
////////////////////////////
void
on_button_recherche_clicked            (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowrech,*windowacc;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowrech=create_Recherche();
gtk_widget_show(windowrech);}
////////////////////////////
void
on_button_nouveau_clicked              (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowajout,*windowacc;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowajout=create_ajout();
gtk_widget_show(windowajout);}
////////////////////////////
void
on_button_supp_clicked                 (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowsup,*windowacc;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowsup=create_supprimer();
gtk_widget_show(windowsup);}
/////////////////////////////
void
on_button_es_clicked                   (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowmodif,*windowacc;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowmodif=create_Modification();
gtk_widget_show(windowmodif);}
////////////////////////////
void
on_buttondashboard_clicked             (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowdash,*windowacc,*treeview1;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowdash=lookup_widget(objet,"dashboard");
windowdash=create_dashboard();
gtk_widget_show(windowdash);

dashboard("produit1.txt");
treeview1 = lookup_widget (windowdash, "treeview1");
affiche1(treeview1,"dashboard.txt");}
///////////////////////////
void
on_button_quitter_clicked              (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);
}
/*______________________bouton quitter____________________________________________________*/
void
on_button_fermer2_clicked              (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowmodif;

windowmodif=lookup_widget(objet,"Modification");
gtk_widget_destroy(windowmodif);}
//////////////////////////
void
on_button_fermer_clicked               (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowaff;

windowaff=lookup_widget(objet,"affiche");
gtk_widget_destroy(windowaff);}
/////////////////////////
void
on_quitter3_clicked                    (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowdash;

windowdash=lookup_widget(objet,"dashboard");
gtk_widget_destroy(windowdash);
}
/*________________________les boutons home___________________________________*/
void
on_home1_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowajout;

windowajout=lookup_widget(objet,"ajout");
gtk_widget_destroy(windowajout);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
void
on_home2_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowsup;

windowsup=lookup_widget(objet,"supprimer");
gtk_widget_destroy(windowsup);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
void
on_home3_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowrech;

windowrech=lookup_widget(objet,"Recherche");
gtk_widget_destroy(windowrech);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
void
on_home4_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowmodif;

windowmodif=lookup_widget(objet,"Modification");
gtk_widget_destroy(windowmodif);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
void 
on_home5_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowaff;

windowaff=lookup_widget(objet,"affiche");
gtk_widget_destroy(windowaff);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
void
on_home6_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowdash;

windowdash=lookup_widget(objet,"dashboard");
gtk_widget_destroy(windowdash);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
/*________bouton ok_____________________________________________________________________*/
void
on_button_ok_clicked                   (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowajout, *windowen;

windowen=lookup_widget(objet,"enregistrement");
gtk_widget_destroy(windowen);
}
/*__________________________les boutons annuler___________________________________________________________*/
void
on_button_annuler1_clicked             (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowajout;

windowajout=lookup_widget(objet,"ajout");
gtk_widget_destroy(windowajout);
windowajout=create_ajout();
gtk_widget_show(windowajout);
}
void
on_annuler2_clicked                    (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowsup;

windowsup=lookup_widget(objet,"supprimer");
gtk_widget_destroy(windowsup);
windowsup=create_supprimer();
gtk_widget_show(windowsup);
}
void
on_annuler3_clicked                    (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowrech;

windowrech=lookup_widget(objet,"Recherche");
gtk_widget_destroy(windowrech);
windowrech=create_Recherche();
gtk_widget_show(windowrech);
}
void
on_annuler4_clicked                    (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowmodif;

windowmodif=lookup_widget(objet,"Modification");
gtk_widget_destroy(windowmodif);
windowmodif=create_Modification();
	gtk_widget_show(windowmodif);}

/*________________________les boutons radios du window ajout________________________________________*/
void
on_radiobutton1_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=1;}
void
on_radiobutton2_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=2;}
void
on_radiobutton3_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=3;}
void
on_radiobutton4_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=4;}
void
on_radiobutton5_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=5;}
void
on_radiobutton6_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=6;}
void
on_radiobutton7_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=7;}
/*____________________case a cocher du window ajout_____________________________________________*/
void
on_checkbutton1_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (togglebutton))
 t[0]=1;}
void
on_checkbutton2_toggled                (GtkToggleButton *togglebutton, gpointer         user_data)
{if(gtk_toggle_button_get_active (togglebutton))
 t[1]=1;}
void
on_checkbutton3_toggled                (GtkToggleButton *togglebutton, gpointer         user_data)
{if(gtk_toggle_button_get_active (togglebutton))
 t[2]=1;}
void
on_checkbutton4_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (togglebutton))
 t[3]=1;}
void
on_checkbutton5_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{if(gtk_toggle_button_get_active (togglebutton))
 t[4]=1;}
/*_____________________________ajout___________________________________________________________*/
void
on_button_valider01_clicked            (GtkWidget       *button, gpointer         user_data)
{GtkWidget *windowen;
 GtkWidget* input;
 Produit p2;
 GtkWidget* output ;
 GtkWidget *j,*m,*a;//combo
 GtkWidget *entree,*sortie,*max,*min;//spin
char ch1[5],ch2[5],ch3[5];
int r,i;
FILE *f=NULL;
 input = lookup_widget(button, "entry_ref") ; 
 strcpy(p.reference,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry_des") ; 
 strcpy(p.designation,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry_fournisseur") ; 
 strcpy(p.fournisseur,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry_prixu") ; 
 p.prix_unite=atof(gtk_entry_get_text(GTK_ENTRY(input)));
/////les boutons radio
if(x==1) strcpy(p.unite_mesure,"Kg");
else if(x==2)  strcpy(p.unite_mesure,"L");
else if(x==3)  strcpy(p.unite_mesure,"boite");
else if(x==4)  strcpy(p.unite_mesure,"unité");
else if(x==5)  strcpy(p.unite_mesure,"botte");
else if(x==6)  strcpy(p.unite_mesure,"baguette");
else strcpy(p.unite_mesure,"sac");
////les spinbuttons
entree=lookup_widget(button,"spinbuttonentre");
sortie=lookup_widget(button,"spinbuttonsortie");  
max=lookup_widget(button,"spinbutton1");
min=lookup_widget(button,"spinbutton2");
//recuperer les valeurs des spinbutton en utilisant la fct gtk_spin_button_get_value_as_int qui retourne l'entier choisi par user
p.qte.entree=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(entree));
p.qte.sortie=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(sortie));
p.qte.stock_max=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(max));
p.qte.seuil_min=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(min));
////combobox
j=lookup_widget(button, "comboboxje") ; 
strcpy(ch1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(j)));
m=lookup_widget(button, "comboboxme") ; 
strcpy(ch2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(m)));
a=lookup_widget(button, "comboboxae") ; 
strcpy(ch3,gtk_combo_box_get_active_text(GTK_COMBO_BOX(a)));
sprintf(p.date_expiration,"%s/%s/%s",ch1,ch2,ch3);

j=lookup_widget(button, "comboboxjm") ; 
strcpy(ch1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(j)));
m=lookup_widget(button, "comboboxmm") ; 
strcpy(ch2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(m)));
a=lookup_widget(button, "comboboxam") ; 
strcpy(ch3,gtk_combo_box_get_active_text(GTK_COMBO_BOX(a)));
sprintf(p.qte.date_mvt,"%s/%s/%s",ch1,ch2,ch3);

input=lookup_widget(button, "categorie") ; 
strcpy(p.categorie,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input)));
////////////case a cocher
strcpy(p.etagere,"");
if(t[0]==1)
strcat(p.etagere,"A");
if(t[1]==1)
strcat(p.etagere,"B");
if(t[2]==1)
strcat(p.etagere,"C");
if(t[3]==1)
strcat(p.etagere,"D");
if(t[4]==1)
strcat(p.etagere,"E");


r=ajout("produit1.txt",p);
if(r==1)
{windowen=create_enregistrement();
gtk_widget_show(windowen);}
else
{ output = lookup_widget(button, "label80") ;
gtk_label_set_text(GTK_LABEL(output),"ajout non efectué");
}
}
/*______________________suppression d'un produit________________________________________________*/
void
on_suppression_clicked                 (GtkWidget *objet, gpointer user_data)
{ GtkWidget* input;
  GtkWidget* output ;
char ref[20],msg[50];
int r;
 output = lookup_widget(objet, "label80s") ;
 input = lookup_widget(objet, "entry_refs") ;
 
 strcpy(ref,gtk_entry_get_text(GTK_ENTRY(input))); 
 r=supprimer("produit1.txt",ref);
 if(r==-1)
    strcpy(msg,"Suppression non effectuée\n");
  else
    strcpy(msg,"suppression effectuée avec succès \n");
 gtk_label_set_text(GTK_LABEL(output),msg);
}
/*_________________________page recherche________________________________________________*/
void
on_chercher2_clicked                   (GtkWidget       *button,gpointer         user_data)
{GtkWidget* input;
  GtkWidget* output ;
char ref[15],ch[10];
Produit e;
input = lookup_widget(button, "entry4") ;
strcpy(ref,gtk_entry_get_text(GTK_ENTRY(input))); 
e=recherche("produit1.txt",ref);

if(strcmp(e.reference,ref)==0)
{//mawjoud
output=lookup_widget(button,"entry_stock_actuel");
sprintf(ch,"%d",e.qte.stock_actuel);
gtk_entry_set_text(GTK_ENTRY(output),ch);

output=lookup_widget(button,"entry_libelle");
gtk_entry_set_text(GTK_ENTRY(output),e.designation);

output=lookup_widget(button,"entry_prix");
sprintf(ch,"%f",e.prix_unite);
gtk_entry_set_text(GTK_ENTRY(output),ch);

output=lookup_widget(button,"entrymax");
sprintf(ch,"%d",e.qte.stock_max);
gtk_entry_set_text(GTK_ENTRY(output),ch);

output=lookup_widget(button,"entrymin");
sprintf(ch,"%d",e.qte.seuil_min);
gtk_entry_set_text(GTK_ENTRY(output),ch);

output=lookup_widget(button,"entry_cat");
gtk_entry_set_text(GTK_ENTRY(output),e.categorie);

output=lookup_widget(button,"entryetat");
gtk_entry_set_text(GTK_ENTRY(output),e.qte.alerte);
}
else{
///mch mawjoud
GtkWidget *windowatt;
windowatt=create_attention_rech();
gtk_widget_show(windowatt);
}
}
/*__________________________________________________________________________________*/
void
on_ok_rech_clicked                     (GtkWidget       *button,gpointer         user_data)
{GtkWidget *windowrech,*windowatt;

windowatt=lookup_widget(button,"attention_rech");
gtk_widget_destroy(windowatt);
}
/*____________________page de modif______________________________________________________*/
void
on_chercher3_clicked                   (GtkWidget       *button,gpointer         user_data)
{GtkWidget* input,* output,*windowmodif;
char ref[15],ch[11],j[3],m[3],a[5];
Produit e;
int combo,combo_date;


input = lookup_widget(button, "entry_ref") ;
strcpy(ref,gtk_entry_get_text(GTK_ENTRY(input))); 
e=recherche("produit1.txt",ref);

if(strcmp(e.reference,ref)==0)
{//mawjoud

output=lookup_widget(button,"label94");
sprintf(ch,"%d",e.qte.entree);
gtk_label_set_text(GTK_LABEL(output),ch);

output=lookup_widget(button,"label97");
sprintf(ch,"%d",e.qte.sortie);
gtk_label_set_text(GTK_LABEL(output),ch);

output=lookup_widget(button,"label98");
sprintf(ch,"%d",e.qte.stock_max);
gtk_label_set_text(GTK_LABEL(output),ch);

output=lookup_widget(button,"label96");
sprintf(ch,"%d",e.qte.seuil_min);
gtk_label_set_text(GTK_LABEL(output),ch);


output=lookup_widget(button,"entry11");
gtk_entry_set_text(GTK_ENTRY(output),e.designation);

output=lookup_widget(button,"entry15");
gtk_entry_set_text(GTK_ENTRY(output),e.unite_mesure);

output=lookup_widget(button,"entry12");
gtk_entry_set_text(GTK_ENTRY(output),e.fournisseur);

output=lookup_widget(button,"entry16");
gtk_entry_set_text(GTK_ENTRY(output),e.etagere);

output=lookup_widget(button,"entry_prix");
sprintf(ch,"%f",e.prix_unite);
gtk_entry_set_text(GTK_ENTRY(output),ch);

output=lookup_widget(button,"entrydatemvt");
sprintf(ch,"%s",e.qte.date_mvt);
gtk_entry_set_text(GTK_ENTRY(output),ch);

///pour faire un affichage dans le combobox
windowmodif=lookup_widget(button,"Modification");
if(strcmp(e.categorie,"Legumes")==0)
	  combo=0;
	else
		if(strcmp(e.categorie,"Fruits")==0)
		  combo=1;
	else
		if(strcmp(e.categorie,"Boisson")==0)
		  combo=2;
	else
		if(strcmp(e.categorie,"Produit_congelés")==0)
		  combo=3;
	else
		if(strcmp(e.categorie,"Ingrédiants")==0)
		  combo=4;
	else
		if(strcmp(e.categorie,"Epicerie")==0)
		  combo=5;
	else
		if(strcmp(e.categorie,"Linge_et_produits_d'entretien")==0)
		  combo=4;
	else
		combo=7;
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combocategorie")),combo);

   	
	strncpy(j, e.date_expiration, 2);
	combo_date=atoi(j);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox1")),combo_date-1);
	
	strncpy(m, e.date_expiration+3, 2);
	combo_date=atoi(m);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox2")),combo_date-1);
	
 	strncpy(a, e.date_expiration+6, 4);
	combo_date=atoi(a);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox3")),combo_date-2021);

	strncpy(j, e.qte.date_mvt, 2);
	combo_date=atoi(j);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox4")),combo_date-1);

	strncpy(m, e.qte.date_mvt+3, 2);
	combo_date=atoi(m);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox5")),combo_date-1);

	strncpy(a, e.qte.date_mvt+6, 4);
	combo_date=atoi(a);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox6")),combo_date-2021);
}
else{
///mch mawjoud
GtkWidget *windowrech,*windowatt;
windowrech=lookup_widget(button,"Recherche");
gtk_widget_destroy(windowrech);
windowatt=create_attention_rech();
gtk_widget_show(windowatt);
}
}
/*____________________________________________________________________________*/
void
on_enregistremodif_clicked             (GtkWidget       *button,gpointer         user_data)
{GtkWidget* input,* output,*windowen;
GtkWidget *entree,*sortie,*max,*min;//spin
Produit e;
GtkWidget *j,*m,*a;//combo
char ch1[5],ch2[5],ch3[5];
int r;

input = lookup_widget(button, "entry_ref") ;
 strcpy(e.reference,gtk_entry_get_text(GTK_ENTRY(input)));
 input = lookup_widget(button, "entry11") ; 
 strcpy(e.designation,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry15") ; 
 strcpy(e.unite_mesure,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry12") ; 
 strcpy(e.fournisseur,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry16") ; 
 strcpy(e.etagere,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry_prix") ; 
 e.prix_unite=atof(gtk_entry_get_text(GTK_ENTRY(input)));

////les spinbuttons
entree=lookup_widget(button,"spinbuttonenter");
sortie=lookup_widget(button,"spinbuttonout");  
max=lookup_widget(button,"spinbuttonmax");
min=lookup_widget(button,"spinbuttonmin");
//recuperer les valeurs des spinbutton en utilisant la fct gtk_spin_button_get_value_as_int qui retourne l'entier choisi par user
e.qte.entree=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(entree));
e.qte.sortie=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(sortie));
e.qte.stock_max=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(max));
e.qte.seuil_min=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(min));

////combobox
j=lookup_widget(button, "combobox1") ; 
strcpy(ch1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(j)));
m=lookup_widget(button, "combobox2") ; 
strcpy(ch2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(m)));
a=lookup_widget(button, "combobox3") ; 
strcpy(ch3,gtk_combo_box_get_active_text(GTK_COMBO_BOX(a)));
sprintf(e.date_expiration,"%s/%s/%s",ch1,ch2,ch3);

j=lookup_widget(button, "combobox4") ; 
strcpy(ch1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(j)));
m=lookup_widget(button, "combobox5") ; 
strcpy(ch2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(m)));
a=lookup_widget(button, "combobox6") ; 
strcpy(ch3,gtk_combo_box_get_active_text(GTK_COMBO_BOX(a)));
sprintf(e.qte.date_mvt,"%s/%s/%s",ch1,ch2,ch3);

input=lookup_widget(button, "combocategorie") ; 
strcpy(e.categorie,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input)));
///appel a la fct
r=modif("produit1.txt",e);
if(r==1)
{windowen=create_enregistrement();
gtk_widget_show(windowen);}
else
{ output = lookup_widget(button, "label101") ;
gtk_label_set_text(GTK_LABEL(output),"Modification non efectué");
}
}
/*_______________________fenetre_treeview_____________________________________________*/
/////bouton supprimer
void
on_supp_aff_clicked                    (GtkWidget       *button, gpointer         user_data)
{	GtkWidget *treeview,*windowaff;
	GtkTreeModel  *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
gchar* ref;
int r;

 windowaff=lookup_widget(button,"affiche");
 treeview=lookup_widget(windowaff,"treeview2");
 selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
		gtk_tree_model_get (model,&iter,0,&ref,-1);
		r=supprimer("produit1.txt",ref);
		affiche1(treeview,"produit1.txt");
		
	}

}
/*__________________________________________________________________________________________*/
/*___________________________________________________________________________________________*/
////bouton modif
void
on_modif_aff_clicked                   (GtkWidget       *button,gpointer         user_data)
{	GtkWidget *windowmodif,*windowaff,* treeview,*output;
	GtkTreeModel *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
gchar* ref,* des,* cat,* unite,* date_e,*etagere,*date_mvt,*alerte,*fournisseur;
gint qte,entree,sortie,max,min,combo,combo_date;
gfloat prix;
char ch[11],j[3],m[3],a[5];
char chprix[15];////
Produit e;

	windowaff=lookup_widget(button,"affiche");
        treeview=lookup_widget(windowaff,"treeview2");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview));
 if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
		gtk_tree_model_get (model,&iter,0,&ref,1,&des,2,&cat,3,&unite,4,&date_e,5,&etagere,6,&qte,7,&entree,8,&sortie,9,&date_mvt,10,&max,11,&min,12,&alerte,13,&fournisseur,14,&prix,-1);

		gtk_widget_destroy(windowaff);
		windowmodif=lookup_widget(button,"Modification");
		windowmodif=create_Modification();
		gtk_widget_show(windowmodif);


	output=lookup_widget(windowmodif,"entry11");
	gtk_entry_set_text(GTK_ENTRY(output),des);

	output=lookup_widget(windowmodif,"entry_ref");
	gtk_entry_set_text(GTK_ENTRY(output),ref);

	output=lookup_widget(windowmodif,"entry15");
	gtk_entry_set_text(GTK_ENTRY(output),unite);

	output=lookup_widget(windowmodif,"entry12");
	gtk_entry_set_text(GTK_ENTRY(output),fournisseur);

	output=lookup_widget(windowmodif,"entry16");
	gtk_entry_set_text(GTK_ENTRY(output),etagere);

	/*output=lookup_widget(windowmodif,"entry_prix");////yakra feha bl ghalet
	sprintf(chprix,"%f",prix);
	gtk_entry_set_text(GTK_ENTRY(output),chprix);*/

	/*output=lookup_widget(windowmodif,"label110");
	sprintf(chprix,"%d",entree);
	gtk_label_set_text(GTK_LABEL(output),entree);*/

	/*gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowmodif,"spinbuttonenter")),entree);
	gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowmodif,"spinbuttonout")),sortie);
	gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowmodif,"spinbuttonmax")),max);
	gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowmodif,"spinbuttonmin")),min);*/

      e=recherche("produit1.txt",ref);
	
	output=lookup_widget(windowmodif,"entry_prix");
	sprintf(chprix,"%f",e.prix_unite);
	gtk_entry_set_text(GTK_ENTRY(output),chprix);

	output=lookup_widget(windowmodif,"label94");
	sprintf(ch,"%d",e.qte.entree);
	gtk_label_set_text(GTK_LABEL(output),ch);

	output=lookup_widget(windowmodif,"label97");
	sprintf(ch,"%d",e.qte.sortie);
	gtk_label_set_text(GTK_LABEL(output),ch);

	output=lookup_widget(windowmodif,"label98");
	sprintf(ch,"%d",e.qte.stock_max);
	gtk_label_set_text(GTK_LABEL(output),ch);

	output=lookup_widget(windowmodif,"label96");
	sprintf(ch,"%d",e.qte.seuil_min);
	gtk_label_set_text(GTK_LABEL(output),ch);



	if(strcmp(cat,"Legumes")==0)
	  combo=0;
	else
		if(strcmp(cat,"Fruits")==0)
		  combo=1;
	else
		if(strcmp(cat,"Boisson")==0)
		  combo=2;
	else
		if(strcmp(cat,"Produit_congelés")==0)
		  combo=3;
	else
		if(strcmp(cat,"Ingrédiants")==0)
		  combo=4;
	else
		if(strcmp(cat,"Epicerie")==0)
		  combo=5;
	else
		if(strcmp(cat,"Linge_et_produits_d'entretien")==0)
		  combo=4;
	else
		combo=7;
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combocategorie")),combo);

   	
	strncpy(j, date_e, 2);
	combo_date=atoi(j);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox1")),combo_date-1);
	
	strncpy(m, date_e+3, 2);
	combo_date=atoi(m);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox2")),combo_date-1);
	
 	strncpy(a, date_e+6, 4);
	combo_date=atoi(a);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox3")),combo_date-2021);

	strncpy(j, date_mvt, 2);
	combo_date=atoi(j);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox4")),combo_date-1);

	strncpy(m, date_mvt+3, 2);
	combo_date=atoi(m);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox5")),combo_date-1);

	strncpy(a, date_mvt+6, 4);
	combo_date=atoi(a);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox6")),combo_date-2021);


	}

}
/*___________________________________________________________________________________________________*/

/*___________________1ER FENETRE_____________________________________*/
void
on_annuler_bienvenue_clicked           (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *window1;

window1=lookup_widget(button,"gb_welcome");
gtk_widget_destroy(window1);
window1=create_gb_welcome();
gtk_widget_show(window1);

}


void
on_connection_bienvenu_clicked         (GtkWidget        *button,
                                        gpointer         user_data)
{char cin[20],mdp[20];
GtkWidget *input;
FILE *f;
user c;

 input = lookup_widget(button, "cin1") ; 
 strcpy(cin,gtk_entry_get_text(GTK_ENTRY(input))); 


f=fopen("user.txt","r");
if(f!=NULL)
{ while(fscanf(f,"%s %s %s %s %d %d %s %s\n",c.nom,c.prenom,c.cin,c.sexe,&c.age,&c.num,c.email,c.poste)!=EOF)
{

if(strcmp(c.cin,cin)==0)
   {
   if(strcmp(c.poste,"Adminstrateur")==0)
      {//admin
	GtkWidget *windowadmin,*window1;

	window1=lookup_widget(button,"gb_welcome");
	gtk_widget_destroy(window1);

	windowadmin=create_gb_aff();
	gtk_widget_show(windowadmin);
	}
     else
	if(strcmp(c.poste,"Agent_de_restaurant")==0)
      {//resto
	GtkWidget *windowacc, *window1;

	window1=lookup_widget(button,"gb_welcome");
	gtk_widget_destroy(window1);

	windowacc=create_acceuil();
	gtk_widget_show(windowacc);

      }	
     else
	if(strcmp(c.poste,"Technicien")==0)
      {//technicien
	GtkWidget *windowacc, *window1;

	window1=lookup_widget(button,"gb_welcome");
	gtk_widget_destroy(window1);

	windowacc=create_windowGestionCapteurs();
	gtk_widget_show(windowacc);

      }	
     else
	if(strcmp(c.poste,"Agent_de_foyer")==0)
      {//foyer
	GtkWidget *windowacc, *window1;

	window1=lookup_widget(button,"gb_welcome");
	gtk_widget_destroy(window1);

	windowacc=create_Acceuila();
	gtk_widget_show(windowacc);
      }	
     else
	if(strcmp(c.poste,"Etudiant")==0)
      {//etudiant
	GtkWidget *windowacc, *window1;

	window1=lookup_widget(button,"gb_welcome");
	gtk_widget_destroy(window1);

	windowacc=create_windowafficher_reclamation();
	gtk_widget_show(windowacc);

      }	
     else
	if(strcmp(c.poste,"Nutritionniste")==0)
      {//menu
	GtkWidget *windowacc, *window1;

	window1=lookup_widget(button,"gb_welcome");
	gtk_widget_destroy(window1);

	windowacc=create_gestionyes();
	gtk_widget_show(windowacc);
      }	

   }
}
}
fclose(f);

}


void
on_gb_quitter1_clicked                 (GtkWidget        *button,
                                        gpointer         user_data)
{GtkWidget *window1;

window1=lookup_widget(button,"gb_welcome");
gtk_widget_destroy(window1);

}

/*______________________fenetre1 motaz______________________________________________*/
int sexe,sexem,x;


void
on_gb_auth_connecter_btn_clicked        (GtkWidget      *objet,
                                        gpointer         user_data)
{

}




void
on_gb_treeview_row_activated           (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
gchar *nom;
gchar *prenom;
gchar *sexe;
gint *age;
gint *num;
gchar *email;
gchar *cin;
gchar *poste;
user p;
GtkTreeModel *model =gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{
gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&nom,1,&prenom,2,&cin,3,&age,4,&sexe,5,&num,6,&email,7,&poste,-1);
strcpy(p.nom,nom);
strcpy(p.prenom,prenom);
strcpy(p.cin,cin);
strcpy(p.sexe,sexe);
strcpy(p.email,email);
strcpy(p.poste,poste);
p.age=age;
p.num=num;
supp(p);
afficher(treeview);
}
}

void
on_gb_aff_retour_btn_clicked            (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowgb_welcome, *window_destroy;
window_destroy=lookup_widget(objet,"gb_aff");
gtk_widget_destroy(window_destroy);
windowgb_welcome=create_gb_welcome();
gtk_widget_show (windowgb_welcome);
}


void
on_gb_aff_modif_btn_clicked             (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowgb_modif, *window_destroy;
window_destroy=lookup_widget(objet,"gb_aff");
gtk_widget_destroy(window_destroy);
windowgb_modif=create_gb_modifier();
gtk_widget_show (windowgb_modif);
}


void
on_gb_aff_supp_btn_clicked              (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkTreeModel     *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget* p;
        GtkWidget *label;
        gchar *cin;
        
        p=lookup_widget(objet,"gb_treeview");
	
	selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))//test sur la ligne selectionnée
        {  gtk_tree_model_get (model,&iter,2,&cin,-1);
           gtk_list_store_remove(GTK_LIST_STORE(model),&iter);//supprimer la ligne du treeView

           supp_cin(cin);

	afficher(p);
}
}


void
on_gb_aff_rech_btn_clicked             (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *p1;
GtkWidget *entry;
GtkWidget *labelcin;
GtkWidget *nbResultat;
GtkWidget *message;
char cin[30];
char chnb[30];
int b=0,nb;
entry=lookup_widget(objet,"gb_aff_rech_entry");
//labelid=lookup_widget(gestion,"label47");
p1=lookup_widget(objet,"gb_treeview");
strcpy(cin,gtk_entry_get_text(GTK_ENTRY(entry)));
nb=chercher_user(p1,"user.txt",cin);
}


void
on_gb_aff_add_btn_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *windowgb_add, *window_destroy;
GtkWidget *fail,*succ;

window_destroy=lookup_widget(objet,"gb_aff");
gtk_widget_destroy(window_destroy);
windowgb_add=create_gb_add();
gtk_widget_show (windowgb_add);
fail=lookup_widget(objet,"label_fail");
succ=lookup_widget(objet,"label_succ");
gtk_widget_hide(fail);
gtk_widget_hide(succ);
}


void
on_gb_add_retour_btn_clicked           (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowgb_aff, *window_destroy;
window_destroy=lookup_widget(objet,"gb_add");
gtk_widget_destroy(window_destroy);
windowgb_aff=create_gb_aff();
gtk_widget_show (windowgb_aff);
}


void
on_gb_add_add_btn_clicked               (GtkWidget      *objet,
                                        gpointer         user_data)
{
user c;
int a;
GtkWidget *input1,*input2,*input3,*input4,*input5,*input6,*input7,*input8,*input9;
GtkWidget *fenetre_ajout;
GtkWidget *fail,*succ;
fail=lookup_widget(objet,"label_fail");
succ=lookup_widget(objet,"label_succ");



fenetre_ajout=lookup_widget(objet,"gb_add");
input1=lookup_widget(objet,"gb_add_name");
input2=lookup_widget(objet,"gb_add_prename");
input3=lookup_widget(objet,"gb_add_cin");
input4=lookup_widget(objet,"gb_add_num");
input5=lookup_widget(objet,"gb_add_email");

input6=lookup_widget(objet,"gb_add_combo_poste");
input7=lookup_widget(objet,"gb_add_spin_age");
input8=lookup_widget(objet,"gb_add_homme");
input9=lookup_widget(objet,"gb_add_femme");

if(sexe==1)
{
//gtk_toggle_button_set_active(GTK_RADIO_BUTTON(input8),TRUE);
strcpy(c.sexe,"Homme");
}
else
{
//gtk_toggle_button_set_active(GTK_RADIO_BUTTON(input9),TRUE);
strcpy(c.sexe,"Femme");
}

strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(c.prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(c.cin,gtk_entry_get_text(GTK_ENTRY(input3)));
c.num=atoi(gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(c.email,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(c.poste,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input6)));

a=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input7));
c.age=a;
if(x==1)
{
if(strcmp(c.nom,"")!=0&&strcmp(c.prenom,"")!=0&&strcmp(c.cin,"")!=0&&strcmp(c.sexe,"")!=0&& (c.age>=18) && (c.num!=0) && strcmp(c.email,"")!=0&&strcmp(c.poste,"")!=0)
{gtk_widget_show(succ);
gtk_widget_hide(fail);
add_user(c);
}
else {
gtk_widget_show(fail);
gtk_widget_hide(succ);}
}
}


void
on_gb_modif_annuler_btn_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *windowgb_aff, *window_destroy;
window_destroy=lookup_widget(objet,"gb_modifier");
gtk_widget_destroy(window_destroy);
windowgb_aff=create_gb_aff();
gtk_widget_show (windowgb_aff);
}


void
on_gb_modif_modif_btn_clicked           (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *cin,*nom,*prenom,*age,*sexe1,*sexe2,*poste,*email,*numero,*rech;
GtkWidget *fail,*succ;
user p;
char reche[200];
fail=lookup_widget(objet,"label_mod_fail");
succ=lookup_widget(objet,"label_mod_succ");
rech=lookup_widget(objet,"gb_modif_chercher");
strcpy(reche,gtk_entry_get_text(GTK_ENTRY(rech)));
cin=lookup_widget(objet,"gb_modif_cin");
nom=lookup_widget(objet,"gb_modif_nom");
prenom=lookup_widget(objet,"gb_modif_prenom");
strcpy(p.cin,gtk_entry_get_text(GTK_ENTRY(cin)));
strcpy(p.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(p.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));

age=lookup_widget(objet,"gb_modif_spin_age");
p.age=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(age));

sexe1=lookup_widget(objet,"gb_modif_homme");
sexe2=lookup_widget(objet,"gb_modif_femme");
if(sexem==1)
{
strcpy(p.sexe,"Homme");
}
else
{
strcpy(p.sexe,"Femme");
}
poste=lookup_widget(objet,"gb_modif_combo_poste");
strcpy(p.poste,gtk_combo_box_get_active_text(GTK_COMBO_BOX(poste)));

email=lookup_widget(objet,"gb_modif_email");
strcpy(p.email,gtk_entry_get_text(GTK_ENTRY(email)));

numero=lookup_widget(objet,"gb_modif_num");
p.num=atoi(gtk_entry_get_text(GTK_ENTRY(numero)));


if(strcmp(p.nom,"")!=0&&strcmp(p.prenom,"")!=0&&strcmp(p.cin,"")!=0&&strcmp(p.sexe,"")!=0&& (p.age>=18) && (p.num!=0) && strcmp(p.email,"")!=0&&strcmp(p.poste,"")!=0)
{gtk_widget_show(succ);
gtk_widget_hide(fail);
supp_cin(reche);
add_user(p);
}
else {
gtk_widget_show(fail);
gtk_widget_hide(succ);}


/*gtk_widget_show (message);
gtk_label_set_text(GTK_LABEL(message),"la modification est validée");*/
}



void
on_gb_modif_chercher_btn_clicked        (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *cin,*nom,*prenom,*age,*genre,*email,*numero,*rech,*poste,*se1,*se2,*message;
user c;
user p;
char nmch[30];
char reche[200];
int i=0;
char matrice[6][30]={"Administrateur","Technicien","Nutritionniste","Agent_de_foyer","Agent_de_restaurant","Etudiant"};
cin=lookup_widget(objet,"gb_modif_cin");
nom=lookup_widget(objet,"gb_modif_nom");
prenom=lookup_widget(objet,"gb_modif_prenom");
email=lookup_widget(objet,"gb_modif_email");
numero=lookup_widget(objet,"gb_modif_num");

age=lookup_widget(objet,"gb_modif_spin_age");

se1=lookup_widget(objet,"gb_modif_homme");
se2=lookup_widget(objet,"gb_modif_femme");

poste=lookup_widget(objet,"gb_modif_combo_poste");

rech=lookup_widget(objet,"gb_modif_chercher");


strcpy(reche,gtk_entry_get_text(GTK_ENTRY(rech)));
//printf("hello world");
FILE *f=NULL;
int v=1;
f=fopen("user.txt","r");
while(fscanf(f,"%s %s %s %s %d %d %s %s \n",c.nom,c.prenom,c.cin,c.sexe,&c.age,&c.num,c.email,c.poste)!=EOF)
        {
	if( strcmp(reche,c.cin)==0){
			gtk_widget_hide (message);
			v=0;
			strcpy(p.cin,c.cin);
			strcpy(p.nom,c.nom);
			strcpy(p.prenom,c.prenom);
			strcpy(p.email,c.email);
			p.num=c.num;
			p.age=c.age;
			strcpy(p.poste,c.poste);
			strcpy(p.sexe,c.sexe);
			
			
			
	}
	else 
		{gtk_widget_show (message);
		gtk_label_set_text(GTK_LABEL(message),"ce cin n'existe pas");
		gtk_entry_set_text (cin,"");
		gtk_entry_set_text (nom,"");
		gtk_entry_set_text (prenom,"");
		gtk_entry_set_text (numero,"");
		gtk_entry_set_text (age,"");
		gtk_entry_set_text (sexe,"");
		gtk_entry_set_text (email,"");
		gtk_entry_set_text (poste,"");

}
}
if(v==0)
{
	gtk_entry_set_text (cin,p.cin);
	gtk_entry_set_text (nom,p.nom);
	gtk_entry_set_text (prenom,p.prenom);
	if(strcmp(p.sexe,"Homme")==0)
	{
	gtk_toggle_button_set_active(GTK_RADIO_BUTTON (se1),TRUE);
	}
	else if(strcmp(p.sexe,"Femme")==0) {
	gtk_toggle_button_set_active(GTK_RADIO_BUTTON (se2),TRUE);
	}
	i=0;
	while(i<6 && strcmp(matrice[i],p.poste)!=0)
	{
	i++;}
	gtk_combo_box_set_active(GTK_COMBO_BOX(poste),i);
	
	gtk_spin_button_set_value(age,p.age);
	sprintf(nmch,"%d",p.num);
	gtk_entry_set_text(numero,nmch);
	gtk_entry_set_text (email,p.email);
	gtk_widget_hide (message);
}
}


void
on_gb_aff_users_btn_clicked            (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *windowgb_show, *window_destroy;
GtkWidget *treeview1;
window_destroy=lookup_widget(objet,"gb_welcome");
gtk_widget_destroy(window_destroy);
windowgb_show=create_gb_aff();
gtk_widget_show (windowgb_show);

treeview1=lookup_widget(windowgb_show,"gb_treeview");
afficher(treeview1);
}


void
on_gb_confirmer_check_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
x=1;
}


void
on_gb_add_homme_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
sexe=1;
}


void
on_gb_add_femme_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
sexe=2;
}


void
on_gb_accualiser_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *fenetre_afficher,*w1;
GtkWidget *treeview1;

w1=lookup_widget(objet,"gb_aff");
fenetre_afficher=create_gb_aff();
gtk_widget_show(fenetre_afficher);
gtk_widget_hide(w1);
treeview1=lookup_widget(fenetre_afficher,"gb_treeview");
afficher(treeview1);
}


void
on_gb_modif_homme_activate             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
sexem=1;
}


void
on_gb_modif_femme_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
sexem=2;
}


void
on_gb_treefumee_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_gb_treemvt_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_gb_refresh_mvt_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *fenetre_afficher,*w1;
GtkWidget *treeview1;

w1=lookup_widget(objet,"gb_liste");
fenetre_afficher=create_gb_liste();
gtk_widget_show(fenetre_afficher);
gtk_widget_hide(w1);
treeview1=lookup_widget(fenetre_afficher,"gb_treemvt");
afficher_mvt(treeview1);
}


void
on_gb_refresh_fumee_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *fenetre_afficher,*w1;
GtkWidget *treeview1;
w1=lookup_widget(objet,"gb_liste");
fenetre_afficher=create_gb_liste();
gtk_widget_show(fenetre_afficher);
gtk_widget_hide(w1);
treeview1=lookup_widget(fenetre_afficher,"gb_treefumee");
afficher_fume(treeview1);
}


/*__________________________yahya______________________________________________*/
int x,y;

void
on_radiobuttonhomme_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
		x=0;

}


void
on_buttonafficher_reclamation_clicked  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowafficher_reclamation,*windowajouter_reclamation,*treeview_reclamation;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
	windowajouter_reclamation=lookup_widget(objet_graphique,"windowajouter_reclamation");
	gtk_widget_destroy(windowajouter_reclamation);
	windowafficher_reclamation=create_windowafficher_reclamation();
	gtk_widget_show(windowafficher_reclamation);
	treeview_reclamation=lookup_widget(windowafficher_reclamation,"treeview_reclamation");
	afficher_reclamation(treeview_reclamation,"reclamation.txt");
	

}


void
on_buttonajouter_reclamation_clicked   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	reclamation r;
	GtkWidget *id,*cin,*nom,*prenom,*type,*text_reclamation,*jour,*mois,*annee;
	id=lookup_widget(objet_graphique,"entryid_reclamation");
	cin=lookup_widget(objet_graphique,"entrycin_reclmation");
	nom=lookup_widget(objet_graphique,"entrynom_reclamation");
	prenom=lookup_widget(objet_graphique,"entryprenom_reclamation");
	type=lookup_widget(objet_graphique,"comboboxtype_reclamation");
	text_reclamation=lookup_widget(objet_graphique,"entryreclamation")
;
	jour=lookup_widget(objet_graphique,"spinbuttonjour_reclamation");
	mois=lookup_widget(objet_graphique,"spinbuttonmois_reclamation");
	annee=lookup_widget(objet_graphique,"spinbuttonannee_reclamation");

	strcpy(r.id,gtk_entry_get_text(GTK_ENTRY(id)));
	strcpy(r.cin,gtk_entry_get_text(GTK_ENTRY(cin)));
	strcpy(r.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
	strcpy(r.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
	strcpy(r.text_reclamation,gtk_entry_get_text(GTK_ENTRY(text_reclamation)));
	r.d.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
	r.d.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
	r.d.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));

	if(strcmp("Service d'hebergement",gtk_combo_box_get_active_text(GTK_COMBO_BOX(type)))==0)
		r.type=0;
	else
		r.type=1;
	r.sexe=x;
	r.education=y;
	ajouter_reclamation(r);
	
////////
	GtkWidget *windowafficher_reclamation,*windowajouter_reclamation,*treeview_reclamation;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
	windowajouter_reclamation=lookup_widget(objet_graphique,"windowajouter_reclamation");
	gtk_widget_destroy(windowajouter_reclamation);
	windowafficher_reclamation=create_windowafficher_reclamation();
	gtk_widget_show(windowafficher_reclamation);	
}


void
on_buttonmodifier_reclamation_clicked  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	reclamation r;
	GtkWidget *id,*cin,*nom,*prenom,*type,*text_reclamation,*jour,*mois,*annee;
	id=lookup_widget(objet_graphique,"entryid_reclamation");
	cin=lookup_widget(objet_graphique,"entrycin_reclmation");
	nom=lookup_widget(objet_graphique,"entrynom_reclamation");
	prenom=lookup_widget(objet_graphique,"entryprenom_reclamation");
	type=lookup_widget(objet_graphique,"comboboxtype_reclamation");
	text_reclamation=lookup_widget(objet_graphique,"entryreclamation");
	jour=lookup_widget(objet_graphique,"spinbuttonjour_reclamation");
	mois=lookup_widget(objet_graphique,"spinbuttonmois_reclamation");
	annee=lookup_widget(objet_graphique,"spinbuttonannee_reclamation");
	strcpy(r.id,gtk_entry_get_text(GTK_ENTRY(id)));
	strcpy(r.cin,gtk_entry_get_text(GTK_ENTRY(cin)));
	strcpy(r.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
	strcpy(r.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
	strcpy(r.text_reclamation,gtk_entry_get_text(GTK_ENTRY(text_reclamation)));
	r.d.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
	r.d.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
	r.d.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
	if(strcmp("Service d'hebergement",gtk_combo_box_get_active_text(GTK_COMBO_BOX(type)))==0)
		r.type=0;
	else
		r.type=1;
	r.sexe=x;
	r.education=y;
	modifier_reclamation(r);
////////
	GtkWidget *windowafficher_reclamation,*windowajouter_reclamation,*treeview_reclamation;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
	windowajouter_reclamation=lookup_widget(objet_graphique,"windowajouter_reclamation");
	gtk_widget_destroy(windowajouter_reclamation);
	windowafficher_reclamation=create_windowafficher_reclamation();
	gtk_widget_show(windowafficher_reclamation);
}


void
on_radiobuttonfemme_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
		x=1;

}


void
on_checkbuttonprepa_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(togglebutton))
		y=0;

}


void
on_checkbuttoncycleding_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(togglebutton))
		y=1;

}


void
on_checkbuttonbussiness_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	if(gtk_toggle_button_get_active(togglebutton))
		y=2;

}


void
on_buttonrecherche_reclamation_clicked (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *cin,*treeview_reclamation;
	char cin1[20];
	cin=lookup_widget(objet_graphique,"entryrecherche_reclamation");
	treeview_reclamation=lookup_widget(objet_graphique,"treeview_reclamation");
	strcpy(cin1,gtk_entry_get_text(GTK_ENTRY(cin)));
	if(strcmp(cin1,"")!=0)
	{
		recherche_reclamation(cin1);
		afficher_reclamation(treeview_reclamation,"recherche.txt");
		remove("recherche.txt");
	}
	else
		afficher_reclamation(treeview_reclamation,"reclamation.txt");
	
	

}


void
on_buttongotoajouter_clicked           (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowafficher_reclamation,*windowajouter_reclamation,*treeview_reclamation;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
	windowajouter_reclamation=lookup_widget(objet_graphique,"windowajouter_reclamation");
	gtk_widget_destroy(windowafficher_reclamation);
	windowajouter_reclamation=create_windowajouter_reclamation();
	gtk_widget_show(windowajouter_reclamation);

}


void
on_buttongotomodifier_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowajouter_reclamation,*windowafficher_reclamation;
	GtkTreeModel     *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget* treeview;
	
	
        gchar* id;
	gchar* cin;
	gchar* nom;
	gchar* prenom;
	gchar* text;
	gint sexe;
	gint education;
	gint jour;
	gint mois;
	gint annee;
	gint type;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
        treeview=lookup_widget(windowafficher_reclamation,"treeview_reclamation");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
		gtk_tree_model_get (model,&iter,0,&id,1,&cin,2,&nom,3,&prenom,4,&type,5,&jour,6,&mois,7,&annee,8,&text,9,&sexe,10,&education,-1);
		gtk_widget_destroy(windowafficher_reclamation);
		windowajouter_reclamation=lookup_widget(objet_graphique,"windowajouter_reclamation");
		windowajouter_reclamation=create_windowajouter_reclamation();
		gtk_widget_show(windowajouter_reclamation);
	        gtk_entry_set_text(GTK_ENTRY(lookup_widget(windowajouter_reclamation,"entryid_reclamation")),id);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(windowajouter_reclamation,"entrycin_reclmation")),cin);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(windowajouter_reclamation,"entrynom_reclamation")),nom);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(windowajouter_reclamation,"entryprenom_reclamation")),prenom);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(windowajouter_reclamation,"entryreclamation")),text);
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowajouter_reclamation,"spinbuttonjour_reclamation")),jour);
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowajouter_reclamation,"spinbuttonmois_reclamation")),mois);
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowajouter_reclamation,"spinbuttonannee_reclamation")),annee);
		gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowajouter_reclamation,"comboboxtype_reclamation")),type);

	}
}


void
on_buttonsupprimer_reclamation_clicked (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowajouter_reclamation,*windowafficher_reclamation;
	GtkTreeModel  *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget* treeview;
	
	
        gchar* id;
	
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
        treeview=lookup_widget(windowafficher_reclamation,"treeview_reclamation");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
		gtk_tree_model_get (model,&iter,0,&id,-1);
		supprimer_reclamation(id);
		afficher_reclamation(treeview,"reclamation.txt");
		
	}
}


void
on_buttongotoserviceleplusreclame_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowafficher_reclamation,*windowserviceleplusreclame;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
	windowserviceleplusreclame=lookup_widget(objet_graphique,"windowserviceleplusreclame");
	gtk_widget_destroy(windowafficher_reclamation);
	windowserviceleplusreclame=create_windowserviceleplusreclame();
	gtk_widget_show(windowserviceleplusreclame);
}


void
on_buttonserviceleplusreclame_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	int r;
	GtkWidget *resultat;
	resultat=lookup_widget(objet_graphique,"labelserviceleplusreclame");
	r=serviceleplusreclame();
	if(r==0)
		gtk_label_set_text(GTK_LABEL(resultat),"Le service le plus reclamé est : Service d'hebergement");
	else
		gtk_label_set_text(GTK_LABEL(resultat),"Le service le plus reclamé est : Service de restauration");
}


void
on_buttongotoafficher2_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *windowafficher_reclamation,*windowserviceleplusreclame,*treeview_reclamation;
	windowafficher_reclamation=lookup_widget(objet_graphique,"windowafficher_reclamation");
	windowserviceleplusreclame=lookup_widget(objet_graphique,"windowserviceleplusreclame");
	gtk_widget_destroy(windowserviceleplusreclame);
	windowafficher_reclamation=create_windowafficher_reclamation();
	gtk_widget_show(windowafficher_reclamation);
	treeview_reclamation=lookup_widget(windowafficher_reclamation,"treeview_reclamation");
	afficher_reclamation(treeview_reclamation,"reclamation.txt");
}
void
on_home_yahya_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *window1;
windowacc=lookup_widget(button,"windowafficher_reclamation");
gtk_widget_destroy(windowacc);

window1=lookup_widget(button,"gb_welcome");
window1=create_gb_welcome();
gtk_widget_show(window1);

}
/*________________yesmin_________________________________________*/
void
on_buttongea_clicked                   (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmenu,*w2;
w2=lookup_widget(objet_graphique,"gestionyes");
gtk_widget_destroy(w2);
windowmenu=create_ajyes();
gtk_widget_show(windowmenu);


}


void
on_buttongem_clicked                   (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmenu,*w2;
w2=lookup_widget(objet_graphique,"gestionyes");
gtk_widget_destroy(w2);
windowmenu=create_myes();
gtk_widget_show(windowmenu);


}


void
on_buttonges_clicked                   (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmenu,*w2;
w2=lookup_widget(objet_graphique,"gestionyes");
gtk_widget_destroy(w2);
windowmenu=create_suppyes();
gtk_widget_show(windowmenu);


}


void
on_buttongech_clicked                  (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmenu,*w2;
w2=lookup_widget(objet_graphique,"gestionyes");
gtk_widget_destroy(w2);
windowmenu=create_cheryes();
gtk_widget_show(windowmenu);


}


void
on_buttongeaff_clicked                 (GtkWidget *objet,
                                        gpointer         user_data)
{
GtkWidget *w2;
GtkWidget *treeview1;
w2=lookup_widget(objet,"gestionyes");
treeview1 = lookup_widget(w2,"treeviewgeaff");
videre(treeview1);
affe(treeview1);
}


void
on_buttongedec_clicked                 (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_buttongeaok_clicked                 (GtkWidget      *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *id,*t,*nc,*qd,*d,*cons,*l,*f,*c,*pt,*eqoui,*eqnon,*ajouter,*esucces,*eerreur,*calendargea ;
plat p;
char texte[200];
char t1[200]={'0','/'};
char t2[200]={'0','/'};
char t3[200]={'0','/'};
char t4[200]={'0'};
int an,j,mois;

ajouter = lookup_widget(objet_graphique,"ajyes");
calendargea = lookup_widget(ajouter,"calendargea");
gtk_calendar_get_date(GTK_CALENDAR(calendargea),&an,&mois,&j);
p.d.j=j;
p.d.m=mois+1;
p.d.a=an;
nc = lookup_widget(objet_graphique, "spinbuttongeanc") ;
t = lookup_widget(objet_graphique, "comboboxentrygeat") ;
eqoui = lookup_widget(objet_graphique, "radiobuttongeaoui") ;
eqnon= lookup_widget(objet_graphique, "radiobuttongeanon") ;
l=lookup_widget(objet_graphique, "checkbuttongeal") ;
f= lookup_widget(objet_graphique, "checkbuttongeaf") ;
c= lookup_widget(objet_graphique, "checkbuttongeac") ;
pt = lookup_widget(objet_graphique, "checkbuttongeap") ;
id = lookup_widget(objet_graphique, "entrygeaid") ;
qd= lookup_widget(objet_graphique, "entrygeaqd") ;
strcpy(p.id,gtk_entry_get_text(GTK_ENTRY(id)));
if (control_e(p.id)==0)
{

strcpy(p.qd,gtk_entry_get_text(GTK_ENTRY(qd)));
p.nc=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(nc));
strcpy(p.t,gtk_combo_box_get_active_text(GTK_COMBO_BOX(t)));
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(eqoui)))
{strcpy(p.eq,"oui");}
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(eqnon)))
{strcpy(p.eq,"non");}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(l)))
{strcpy(t1,"l/");}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(f)))
{strcpy(t2,"f/");}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(c)))
{strcpy(t3,"c/");}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(pt)))
{strcpy(t4,"p");}
strcat(t1,t2);
strcat(t3,t4);
strcat(t1,t3);
strcpy(p.cons,t1);
ajoutyes(p);
sprintf(texte,"✔️ Ajout avec succés 😁!");
esucces = lookup_widget(objet_graphique,"labelgeasuc");
GdkColor color;
gdk_color_parse ("#40e61a", &color);
gtk_widget_modify_fg (esucces, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(esucces),texte);

sprintf(texte,"");
eerreur=lookup_widget(objet_graphique,"labelgeaidc");
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (eerreur, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(eerreur),texte);
}
else
{
sprintf(texte,"❌ Cet id existe dèja 😰!");
eerreur=lookup_widget(objet_graphique,"labelgeaidc");
GdkColor color;
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (eerreur, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(eerreur),texte);

sprintf(texte,"");
esucces=lookup_widget(objet_graphique,"labelgeasuc");
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (esucces, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(esucces),texte);
}



}


void
on_buttongeac_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmenu,*w2;
w2=lookup_widget(objet_graphique,"ajyes");
gtk_widget_destroy(w2);
windowmenu=create_gestionyes();
gtk_widget_show(windowmenu);
GtkWidget *treeview1;
treeview1 = lookup_widget(windowmenu,"treeviewgeaff");
affe(treeview1);

}


void
on_buttongemconsulter_clicked          (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *id,*t,*nc,*qd,*d,*cons,*l,*f,*c,*pt,*eqoui,*eqnon,*esucces,*eerreur,*jr,*mois,*an ;
plat p;
jr = lookup_widget(objet_graphique, "spinbuttongemj") ;
mois = lookup_widget(objet_graphique, "spinbuttongemm") ;
an= lookup_widget(objet_graphique, "spinbuttongema") ;
nc = lookup_widget(objet_graphique, "spinbuttongemnc") ;
t = lookup_widget(objet_graphique, "comboboxentrygemt") ;
eqoui = lookup_widget(objet_graphique, "radiobuttongemoui") ;
eqnon= lookup_widget(objet_graphique, "radiobuttongemnon") ;
l=lookup_widget(objet_graphique, "checkbuttongeml") ;
f= lookup_widget(objet_graphique, "checkbuttongemf") ;
c= lookup_widget(objet_graphique, "checkbuttongemc") ;
pt = lookup_widget(objet_graphique, "checkbuttongemp") ;
id = lookup_widget(objet_graphique, "entrygemid") ;
qd= lookup_widget(objet_graphique, "entrygemqd") ;
strcpy(p.id,gtk_entry_get_text(GTK_ENTRY(id)));
int i=0;
char texte[2000];
char bloc[200][200]={"Petit_Dej","Dejeuner","Diner"};
if (chercheryes(&p,p.id)==1)
{

gtk_entry_set_text(GTK_ENTRY(qd),p.qd);
gtk_spin_button_set_value(jr,p.d.j);
gtk_spin_button_set_value(mois,p.d.m);
gtk_spin_button_set_value(an,p.d.a);
while((i<3)&&(strcmp(bloc[i],p.t)!=0))
{i=i+1;}
gtk_combo_box_set_active(GTK_COMBO_BOX(t),i);
if(p.cons[0]=='l')
{
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(l),TRUE);}
if(p.cons[2]=='f')
{
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(f),TRUE);}
if(p.cons[4]=='c')
{
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(c),TRUE);}
if(p.cons[6]=='p')
{
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(pt),TRUE);}
if(p.cons[0]=='0')
{
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(l),FALSE);}
if(p.cons[2]=='0')
{
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(f),FALSE);}
if(p.cons[4]=='0')
{
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(c),FALSE);}
if(p.cons[6]=='0')
{
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(pt),FALSE);}
if(strcmp(p.eq,"oui")==0)
{gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(eqoui),TRUE);}
if(strcmp(p.eq,"non")==0)
{gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(eqnon),TRUE);}
if(strcmp(p.eq,"oui")!=0)
{gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(eqoui),FALSE);}
if(strcmp(p.eq,"non")!=0)
{gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(eqnon),FALSE);}
sprintf(texte,"");
eerreur=lookup_widget(objet_graphique,"labelgemer");
GdkColor color;
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (eerreur, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(eerreur),texte);

sprintf(texte,"");
esucces=lookup_widget(objet_graphique,"labelgemsuc");
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (esucces, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(esucces),texte);
}
else
{
sprintf(texte,"❌ Cet id n'existe pas dèja 😰!");
eerreur=lookup_widget(objet_graphique,"labelgemer");
GdkColor color;
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (eerreur, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(eerreur),texte);

sprintf(texte,"");
esucces=lookup_widget(objet_graphique,"labelgemsuc");
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (esucces, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(esucces),texte);
}
}


void
on_buttongemcancel_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmenu,*w2;
w2=lookup_widget(objet_graphique,"myes");
gtk_widget_destroy(w2);
windowmenu=create_gestionyes();
gtk_widget_show(windowmenu);
GtkWidget *treeview1;
treeview1 = lookup_widget(windowmenu,"treeviewgeaff");
affe(treeview1);



}


void
on_buttongemok_clicked                 (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *id,*t,*nc,*qd,*d,*cons,*l,*f,*c,*pt,*eqoui,*eqnon,*esucces,*eerreur,*jr,*mois,*an ;
plat p;
char texte[200];
char t1[200]={'0','/'};
char t2[200]={'0','/'};
char t3[200]={'0','/'};
char t4[200]={'0'};
//modifier = lookup_widget(objet_graphique,"meya");
jr = lookup_widget(objet_graphique, "spinbuttongemj") ;
mois = lookup_widget(objet_graphique, "spinbuttongemm") ;
an= lookup_widget(objet_graphique, "spinbuttongema") ;
nc = lookup_widget(objet_graphique, "spinbuttongemnc") ;
t = lookup_widget(objet_graphique, "comboboxentrygemt") ;
eqoui = lookup_widget(objet_graphique, "radiobuttongemoui") ;
eqnon= lookup_widget(objet_graphique, "radiobuttongemnon") ;
l=lookup_widget(objet_graphique, "checkbuttongeml") ;
f= lookup_widget(objet_graphique, "checkbuttongemf") ;
c= lookup_widget(objet_graphique, "checkbuttongemc") ;
pt = lookup_widget(objet_graphique, "checkbuttongemp") ;
id = lookup_widget(objet_graphique, "entrygemid") ;
qd= lookup_widget(objet_graphique, "entrygemqd") ;
strcpy(p.id,gtk_entry_get_text(GTK_ENTRY(id)));
if (control_e(p.id)==1)
{
p.d.j=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jr));
p.d.m=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
p.d.a=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(an));
strcpy(p.qd,gtk_entry_get_text(GTK_ENTRY(qd)));
p.nc=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(nc));
strcpy(p.t,gtk_combo_box_get_active_text(GTK_COMBO_BOX(t)));
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(eqoui)))
{strcpy(p.eq,"oui");}
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(eqnon)))
{strcpy(p.eq,"non");}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(l)))
{strcpy(t1,"l/");}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(f)))
{strcpy(t2,"f/");}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(c)))
{strcpy(t3,"c/");}
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(pt)))
{strcpy(t4,"p");}
strcat(t1,t2);
strcat(t3,t4);
strcat(t1,t3);
strcpy(p.cons,t1);
modifieryes(p);
sprintf(texte,"✔️ Modifiee avec succés 😁!");
esucces = lookup_widget(objet_graphique,"labelgemsuc");
GdkColor color;
gdk_color_parse ("#40e61a", &color);
gtk_widget_modify_fg (esucces, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(esucces),texte);

sprintf(texte,"");
eerreur=lookup_widget(objet_graphique,"labelgemer");
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (eerreur, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(eerreur),texte);
}
else
{
sprintf(texte,"❌ Cet id n'existe pas dèja 😰!");
eerreur=lookup_widget(objet_graphique,"labelgemer");
GdkColor color;
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (eerreur, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(eerreur),texte);

sprintf(texte,"");
esucces=lookup_widget(objet_graphique,"labelgemsuc");
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (esucces, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(esucces),texte);
}


}


void
on_buttongesr_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmenu,*w2;
w2=lookup_widget(objet_graphique,"suppyes");
gtk_widget_destroy(w2);
windowmenu=create_gestionyes();
gtk_widget_show(windowmenu);
GtkWidget *treeview1;
treeview1 = lookup_widget(windowmenu,"treeviewgeaff");
affe(treeview1);


}


void
on_buttongechch_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *w2;
GtkWidget *treeview2;
GtkWidget *refc,*herreur;
char ref[200];
char texte[200];
plat p;
refc = lookup_widget(objet_graphique, "entrygechid") ;
strcpy(ref,gtk_entry_get_text(GTK_ENTRY(refc)));
if(control_e(ref)==1)
{
w2=lookup_widget(objet_graphique,"cheryes");
treeview2 = lookup_widget(w2,"treeviewgech");
videre(treeview2);
aff_che(treeview2,ref);
sprintf(texte,"");
herreur=lookup_widget(objet_graphique,"labelgecher");
GdkColor color;
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (herreur, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(herreur),texte);
}
else
{
sprintf(texte,"❌ Cet id n'existe pas dèja 😰!");
herreur=lookup_widget(objet_graphique,"labelgecher");
GdkColor color;
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (herreur, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(herreur),texte);
}
}
void
on_buttongechr_clicked                 (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmenu,*w2;
w2=lookup_widget(objet_graphique,"cheryes");
gtk_widget_destroy(w2);
windowmenu=create_gestionyes();
gtk_widget_show(windowmenu);
GtkWidget *treeview1;
treeview1 = lookup_widget(windowmenu,"treeviewgeaff");
affe(treeview1);


}


void
on_buttongess_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
plat p;
char ref[200];
char texte[200];
GtkWidget *refs,*eerreur;
refs = lookup_widget(objet_graphique, "entrygesid") ;
strcpy(ref,gtk_entry_get_text(GTK_ENTRY(refs)));
if(control_e(ref)==1)
{
supprimeryes(p,ref);
sprintf(texte,"✔️ Supprimee avec succés 😁!");
eerreur=lookup_widget(objet_graphique,"labelgessuc");
GdkColor color;
gdk_color_parse ("#40e61a", &color);
gtk_widget_modify_fg (eerreur, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(eerreur),texte);
}
else
{
sprintf(texte,"❌ Cet id n'existe pas dèja 😰!");
eerreur=lookup_widget(objet_graphique,"labelgeser");
GdkColor color;
gdk_color_parse ("#ff250d", &color);
gtk_widget_modify_fg (eerreur, GTK_STATE_NORMAL, &color);
gtk_label_set_text(GTK_LABEL(eerreur),texte);
}
}

void
on_treeviewgeaff_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
char ch[200];
plat p;
GtkTreeIter iter;
gchar* ID;
gchar* TYPE;
gchar* Nc;
gchar* Qd;
gchar* D;
gchar* Cons;
gchar* Eq;
GtkTreeModel *model = gtk_tree_view_get_model(treeview);
if (gtk_tree_model_get_iter(model,&iter,path))
{
gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&ID,1,&TYPE,2,&Nc,3,&Qd,4,&D,5,&Cons,6,&Eq,-1);
strcpy(ch,ID);
supprimeryes(p,ch);

affe(treeview);
}
}


void
on_buttongechct_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *eqoui,*eqnon,*eqh;
char ref[200];
eqh=lookup_widget(objet_graphique, "radiobuttongechctpd") ;
eqoui = lookup_widget(objet_graphique, "radiobuttongechctd") ;
eqnon= lookup_widget(objet_graphique, "radiobuttongechctdn") ;
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(eqoui)))
{strcpy(ref,"Dejeuner");}
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(eqnon)))
{strcpy(ref,"Diner");}
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(eqh)))
{strcpy(ref,"Petit_Dej");}
GtkWidget *w2;
GtkWidget *treeview1;
w2=lookup_widget(objet_graphique,"cheryes");
treeview1 = lookup_widget(w2,"treeviewgechct");
videre(treeview1);
aff_chte(treeview1,ref);
}


void
on_buttongechce_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *eqoui,*eqnon;
char ref[200];
eqoui = lookup_widget(objet_graphique, "radiobuttongechceoui") ;
eqnon= lookup_widget(objet_graphique, "radiobuttongechcenon") ;
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(eqoui)))
{strcpy(ref,"oui");}
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(eqnon)))
{strcpy(ref,"non");}
GtkWidget *w2;
GtkWidget *treeview1;
w2=lookup_widget(objet_graphique,"cheryes");
treeview1 = lookup_widget(w2,"treeviewgechce");
videre(treeview1);
aff_chee(treeview1,ref);
}


void
on_buttongebest_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmenu,*w2;
w2=lookup_widget(objet_graphique,"gestionyes");
gtk_widget_destroy(w2);
windowmenu=create_bestyes();
gtk_widget_show(windowmenu);
}


void
on_buttongebestr_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmenu,*w2;
w2=lookup_widget(objet_graphique,"bestyes");
gtk_widget_destroy(w2);
windowmenu=create_gestionyes();
gtk_widget_show(windowmenu);
GtkWidget *treeview1;
treeview1 = lookup_widget(windowmenu,"treeviewgeaff");
affe(treeview1);
}




void
on_buttonbestmenu_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

int i=0,t,j,n1=99999,n2=99999,n3=99999,n4=99999;
GtkWidget *maj,*malabel; char texte[200];
maj=lookup_widget(objet_graphique,"spinbuttonbestmenu");
malabel=lookup_widget(objet_graphique,"labelgebest");
j=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(maj));
int a,b,c,b1,a1; float c2;
FILE *f=NULL;
f=fopen("dechets.txt","r");
while(fscanf(f,"%d %d %f",&a,&b,&c2)!=EOF)
{c=(int)(c2);
i=i+1;
if((j==1)&&(i<25))
 {if (n1>c) {n1=c; b1=b; a1=a;}}
else if((j==2)&&(i<50)&&(i>=25))
 {if (n2>c) {n2=c; b1=b; a1=a;}}

else if((j==3)&&(i<75)&&(i>=50))
 {if (n3>c) {n3=c; b1=b; a1=a;}}

else if((j==4)&&(i>=75)&&(i<=100))
 {if (n4>c) { n4=c; b1=b; a1=a;}}
}
fclose(f);
char ch1[200],ch2[200],ch3[200];
/*strcpy(ch1,"le repas num ");
sprintf(ch2,"%d",b1);
strcat(ch1,ch2);
strcat(ch1," du jour ");
sprintf(ch3,"%d",a1);
strcat(ch1,ch3);
strcat(ch1," de la semaine 1 est la meilleur menu");
gtk_label_set_text(GTK_LABEL(malabel),ch1);*//////////////

if (j==1)
{strcpy(ch1,"le repas num ");
sprintf(ch2,"%d",b1);
strcat(ch1,ch2);
strcat(ch1," du jour ");
sprintf(ch3,"%d",a1);
strcat(ch1,ch3);
strcat(ch1," pour la semaine 1 est le meilleur menu");
sprintf(texte,ch1);
GdkColor color;
gdk_color_parse ("#40e61a", &color);
gtk_widget_modify_fg (malabel, GTK_STATE_NORMAL, &color);
    gtk_label_set_text(GTK_LABEL(malabel),texte);
}
else if (j==2)
{strcpy(ch1,"le repas num ");
sprintf(ch2,"%d",b1);
strcat(ch1,ch2);
strcat(ch1," du jour ");
sprintf(ch3,"%d",a1);
strcat(ch1,ch3);
strcat(ch1," pour la semaine 2 est le meilleur menu");
sprintf(texte,ch1); GdkColor color;
gdk_color_parse ("#40e61a", &color);
gtk_widget_modify_fg (malabel, GTK_STATE_NORMAL, &color);
    gtk_label_set_text(GTK_LABEL(malabel),texte);
}
else if (j==3)
{strcpy(ch1,"le repas num ");
sprintf(ch2,"%d",b1);
strcat(ch1,ch2);
strcat(ch1," du jour ");
sprintf(ch3,"%d",a1);
strcat(ch1,ch3);
strcat(ch1," pour la semaine 3 est le meilleur menu");
sprintf(texte,ch1); GdkColor color;
gdk_color_parse ("#40e61a", &color);
gtk_widget_modify_fg (malabel, GTK_STATE_NORMAL, &color);
    gtk_label_set_text(GTK_LABEL(malabel),texte);
}
else if (j==4)
{strcpy(ch1,"le repas num ");
sprintf(ch2,"%d",b1);
strcat(ch1,ch2);
strcat(ch1," du jour ");
sprintf(ch3,"%d",a1);
strcat(ch1,ch3);
strcat(ch1," pour la semaine 4 est le meilleur menu");
sprintf(texte,ch1); GdkColor color;
gdk_color_parse ("#40e61a", &color);
gtk_widget_modify_fg (malabel, GTK_STATE_NORMAL, &color);
    gtk_label_set_text(GTK_LABEL(malabel),texte);
}
}
/*____________________________raed_______________________________________*/
void
on_buttonAcceuil_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *windowSupprimer;
GtkWidget *windowMenu;
GtkWidget *windowAjoutCapteur;
GtkWidget *windowModifier;
GtkWidget *windowListeCapteurs;
GtkWidget *windowCapteurAlarmants;
windowSupprimer = lookup_widget(button, "windowSupprimeCapteur");
gtk_widget_destroy(windowSupprimer);

windowModifier = lookup_widget(button, "windowModifierCapteur");
gtk_widget_destroy(windowModifier);

windowAjoutCapteur = lookup_widget(button, "windowAjoutCapteur");
gtk_widget_destroy(windowAjoutCapteur);


windowListeCapteurs = lookup_widget(button, "windowListeCapteurs");
gtk_widget_destroy(windowListeCapteurs);

windowCapteurAlarmants = lookup_widget(button,"window1");
gtk_widget_destroy(windowCapteurAlarmants);

windowMenu = create_windowGestionCapteurs();
gtk_widget_show(windowMenu);

}



void
on_buttonAjoutCapteur_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *windowAjout;
GtkWidget *windowMenu;
windowMenu = lookup_widget(button,"windowGestionCapteurs");
gtk_widget_destroy(windowMenu);

windowAjout = lookup_widget(button,"windowAjoutCapteur");
windowAjout = create_windowAjoutCapteur();
gtk_widget_show(windowAjout);
}


void
on_buttonListeCapteurs_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview;
GtkWidget *listecap;
GtkWidget *window;
listecap = create_windowListeCapteurs();
gtk_widget_show(listecap);
treeview = lookup_widget(listecap, "treeviewr");
afficher_capteur(treeview);
window = lookup_widget(button,"windowGestionCapteurs");
gtk_widget_destroy(window);
}


void
on_buttonSupprimeCapteur_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *windowSupprimer;
GtkWidget *windowMenu;
GtkWidget *treeview;
windowMenu = lookup_widget(button, "windowGestionCapteurs");
gtk_widget_destroy(windowMenu);
windowSupprimer = create_windowSupprimeCapteur();
gtk_widget_show(windowSupprimer);
treeview = lookup_widget (windowSupprimer, "treeview4r");
afficher_capteur(treeview);
}


void
on_buttonModifCapteur_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *windowModifier;
GtkWidget *windowMenu;
GtkWidget *treeview;
windowMenu = lookup_widget(button, "windowGestionCapteurs");
gtk_widget_destroy(windowMenu);
windowModifier = create_windowModifierCapteur();
gtk_widget_show(windowModifier);
treeview = lookup_widget (windowModifier, "treeview2r");
afficher_capteur(treeview);
}

int choix[] = {0,0,0,0,0}; 
int choix1[] = {0,0,0,0,0};



void
on_buttonAjouter_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
Capteur c;
Capteur r;
FILE *fp1;

fp1 = fopen("capteurs.bin", "rb");

GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *Jour;
GtkWidget *Mois;
GtkWidget *Annee;
GtkWidget *windowRemplir;
GtkWidget *windowConfirmation;
GtkWidget *Etage;

input1 = lookup_widget(button, "entryIdr");
input2 = lookup_widget(button, "entry2r");
Jour = lookup_widget(button, "spinbuttonJoursr1");
Mois = lookup_widget(button, "spinbuttonMoisr1");
Annee = lookup_widget(button, "spinbuttonAnneesr1");
Etage = lookup_widget(button, "combobox1r");
strcpy(c.etage,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Etage)));
strcpy(c.id,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(c.valeur,gtk_entry_get_text(GTK_ENTRY(input2)));


if (choix1[0]==1)
strcpy(c.type,"Temperature");
else if (choix1[1]==1)
strcpy(c.type,"Humidite");
else if (choix1[2]==1)
strcpy(c.type,"Debit");
else if (choix1[3]==1)
strcpy(c.type,"Mouvement");
else if (choix1[4]==1)
strcpy(c.type,"Fumee");



c.date_installation.jour= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Jour));
c.date_installation.mois= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Mois));
c.date_installation.annee= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Annee));


ajouter_capteur(c);
windowConfirmation = create_dialog1();
gtk_widget_show(windowConfirmation);



}


char tmps[30];
void
on_buttonModif_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
Capteur c;
GtkWidget *input1;
GtkWidget *windowModification;
FILE *fp;
fp = fopen("temp1.bin", "rb");
input1 = lookup_widget(button, "entryIDr");
strcpy(tmps,gtk_entry_get_text(GTK_ENTRY(input1)));
windowModification = create_ModifierCapteur();
gtk_widget_show(windowModification);

GtkWidget *output1, *output2, *output3, *output4, *output5, *output6;
if(fp!=NULL)
{
while (fread(&c, sizeof(c), 1, fp))
{
	output1 = lookup_widget(windowModification, "entryMOdifierId");
	gtk_entry_set_text(GTK_ENTRY(output1), c.id);

	output2 = lookup_widget(windowModification, "entryModifierValeur");
	gtk_entry_set_text(GTK_ENTRY(output2), c.valeur);

	output3 = lookup_widget(windowModification, "entryModifierEtage");
	gtk_entry_set_text(GTK_ENTRY(output3), c.etage);

	output4 = lookup_widget(windowModification, "spinbuttonJoursr");
	gtk_spin_button_set_value(GTK_SPIN_BUTTON(output4), c.date_installation.jour);


	output5 = lookup_widget(windowModification, "spinbuttonMoisr");
	gtk_spin_button_set_value(GTK_SPIN_BUTTON(output5), c.date_installation.mois);


	output6 = lookup_widget(windowModification, "spinbuttonMAnneesr");
	gtk_spin_button_set_value(GTK_SPIN_BUTTON(output6), c.date_installation.annee);

}
}
////////////////////////////////////////////////////////
fclose(fp);
}



void
on_buttonConfirmerModif_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{
Capteur c;
FILE *fp1;
fp1 = fopen("capteurs.bin", "rb");


GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *Jour;
GtkWidget *Mois;
GtkWidget *Annee;
GtkWidget *windowErreur;
GtkWidget *windowSuccees;
GtkWidget *ModifierCapteur;


input1 = lookup_widget(button, "entryMOdifierId");
input2 = lookup_widget(button, "entryModifierValeur");
input3 = lookup_widget(button, "entryModifierEtage");
Jour = lookup_widget(button, "spinbuttonJoursr");
Mois = lookup_widget(button, "spinbuttonMoisr");
Annee = lookup_widget(button, "spinbuttonAnneesr");


strcpy(c.id,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(c.valeur,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(c.etage,gtk_entry_get_text(GTK_ENTRY(input3)));

if (choix[0]==1)
strcpy(c.type,"Temperature");
else if (choix[1]==1)
strcpy(c.type,"Humidite");
else if (choix[2]==1)
strcpy(c.type,"Debit");
else if (choix[3]==1)
strcpy(c.type,"Mouvement");
else if (choix[4]==1)
strcpy(c.type,"Fumee");



c.date_installation.jour= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Jour));
c.date_installation.mois= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Mois));
c.date_installation.annee= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Annee));

if(((choix1[0]==1) && (choix1[1]==1)) && ((choix1[0]==0) && (choix1[1]==0)) && (strcmp(c.id,"")==0) && (strcmp(c.valeur,"")==0) && (strcmp(c.etage,"")==0))
{
windowErreur = create_windowRemplir();
gtk_widget_show(windowErreur);
}
else
{
modifier_capteur(c,tmps);
windowSuccees = create_dialog2();
gtk_widget_show(windowSuccees);
ModifierCapteur = lookup_widget(button, "ModifierCapteur");
gtk_widget_destroy(ModifierCapteur);
}
}



void
on_buttonSupprimer_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *windowConfirmation;
char id[30];
char type[30];
Capteur c;
GtkWidget *input1;
GtkWidget *input2;
input1= lookup_widget(button, "entryIDr");
input2= lookup_widget(button, "comboboxentry1r");
strcpy(id, gtk_entry_get_text(GTK_ENTRY(input1)));
supprimer_capteur(c,id,type);
windowConfirmation = create_dialog3();
gtk_widget_show(windowConfirmation);
}




void
on_actualiser_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview;
GtkWidget *listecap;
listecap = create_windowListeCapteurs();
treeview = lookup_widget(listecap, "treeviewr");
afficher_capteur(treeview);
}


void
on_okbutton1_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
window = lookup_widget(button, "dialog1");
gtk_widget_destroy(window);
}


void
on_okbutton2_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
window = lookup_widget(button, "dialog2");
gtk_widget_destroy(window);

}


void
on_okbutton3_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
window = lookup_widget(button, "dialog3");
gtk_widget_destroy(window);

}


void
on_okbutton4_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
window = lookup_widget(button, "windowRemplir");
gtk_widget_destroy(window);

}



void
on_actualiser1_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview;
GtkWidget *listecap;
listecap = create_windowSupprimeCapteur();
treeview = lookup_widget(listecap, "treeviewr");
afficher_capteur(treeview);
}

void
on_buttonRechercher_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
GtkWidget *liste1;
GtkWidget *input;
GtkWidget *input1;
GtkWidget *buttonEnable;
GtkWidget *window;
int ok;
char type[20]; //variable de la fonction chercher_employe (1 si existe 0 si existe pas)
Capteur r;
char id[20];
input = lookup_widget(button, "entryIDr");
input1 = lookup_widget(button, "comboboxentry2r");
buttonEnable = lookup_widget(button, "buttonModif"); //Pointeur sur bouton Modifier
strcpy(id,gtk_entry_get_text(GTK_ENTRY(input)));
strcpy(type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input1)));
window = lookup_widget(button, "windowModifierCapteur");
treeview1 = lookup_widget(window, "treeview1r");
chercher_capteur_supp(r,id,type, &ok);
if (ok)
gtk_widget_set_sensitive(buttonEnable, TRUE); //Set Sensitivity to TRUE
else
gtk_widget_set_sensitive(buttonEnable, FALSE); //Set Sensitivity to FALSE


afficher_capteurModif(treeview1);

}
void
on_RechSupp_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview3;
GtkWidget *liste1;
GtkWidget *input;
GtkWidget *input2;
GtkWidget *buttonEnable;
GtkWidget *window;
Capteur r;
int ok; 
char id[30];
char type[30];
input2 = lookup_widget(button, "entryIDr");
input= lookup_widget(button, "comboboxentry1r");
buttonEnable = lookup_widget(button, "buttonSupprimer");

strcpy(id,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input)));

window = lookup_widget(button, "windowSupprimeCapteur");
treeview3 = lookup_widget(window, "treeview3r");
chercher_capteur_supp(r, id,type, &ok);
if (ok)
gtk_widget_set_sensitive(buttonEnable, TRUE); 
else
gtk_widget_set_sensitive(buttonEnable, FALSE); 


afficher_capteurModif(treeview3);

}


void
on_consulter1_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *liste;
GtkWidget *window1;
Capteur c;
window1=lookup_widget(button,"window1");
liste = lookup_widget(window1, "treeview5");
 afficher_capteur_alarmant (liste);
}





void
on_button22_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *windowalarmant;
GtkWidget *windowMenu;
windowMenu = lookup_widget(button,"windowGestionCapteurs");
gtk_widget_destroy(windowMenu);

windowalarmant = lookup_widget(button,"window1");
windowalarmant = create_window1();
gtk_widget_show(windowalarmant);
}


gboolean
on_treeview_start_interactive_search   (GtkTreeView     *treeview,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_buttonMarque_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}

void
on_checkbuttonTemperature_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix[0] = 1;
else
choix[0] = 0;

}


void
on_checkbuttonHumudite_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix[1] = 1;
else
choix[1] = 0;

}
void
on_checkbuttonFumee_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix[4] = 1;
else
choix[4] = 0;
}


void
on_checkbuttonDebit_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix[2] = 1;
else
choix[2] = 0;
}


void
on_checkbuttonMouvement_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix[3] = 1;
else
choix[3] = 0;
}


void
on_radiobutton1Tem_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix[0] = 1;
else
choix[0] = 0;
}


void
on_radiobutton2Hum_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix[1] = 1;
else
choix[1] = 0;
}


void
on_radiobutton3Debit_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix[2] = 1;
else
choix[2] = 0;
}


void
on_radiobutton4Mouv_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix[3] = 1;
else
choix[3] = 0;
}


void
on_radiobutton5Fumee_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix[4] = 1;
else
choix[4] = 0;
}


gboolean
on_treeview6_start_interactive_search  (GtkTreeView     *treeview,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_radiobutton1r_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix1[0] = 1;
else
choix1[0] = 0;
}


void
on_radiobutton2r_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix1[1] = 1;
else
choix1[1] = 0;
}


void
on_radiobutton3r_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix1[2] = 1;
else
choix1[2] = 0;
}


void
on_radiobutton4r_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix1[3] = 1;
else
choix1[3] = 0;
}


void
on_radiobutton5r_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
choix1[4] = 1;
else
choix1[4] = 0;
}

/*
gboolean
on_treeview6_start_interactive_search  (GtkTreeView     *treeview,
                                        gpointer         user_data)
{

  return FALSE;
}*/


void
on_Refresh_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview;
GtkWidget *listecap;
listecap = create_windowGestionCapteurs();
treeview = lookup_widget(listecap, "treeview6");
afficher_capteur(treeview);
}

void
on_buttonDeconnexion_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *window1;
windowacc=lookup_widget(button,"windowAjoutCapteur");
gtk_widget_destroy(windowacc);

window1=lookup_widget(button,"gb_welcome");
window1=create_gb_welcome();
gtk_widget_show(window1);
}

void
on_buttonDeconnexin_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *window1;
windowacc=lookup_widget(button,"windowGestionCapteurs");
gtk_widget_destroy(windowacc);

window1=lookup_widget(button,"gb_welcome");
window1=create_gb_welcome();
gtk_widget_show(window1);
}
void
on_buttonDeconnexion_modif_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *window1;
windowacc=lookup_widget(button,"windowModifierCapteur");
gtk_widget_destroy(windowacc);

window1=lookup_widget(button,"gb_welcome");
window1=create_gb_welcome();
gtk_widget_show(window1);

}


void
on_buttonDeconnexionsupp_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *window1;
windowacc=lookup_widget(button,"windowSupprimeCapteur");
gtk_widget_destroy(windowacc);

window1=lookup_widget(button,"gb_welcome");
window1=create_gb_welcome();
gtk_widget_show(window1);

}


void
on_buttonDeconnexionliste_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *window1;
windowacc=lookup_widget(button,"windowListeCapteurs");
gtk_widget_destroy(windowacc);

window1=lookup_widget(button,"gb_welcome");
window1=create_gb_welcome();
gtk_widget_show(window1);

}
void
on_buttonDeconnexionwin1_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *window1;
windowacc=lookup_widget(button,"window1");
gtk_widget_destroy(windowacc);

window1=lookup_widget(button,"gb_welcome");
window1=create_gb_welcome();
gtk_widget_show(window1);

}
/*_________________________arbi__________________________________________________*/

int xa=0,n;
int ta[4]={0,0,0,0};
Etudiant e;
/*______________page d'acceuil_____________________________________________*/
void
on_Supprimer1a_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)
{ GtkWidget *windowsup,*windowacc;
  
windowacc=lookup_widget(button,"Acceuila");
gtk_widget_destroy(windowacc);

windowsup=create_Suppresiona();
gtk_widget_show(windowsup);

}
////////////////////////////
void
on_Quittera_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *window1;
windowacc=lookup_widget(button,"Acceuila");
gtk_widget_destroy(windowacc);

window1=lookup_widget(button,"gb_welcome");
window1=create_gb_welcome();
gtk_widget_show(window1);}
//////////////////////////////
void
on_Cherchera_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowrech,*windowacc;

windowacc=lookup_widget(button,"Acceuila");
gtk_widget_destroy(windowacc);

windowrech=create_cherchera();
gtk_widget_show(windowrech);

}
/////////////////////////////
void
on_Affichera_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *windowacc, *windowaff,*treeview1;

windowacc=lookup_widget(button,"Acceuila");
gtk_widget_destroy(windowacc);

windowaff=lookup_widget(button,"Affichera");
windowaff=create_Affichera();
gtk_widget_show(windowaff);

treeview1 = lookup_widget (windowaff, "treeview1a");
afficher_etudiant(treeview1);
}

//////////////////////////////
void
on__modifiera_clicked                   (GtkWidget       *button,gpointer         user_data)
{GtkWidget *windowrech,*windowacc;

windowacc=lookup_widget(button,"Acceuila");
gtk_widget_destroy(windowacc);

windowrech=create_cherchera();
gtk_widget_show(windowrech);}                               

//////////////////////////////
void
on_Ajoutera_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowajout,*windowacc;

windowacc=lookup_widget(button,"Acceuila");
gtk_widget_destroy(windowacc);

windowajout=create_Ajoutera();
gtk_widget_show(windowajout);}
///////////////////////////////
void
on_Dashboarda_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowdash,*windowacc;
 GtkWidget* output ;

windowacc=lookup_widget(button,"Acceuila");
gtk_widget_destroy(windowacc);

windowdash=lookup_widget(button,"Dashboarda");
windowdash=create_Dashboarda();
gtk_widget_show(windowdash);


dasha("etudiant.txt");
 FILE *f2;
int x1=0,x2=0,x3=0,x4=0,x5=0;
char ch1[4];
f2=fopen("nb_etudiant.txt","r");
while(fscanf(f2,"%d %d %d %d %d \n",&x1,&x2,&x3,&x4,&x5)!=EOF)
{
output=lookup_widget(windowdash,"label140");
sprintf(ch1,"%d",x1);
gtk_label_set_text(GTK_LABEL(output),ch1);

output=lookup_widget(windowdash,"label141");
sprintf(ch1,"%d",x2);
gtk_label_set_text(GTK_LABEL(output),ch1);

output=lookup_widget(windowdash,"label142");
sprintf(ch1,"%d",x3);
gtk_label_set_text(GTK_LABEL(output),ch1);

output=lookup_widget(windowdash,"label143");
sprintf(ch1,"%d",x4);
gtk_label_set_text(GTK_LABEL(output),ch1);

output=lookup_widget(windowdash,"label144");
sprintf(ch1,"%d",x5);
gtk_label_set_text(GTK_LABEL(output),ch1);}
fclose(f2);

}
////////////////////////////////

/*________________________les boutons home___________________________________*/

void
on_Homeajouta_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
 
{GtkWidget *windowacc, *windowajout;

windowajout=lookup_widget(button,"Ajoutera");
gtk_widget_destroy(windowajout);

windowacc=create_Acceuila();
gtk_widget_show(windowacc);}
///////////////////////////////
void
on_Homesuppa_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *windowsup;

windowsup=lookup_widget(button,"Suppresiona");
gtk_widget_destroy(windowsup);

windowacc=create_Acceuila();
gtk_widget_show(windowacc);}
//////////////////////////////
void
on_Homecherchera_clicked                (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *windowrech;

windowrech=lookup_widget(button,"cherchera");
gtk_widget_destroy(windowrech);

windowacc=create_Acceuila();
gtk_widget_show(windowacc);}

/////////////////////////////
void
on_homeaffichera_clicked                (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *windowaff;

windowaff=lookup_widget(button,"Affichera");
gtk_widget_destroy(windowaff);

windowacc=create_Acceuila();
gtk_widget_show(windowacc);}
////////////////////////////
void
on_Homedasha_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *windowdash;

windowdash=lookup_widget(button,"Dashboarda");
gtk_widget_destroy(windowdash);

windowacc=create_Acceuila();
gtk_widget_show(windowacc);}
///////////////////////////
void
on_Homemodifia_clicked                  (GtkWidget      *button,
                                        gpointer         user_data)
{GtkWidget *windowacc, *windowmodif;

windowmodif=lookup_widget(button,"Modificationa");
gtk_widget_destroy(windowmodif);

windowacc=create_Acceuila();
gtk_widget_show(windowacc);}
/////////////////////////////////
/*_______________________les boutons radio________________________*/
void
on_Hommea_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
 if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
 {xa=1;}
}
void
on_Femmea_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
 if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
 {xa=2;}
}
/*____________________case a cocher____________________________________*/
void
on_Natation_toggled                    (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{ if (gtk_toggle_button_get_active (togglebutton))
 ta[0]=1;
}
void
on_lec_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{if (gtk_toggle_button_get_active(togglebutton))
 ta[1]=1;
}
void
on_prog_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{if (gtk_toggle_button_get_active(togglebutton))
 ta[2]=1;
}
void
on_autre_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{if (gtk_toggle_button_get_active(togglebutton))
 ta[3]=1;
}
/*_________________fenetre ajout___________________________________________________________*/
void
on_Ajouter2a_clicked                    (GtkWidget       *button, gpointer         user_data)
{
 GtkWidget *j,*m,*a;
char ch1[30];
int x1,x2,x3,r=0;
 GtkWidget* input,*output;
Etudiant e;
 input = lookup_widget(button,"entry_noma");
 strcpy(e.Nom,gtk_entry_get_text(GTK_ENTRY(input)));
 input = lookup_widget(button,"entry38a");
 strcpy(e.adresse,gtk_entry_get_text(GTK_ENTRY(input)));
 input = lookup_widget(button,"entry_prenoma");
 strcpy(e.Prenom,gtk_entry_get_text(GTK_ENTRY(input)));
 input = lookup_widget(button,"entry_cina");
 strcpy(e.CIN,gtk_entry_get_text(GTK_ENTRY(input)));
 input = lookup_widget(button,"entry_ida");
 strcpy(e.ID,gtk_entry_get_text(GTK_ENTRY(input)));
 input = lookup_widget(button,"entry27a");
 strcpy(e.mail,gtk_entry_get_text(GTK_ENTRY(input)));
 input = lookup_widget(button,"entry28a");
 strcpy(e.telephone,gtk_entry_get_text(GTK_ENTRY(input)));
input = lookup_widget(button,"entry37a");
 strcpy(e.etat,gtk_entry_get_text(GTK_ENTRY(input)));
 ////////les boutons radios
 if(xa==1) strcpy(e.sexe,"Homme");
else  strcpy(e.sexe,"Femme");
//////spinboutons
j=lookup_widget(button,"spinbutton1a");
m=lookup_widget(button,"spinbutton2a"); 
a=lookup_widget(button,"spinbutton3a");
//////recuperer les valeurs des spin button 
x1=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(j));
x2=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(m));
x3=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(a));
sprintf(e.naissance,"%d/%d/%d",x1,x2,x3);
////////combobox
input=lookup_widget(button, "combobox2a") ; 
strcpy(e.niveau,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input)));
///////case a coucher
strcpy(e.hobbies,"");
if(ta[0]==1)
strcat(e.hobbies,"Nattation");
if(ta[1]==1)
strcat(e.hobbies,"Lecture");
if(ta[2]==1)
strcat(e.hobbies,"programmation");
if(ta[3]==1)
strcat(e.hobbies,"autre");
/////////////////////////
r=ajouter_etudiant("etudiant.txt",e);
output=lookup_widget(button,"label95a");
if(r==1)
{ strcpy (ch1,"ajout avec succée");
gtk_label_set_text(GTK_LABEL(output),ch1);
}
else{strcpy (ch1,"ajout failed");
sprintf(ch1,"%d",r);
gtk_label_set_text(GTK_LABEL(output),ch1);
}
}
/*___________________les boutons annuler__________________________________________________*/
void
on_Annuler1a_clicked                    (GtkWidget      *button,
                                        gpointer         user_data)
{GtkWidget *windowajout;

windowajout=lookup_widget(button,"Ajoutera");
gtk_widget_destroy(windowajout);
windowajout=create_Ajoutera();
gtk_widget_show(windowajout);
}

void
on_Annuler2a_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget *windowsup;

windowsup=lookup_widget(button,"Suppressiona");
gtk_widget_destroy(windowsup);
windowsup=create_Suppresiona();
gtk_widget_show(windowsup);

}
/*_____________________________________________________________________________________*/
void
on_chercher2a_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{GtkWidget* input;
  GtkWidget* output ;
char ID[10],ch[10];
Etudiant e;

input = lookup_widget(button, "entry11a") ;
strcpy(ID,gtk_entry_get_text(GTK_ENTRY(input))); 

e=chercher_etudiant("etudiant.txt",ID);

 
if(strcmp(e.ID,ID)==0)
{//mawjoud
output=lookup_widget(button,"entry12a");
gtk_entry_set_text(GTK_ENTRY(output),e.Nom);

output=lookup_widget(button,"entry13a");
gtk_entry_set_text(GTK_ENTRY(output),e.Prenom);

output=lookup_widget(button,"entry15a");
gtk_entry_set_text(GTK_ENTRY(output),e.CIN);

output=lookup_widget(button,"entry16a");
gtk_entry_set_text(GTK_ENTRY(output),e.niveau);

output=lookup_widget(button,"entry17a");
gtk_entry_set_text(GTK_ENTRY(output),e.mail);

output=lookup_widget(button,"entry18a");
gtk_entry_set_text(GTK_ENTRY(output),e.etat);

output=lookup_widget(button,"entry30a");
gtk_entry_set_text(GTK_ENTRY(output),e.adresse);

output=lookup_widget(button,"entry29a");
gtk_entry_set_text(GTK_ENTRY(output),e.telephone);

output=lookup_widget(button,"entry36a");
gtk_entry_set_text(GTK_ENTRY(output),e.naissance);
}
else{
///mch mawjoud
output=lookup_widget(button,"label135");
gtk_label_set_text(GTK_LABEL(output),"etudiant n'existe pas");
}
}
/*_____________suppression______________________________________________*/
void
on_button1a_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget* input;
  GtkWidget* output ;
char CIN[9],msg[50];
int r;
 output = lookup_widget(objet, "label125") ;
 input = lookup_widget(objet, "entry_cinsupa") ;
 
 strcpy(CIN,gtk_entry_get_text(GTK_ENTRY(input))); 
 r=supprimer_etudiant(CIN,"etudiant.txt");
 if(r==-1)
    strcpy(msg,"Suppression non effectuée\n");
  else
    strcpy(msg,"suppression effectuée avec succès \n");
 gtk_label_set_text(GTK_LABEL(output),msg);
}


void
on_oksupa_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{

}

/*____________modif____________________________*/

void
on_button2a_clicked                     (GtkWidget      *button,
                                        gpointer         user_data)
{ GtkWidget* input;
  GtkWidget* output ;
char ID[10];
Etudiant e;

input = lookup_widget(button, "entry11a") ;
strcpy(ID,gtk_entry_get_text(GTK_ENTRY(input))); 
e=chercher_etudiant("etudiant.txt",ID);

 
if(strcmp(e.ID,ID)==0)
{//mawjoud
input=lookup_widget(button, "entry11a") ;
strcpy(e.ID,gtk_entry_get_text(GTK_ENTRY(input)));
input = lookup_widget(button, "entry12a") ;
strcpy(e.Nom,gtk_entry_get_text(GTK_ENTRY(input)));
input = lookup_widget(button, "entry13a") ;
strcpy(e.Prenom,gtk_entry_get_text(GTK_ENTRY(input)));
input = lookup_widget(button, "entry15a") ;
strcpy(e.CIN,gtk_entry_get_text(GTK_ENTRY(input)));
input = lookup_widget(button, "entry16a") ;
strcpy(e.niveau,gtk_entry_get_text(GTK_ENTRY(input)));
input = lookup_widget(button, "entry17a") ;
strcpy(e.mail,gtk_entry_get_text(GTK_ENTRY(input)));
input = lookup_widget(button, "entry18a") ;
strcpy(e.etat,gtk_entry_get_text(GTK_ENTRY(input)));
input = lookup_widget(button, "entry30a") ;
strcpy(e.adresse,gtk_entry_get_text(GTK_ENTRY(input)));

input=lookup_widget(button,"entry29a");
strcpy(e.telephone,gtk_entry_get_text(GTK_ENTRY(input)));

input = lookup_widget(button, "entry36a") ;
strcpy(e.naissance,gtk_entry_get_text(GTK_ENTRY(input)));
modifier_etudiant("etudiant.txt",e);
}
}
/*____________________________________________*/






