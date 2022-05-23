// Name : Ashutosh Anil Pawar
// Class : BCS1
// Roll Number : 42

// String manipulation function e.g. 
// string copy, 
// concatenation, 
// compare, 
// string length, 
// reverse

#include<stdio.h> 
#include<string.h> 
int main(){

int num; 
char str1[10]= "Swapnil", str2[10]= "Shelke";
 
//  string contenation / joining two strings
strcat(str1, str2); 
puts(str1);

// string copy function 
strcpy(str1, str2); 
puts(str1);

// string length 
strlen(str2);
printf("\nString length of str1 is : %d", str2);

// string copy 
if(strcmp(str1,str2)==0){
   printf("\n String1 and string two are equal");
}
else{
    printf("\n String1 an dstring2 are different");
}


return 0; 
}

