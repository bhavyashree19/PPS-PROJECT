#include <stdio.h>
int main()
{
 int a,qty,rate,total;
 printf("\nMENU CARD \nSelect your drink \n1.COFFEE \n2.TEA \n3.COLD COFFEE \n4.MILK SHAKE \n5.BLUE WAGON\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected Coffee.\n Enter the no.of drinks :");
    scanf("%d",&qty);
    rate=70;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 2:
    printf("\nYou have selected Tea.\n Enter the no.of drinks:");
    scanf("%d",&qty);
    rate=35;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 3:
    printf("\nYou have selected Cold coffee.\n Enter the  no.of drinks :");
    scanf("%d",&qty);
    rate=100;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 4:
    printf("\nYou have selected Milk shake.\n Enter the  no.of drinks :");
    scanf("%d",&qty);
    rate=80;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 5:
    printf("\nYou have selected BLUE WAGON.\n Enter the  no.of drinks :");
    scanf("%d",&qty);
    rate=85;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    break;
  default:
    printf("\nSorry Unavailable...%d",a);
    break;
 }
return 0;
}