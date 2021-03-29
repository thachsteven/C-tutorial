#include<stdio.h>
#include<string.h>
int main(){
	
   int i,j,n;
   char name[25][25];
   char temp[25];
   
   printf("Nhap so luong ten muon sap xep: ");
   scanf("%d",&n);

   printf("Nhap vao %d ten: \n", n);
   
   for(i = 0; i <= n; i++)
      gets(name[i]);;
      
   for(i= 0; i <= n; i++)
      for(j = i+1 ;j <= n ; j++){
      	
         if(strcmp(name[i],name[j])>0){
            strcpy(temp,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
         }
      }
	printf("\n----------------------------------------\n");
   printf("\nTen sau khi duoc sap xep la:");
   for(i=0;i<=n;i++)
      puts(name[i]);
   
   return 0;
}
