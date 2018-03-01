#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int tab[]={12,5,2,14};
    int taille=4;
    int curseur=0;
    int min;
    int indice_min=0;
    
    
                
       while(curseur<taille){

           for(int i=curseur;i<taille;i++){
            
               min=tab[curseur];
           
               if(tab[i]<min){
                   //printf("%d",i);
                   min=tab[i];
                   indice_min=i;
                   int temp=tab[curseur];
                   tab[curseur]=tab[indice_min];
                   tab[indice_min]=temp;
               }
            }                 
           //printf("%d\n",min);

           
           curseur++;      
       }

       
    
    for (int i=0;i<taille;i++){
        
        printf("%d\n",tab[i]);
    }

}

