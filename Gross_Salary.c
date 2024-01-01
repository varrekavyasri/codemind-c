#include<stdio.h>
int main(){
    int Basicsalary;
    float DA,HRA,Grosssalary;
    scanf("%d",&Basicsalary);
    if(Basicsalary<=10000){
        DA=0.8*Basicsalary;
        HRA=0.2*Basicsalary;
    }
    else if(Basicsalary<=20000){
        DA=0.9*Basicsalary;
        HRA=0.25*Basicsalary;
    }
    else if(Basicsalary>20000){
        DA=0.95*Basicsalary;
        HRA=0.3*Basicsalary;
    }
    Grosssalary=Basicsalary+DA+HRA;
    printf("%.2f",Grosssalary);
}