#include<stdio.h>
int main() {
 char str[100];
 int j=0;
 printf("Enter any string:");
 gets(str);
 int i=0,count=0,len;
 len=strlen(str);
 if (len==1 && str[0]=='a')
 printf("Acceptable\n");
 else{
 for(i=1;i<len;i++)
 if (str[i]=='b')
 count++;
 if (count==len
-1)
 printf("Acceptabl\n");
 else
 printf("Unacceptable\n");
    }
        return 0;
}

