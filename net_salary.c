#include <stdio.h>
float calculateTax(float gross_salary);

int main(){
    float amount,tax,net_salary;
    printf("Enter the amount taxed:");
    scanf("%f",&amount);
    
    tax= calculateTax(amount);
    net_salary= amount-tax;
    
    printf("\n");
    printf("SLANDER ENTERPRISE PROGRAM \n");
    printf("Initial amount:Ksh %.2f\n",amount);
    printf("Tax:Ksh %.2f\n",tax);
    printf("Net salary:Ksh %.2f\n",net_salary);
    
    return 0;
    }
    
    float calculateTax(float gross_salary){
          float tax;
      if(gross_salary <=30000){  
        tax=0.05*gross_salary;
      }
      else if(gross_salary>30000 && gross_salary <=59999){
         tax=0.10*(gross_salary-30000);
      }
      else {
         tax=0.10*(59999-30000)+0.25*(gross_salary-59999);
      }
      
    return tax;
    }       
     