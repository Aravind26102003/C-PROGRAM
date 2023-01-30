#include<stdio.h>
int main(){
    int i,count=0;
    int arr[9]={2,4,6,8,10,23,45,67,56};
        
    for(i=0;i<9;i++)
	{
	    if(arr[9]==2){
        continue;
       }       
        else if(arr[9]%2==0){
        count++;
        }
       
        if(count>2){    
        printf("total composite number are: %d\n",count);
        }
   }
    return 0;
}
