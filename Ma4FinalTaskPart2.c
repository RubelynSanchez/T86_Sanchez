#include <stdio.h> 
int main(){

    int input;
    printf("Input any positive integers:");
    scanf("%d", &input);
    
    while(input!=1){
        if(input %2!=0){
        input=(input * 3)+1;
       
     }else{
         input/=2;
     }
      printf("Current given value is %d\n", input);
     }
     return 0;
}
    
    
    
    


        
            
       



      
    
     
    





















    


































