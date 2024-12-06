#include<stdio.h>
int price(int p,int n,int q){
    int amt = p*q;
    return amt;
}

int ask(int n,int p,int q){
char *A[] = {"Idli", "Dosa", "Pongal", "Uttapam", "Lemon Rice"};
char *B[] = {"Chicken Biryani", "Chettinad Chicken", "Chicken Fry", "Chicken 65", "Mutton Chukka"};

switch(n){
case 1:
    p=20;
    printf("\nPrice of %s : %d",A[n-1],p);
    printf("\nPrice of %d %s : %d",q,A[n-1],price(p,n,q));
    return price(p,n,q);
    break;
case 2:
    p=40;
    printf("\nPrice of %s : %d",A[n-1],p);
    printf("\nPrice of %d %s : %d",q,A[n-1],price(p,n,q));
    return price(p,n,q);
    break;
case 3:
    p=50;
    printf("\nPrice of %s : %d",A[n-1],p);
    printf("\nPrice of %d %s : %d",q,A[n-1],price(p,n,q));
    return price(p,n,q);
    break;
case 4:
    p=50;
    printf("\nPrice of %s : %d",A[n-1],p);
    printf("\nPrice of %d %s : %d",q,A[n-1],price(p,n,q));
    return price(p,n,q);
    break;
case 5:
    p=30;
    printf("\nPrice of %s : %d",A[n-1],p);
    printf("\nPrice of %d %s : %d",q,A[n-1],price(p,n,q));
    return price(p,n,q);
    break;
case 6:
    p=80;
    printf("\nPrice of %s : %d",B[n-6],p);
    printf("\nPrice of %d %s : %d",q,B[n-6],price(p,n,q));
    return price(p,n,q);
    break;
case 7:
    p=100;
    printf("\nPrice of %s : %d",B[n-6],p);
    printf("\nPrice of %d %s : %d",q,B[n-6],price(p,n,q));
    return price(p,n,q);
    break;
case 8:
    p=80;
    printf("\nPrice of %s : %d",B[n-6],p);
    printf("\nPrice of %d %s : %d",q,B[n-6],price(p,n,q));
    return price(p,n,q);
    break;
case 9:
    p=90;
    printf("\nPrice of %s : %d",B[n-6],p);
    printf("\nPrice of %d %s : %d",q,B[n-6],price(p,n,q));
    return price(p,n,q);
    break;
case 10:
    p=120;
    printf("\nPrice of %s : %d",B[n-6],p);
    printf("\nPrice of %d %s : %d",q,B[n-6],price(p,n,q));
    return price(p,n,q);
    break;
default:
    printf("\n\t\tTry Again\n");
    printf("\tPlease enter the right dish number\n");
    break;
    }
}



int main(){
printf("\t\t\t\tWelcome to Hotel\n");
printf("\t\t***********************************************\n");
printf("\t\t\t\t      Menu\n");

char *A[] = {"Idli", "Dosa", "Pongal", "Uttapam", "Lemon Rice"};
char *B[] = {"Chicken Biryani", "Chettinad Chicken", "Chicken Fry", "Chicken 65", "Mutton Chukka"};
int i,c;
int Bi[10];

printf("\tVeg");
printf("\n***********************************************\n");
for(i=1;i<6;i++){
    printf("%d. %s\n",i,A[i-1]);
}
printf("\n***********************************************\n");

printf("\tNon Veg");
printf("\n***********************************************\n");
for(i=0;i<5;i++){
    printf("%d. %s\n",i+6,B[i]);
}
printf("\n***********************************************\n");

int n,q,p,amt=0;
do{
printf("\n***********************************************\n");
printf("\nWhat would you like to try : ");
scanf("%d",&n);
printf("Quantity : ");
scanf("%d",&q);
amt+=ask(n,p,q);
printf("\nDo want anything else (1 for Yes)(2 for No) : ");
scanf("%d",&c);
if(c==1){
    continue;
}
else{
    break;
}
}
while(c==1);

printf("\nTotal Bill : %d",amt);
printf("\n\n\t\t\tThank You");

}
