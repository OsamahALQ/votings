#include <stdio.h>
#include <stdlib.h>

int main() {

  int votes = 200;
  int vote[200];
  int i;
  int totalvotes = 0;
  int validvotes = 0;
  int invalidvotes =0;
  int lillian=0;
  int padma=0;
  int musa=0;
  int kondo=0;
  int adelina=0;
  int fun=0;
  int helyan=0;
  
  
  for(int i = 0; i<200; i++){
    vote[i] =(int) (rand() % 9);
}


 //an int counter for each candidate and each stat
  for (int i = 0; i < 200; i++){
    if (vote[i] == 1){

      lillian++;
      totalvotes++;
      validvotes++;
      
    }else if(vote[i] == 2){
     
      padma++;
      totalvotes++;
     
     validvotes++;
    
    }else if(vote[i] == 3){
    
      musa++;
      totalvotes++;
      validvotes++;

    }else if(vote[i] == 4){
    
      kondo++;
      totalvotes++;
      validvotes++;
    
    }else if(vote[i] == 5){
    
      adelina++;
      totalvotes++;
      validvotes++;
    
    }else if(vote[i] == 6){
    
      fun++;
      totalvotes++;
      validvotes++;
    
    }else if (vote[i] == 7){
    
      helyan++;
      totalvotes++;
      validvotes++;
    
    }else{
    
      totalvotes++;
      invalidvotes++;
    
    }    
      
  }
    printf("total votes: %d \n", totalvotes);
    printf("valid votes: %d \n", validvotes);
    printf("Invalid votes: %d \n\n", invalidvotes);
    printf("candidate            votes \n\n");
    printf("Lillian Burns          %d \n", lillian);
    printf("Padma Sami             %d \n", padma);
    printf("Musa Balewa            %d \n", musa);
    printf("Kondo Masahiro         %d \n", kondo);
    printf("Adelina Peguero        %d \n", adelina);
    printf("Fan Yu                 %d \n", fun);
    printf("Helyan Shone           %d \n", helyan);
    printf("The winner is:\n");
}

