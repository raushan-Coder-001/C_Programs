//User defined type
//Can have multiple different types inside .
 #include<string.h>
 #include<stdio.h>
 
 struct Employee
 {
     int id;
     char name[100];
 };
    
 
 int main(){
     struct Employee e;
     e.id=101;
     char name[100];
     strcpy(name,"Raushan");
     printf("%d %s",e.id,name);

     return 0;
 }
 