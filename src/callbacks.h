#include <gtk/gtk.h>

/*________________________page d'acceuil_____________________________________________*/
void
on_home_admin_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);
void
on_button_fiche_clicked                (GtkWidget *objet, gpointer user_data);
void
on_button_recherche_clicked            (GtkWidget *objet, gpointer user_data);
void
on_button_nouveau_clicked              (GtkWidget *objet, gpointer user_data);
void
on_button_supp_clicked                 (GtkWidget *objet, gpointer user_data);
void
on_button_es_clicked                   (GtkWidget *objet, gpointer user_data);
void
on_buttondashboard_clicked             (GtkWidget *objet, gpointer user_data);
void
on_button_quitter_clicked              (GtkWidget *objet, gpointer user_data);
/*__________________________bouton quitter___________________________________________________________*/
void
on_button_fermer2_clicked              (GtkWidget *objet, gpointer user_data);
void
on_button_fermer_clicked               (GtkWidget *objet, gpointer user_data);
void
on_quitter3_clicked                    (GtkWidget *objet, gpointer user_data);
/*__________________________les boutons annuler______________________________________________________*/
void
on_button_annuler1_clicked             (GtkWidget *objet, gpointer user_data);
void
on_annuler2_clicked                    (GtkWidget *objet, gpointer user_data);
void
on_annuler3_clicked                    (GtkWidget *objet, gpointer user_data);
void
on_annuler4_clicked                    (GtkWidget *objet, gpointer user_data);
/*____________________________________les boutons home_____________________________________________*/
void
on_home1_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_home2_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_home3_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_home4_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_home5_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_home6_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_button_ok_clicked                   (GtkWidget *objet, gpointer user_data);
/*______________________________pade d'ajout________________________________________________________________*/
void
on_button_valider01_clicked            (GtkWidget       *button,gpointer         user_data);
/*________________________page de suppression__________________________________________________________________*/
void
on_suppression_clicked                 (GtkWidget *objet, gpointer user_data);
/*_______________________________les boutons radio d'ajout______________________________________________________*/
void
on_radiobutton1_toggled                (GtkToggleButton *togglebutton,  gpointer         user_data);
void
on_radiobutton2_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_radiobutton3_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_radiobutton4_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_radiobutton5_toggled                (GtkToggleButton *togglebutton,  gpointer         user_data);
void
on_radiobutton7_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_radiobutton6_toggled                (GtkToggleButton *togglebutton,gpointer         user_data);
/*____________________________________case a cocher du page d'ajout__________________________________*/
void
on_checkbutton1_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_checkbutton2_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_checkbutton3_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_checkbutton4_toggled                (GtkToggleButton *togglebutton,gpointer         user_data);
void
on_checkbutton5_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
/*_____________________fenetre chercher________________________________________________________________*/
void
on_chercher2_clicked                   (GtkWidget       *button,gpointer         user_data);

void
on_ok_rech_clicked                     (GtkWidget      *button,gpointer         user_data);
/*__________________________fenetre modifier________________________________________________________________*/
void
on_chercher3_clicked                   (GtkWidget        *button,
                                        gpointer         user_data);

void
on_enregistremodif_clicked             (GtkWidget       *button,
                                        gpointer         user_data);
/*_________________________fenetre_affiche______________________________________________________________________*/
void
on_supp_aff_clicked                    (GtkWidget       *button, gpointer         user_data);

void
on_modif_aff_clicked                   (GtkWidget       *button,gpointer         user_data);
/*_______________________________________________________________________________________________________________*/

/*___________fenetre athentification____________________*/
void
on_back_authen_resto_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_conx_athent_resto_activate          (GtkWidget       *button,
                                        gpointer         user_data);

void
on_anuuler_athent_resto_clicked        (GtkWidget       *button,
                                        gpointer         user_data);
/*______________________1er fenetre_________________________________________*/
void
on_annuler_bienvenue_clicked           (GtkWidget        *button,
                                        gpointer         user_data);

void
on_connection_bienvenu_clicked         (GtkWidget        *button,
                                        gpointer         user_data);

void
on_gb_quitter1_clicked                 (GtkWidget        *button,
                                        gpointer         user_data);

/*____________________admin motaz______________________________________*/

void
on_gb_auth_connecter_btn_clicked       (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_gb_treeview_row_activated           (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_gb_aff_retour_btn_clicked           (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_gb_aff_modif_btn_clicked             (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_gb_aff_supp_btn_clicked             (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_gb_aff_rech_btn_clicked             (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_gb_aff_add_btn_clicked              (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_gb_add_retour_btn_clicked           (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_gb_add_add_btn_clicked              (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_gb_modif_annuler_btn_clicked        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_gb_modif_modif_btn_clicked          (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_gb_modif_chercher_btn_clicked       (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_gb_aff_users_btn_clicked            (GtkWidget      *objet,
                                        gpointer         user_data);


void
on_gb_confirmer_check_toggled          (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_gb_add_homme_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_gb_add_femme_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_gb_accualiser_clicked               (GtkWidget      *objet,
                                        gpointer         user_data);

void
on_gb_modif_homme_activate             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_gb_modif_femme_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_gb_treefumee_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_gb_treemvt_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_gb_refresh_mvt_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);
void
on_gb_refresh_fumee_clicked            (GtkWidget       *objet,
                                        gpointer         user_data);
/*____________yahya_____________________________________________________________*/
void
on_radiobuttonhomme_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttonafficher_reclamation_clicked  (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonajouter_reclamation_clicked   (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonmodifier_reclamation_clicked  (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_radiobuttonfemme_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonprepa_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttoncycleding_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonbussiness_reclamation_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttonrecherche_reclamation_clicked (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttongotoajouter_clicked           (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttongotomodifier_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonsupprimer_reclamation_clicked (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttongotoserviceleplusreclame_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonserviceleplusreclame_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttongotoafficher2_reclamation_clicked
                                        (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_home_yahya_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);

/*_______________________________yesmin____________________________________*/
void
on_buttongea_clicked                   (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttongem_clicked                   (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttonges_clicked                   (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttongech_clicked                  (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttongeaff_clicked                 (GtkWidget *objet,
                                        gpointer         user_data);

void
on_buttongedec_clicked                 (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttongeaok_clicked                 (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttongeac_clicked                  (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttongemconsulter_clicked          (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttongemcancel_clicked             (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttongemok_clicked                 (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttongesr_clicked                  (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttongechch_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttongechr_clicked                 (GtkWidget      *objet_graphique,
                                        gpointer         user_data);

void
on_buttongess_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeviewgeaff_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_buttongechct_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttongechce_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttongebest_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttongebestr_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data);


void
on_buttonbestmenu_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data);
/*___________raed______________________________________________________________*/
void
on_buttonAcceuil_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonDeconnexin_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonAjoutCapteur_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonListeCapteurs_clicked         (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonSupprimeCapteur_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonModifCapteur_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonAjouter_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonDeconnexion_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_checkbuttonTemperature_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonHumudite_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttonRechercher_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonModif_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonSupprimer_activate            (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonConfirmerModif_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonSupprimer_activate            (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonSupprimer_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_button19_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_scrolledwindow1_move_focus_out      (GtkScrolledWindow *scrolledwindow,
                                        GtkDirectionType  direction,
                                        gpointer         user_data);

void
on_actualiser_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_okbutton1_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_okbutton2_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_okbutton3_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_okbutton4_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonRechercherS_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_RechSupp_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_consulter1_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_button22_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

gboolean
on_treeview_start_interactive_search   (GtkTreeView     *treeview,
                                        gpointer         user_data);

void
on_buttonMarque_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_checkbuttonFumee_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonDebit_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbuttonMouvement_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton1Tem_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton2Hum_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton3Debit_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
void
on_radiobutton4Mouv_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
void
on_radiobutton5Fumee_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
gboolean
on_treeview6_start_interactive_search  (GtkTreeView     *treeview,
                                        gpointer         user_data);
void
on_radiobutton1r_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
void
on_radiobutton2r_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
void
on_radiobutton3r_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
void
on_radiobutton4r_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
void
on_radiobutton5r_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
gboolean
on_treeview6_start_interactive_search  (GtkTreeView     *treeview,
                                        gpointer         user_data);
void
on_Refresh_clicked                     (GtkButton       *button,
                                        gpointer         user_data);
void
on_buttonDeconnexion_modif_clicked     (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonDeconnexionsupp_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonDeconnexionliste_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_buttonDeconnexionwin1_clicked       (GtkButton       *button,
                                        gpointer         user_data);
/*___________________________arbi__________________________________________________*/
#include <gtk/gtk.h>


void
on_Supprimer1a_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Quittera_clicked                     (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Cherchera_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Affichera_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on__modifiera_clicked                   (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Ajoutera_clicked                     (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Dashboarda_clicked                   (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Homeajouta_clicked                   (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Homesuppa_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Homecherchera_clicked                (GtkWidget       *button,
                                        gpointer         user_data);
void
on_homeaffichera_clicked                (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Homedasha_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Homemodifia_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_Annuler2a_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Annuler3a_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Annuler4a_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Annuler5a_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Annuler7a_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Annuler6a_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Ajouter2a_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);
void
on_Hommea_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
void
on_Femmea_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
void
on_Hommea_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Femmea_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Annuler1a_clicked                    (GtkWidget       *button,
                                        gpointer         user_data);


void
on_chercher2a_clicked                   (GtkWidget       *button,
                                        gpointer         user_data);


void
on_Natation_toggled                    (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_lec_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_prog_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_autre_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Natation_toggled                    (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_lec_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_prog_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_autre_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_supprimera_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_button1a_clicked                     (GtkWidget       *button,
                                        gpointer         user_data);

void
on_oksupa_clicked                       (GtkButton       *button,
                                        gpointer         user_data);

void
on_button2a_clicked                     (GtkWidget      *button,
                                        gpointer         user_data);









