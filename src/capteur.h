#ifndef FONCTION_H_
#define FONCTIONS_H_
#include <stdbool.h>
#include <gtk/gtk.h>


typedef struct Daten
{

	int jour;
	int mois;
	int annee;
	
}Daten; 

typedef struct {
char id[30];
char nom[30];
char fournisseur[30] ;
char etat[30];
char type[30];
Daten date1 ;
Daten date2 ;

}capteur;


void AjouterCapteur(capteur c ) ;
void AfficherListCapteur(GtkWidget *liste) ;
void ModifierMaCapteur(capteur c , char id[30]);
void supprimerCapteur(char id[30]) ;
void ChercherCapteur (GtkWidget *liste, char id1[30]) ;

//fct de la deuxieme tache:la marque ayant le plus de capteurs defectueux
int deffectueux (int iden [], char *fichier, float minv , float maxv );








#endif
