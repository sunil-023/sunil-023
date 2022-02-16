
  #include <stdio.h>
   int main ()
   {int m, a,b,c,d;
   printf ("enter m ");
   scanf ("%d",&m);
   if(m>=80 && m<=100)
   {
   	printf("grade a");
   }
   else if(m>=70 && m<80)
   {
   	printf("grade b"); 
   }
   else if(m>=60 && m<70)
   {
   printf("grade c");
   }
   else if(m>=50 && m<60)
   {
   printf("grade d");
   }
   else 
   {
   printf("fail");
   }
   return(0);
   }
