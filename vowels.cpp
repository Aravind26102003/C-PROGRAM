#include<stdio.h>
#include<string.h>
main()
{
char str[100];
int a,vowel,consonant,i;
printf("Enter a string:");
fgets(str,100,stdin);
vowel=0;
consonant=0;
a=strlen(str);
for(i=0; i<a; i++)
    {
    if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
                vowel++;
    }

    printf("Total number of vowel = %d\n", vowel);
}

