#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int tab[]={12,5,2,14};  // Déclaration du tableau à trier
    int taille=4;
    int curseur=0;          // curseur sur le tableau se plaçant au début de la zone à trier 
                            
    int min;
    int indice_min=0;
    
    
                
       while(curseur<taille){ // Tant que l'on a pas parcouru tout le tableau, le curseur avance et définit une nouvelle zone à trier

           for(int i=curseur;i<taille;i++){ // parcours du tableau pour trouver la plus petite valeur
            
               min=tab[curseur];
           
               if(tab[i]<min){
                   //printf("%d",i);
                   min=tab[i];
                   indice_min=i;
                   int temp=tab[curseur]; // échange de la case contenant la plus petite valeur avec avec la 1 ère case de la zone à trier
                   tab[curseur]=tab[indice_min];
                   tab[indice_min]=temp;
               }
            }                 
           //printf("%d\n",min);

           
           curseur++; // avancée du curseur      
       }

       
    
    for (int i=0;i<taille;i++){
        
        printf("%d\n",tab[i]); // affichage du tableau à trier
    }

}

