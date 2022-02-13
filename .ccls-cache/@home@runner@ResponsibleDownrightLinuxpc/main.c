#include<stdio.h>
int main(void){
  char oID[50],itmNo[50];
  int qty,i;
  FILE *cfPtr;
  cfPtr=fopen("orders.dat","w");
  if(cfPtr==NULL)
  {
    printf("File cannot be opened");
    return -1;
  }
  fprintf(cfPtr,"Order ID\t Item No\t Quantity\n ");
  for(i=1;i<=5;i++){
    printf("Enter Order ID : \n");
    scanf("%s",oID);
    printf("Enter Item No : \n");
    scanf("%s",itmNo);
    printf("Enter Quantity : ");
    scanf("%d",&qty);
    fprintf(cfPtr,"%s\t%s\t%d\n",oID,itmNo,qty);
  }
  fclose(cfPtr);
  return 0;
}