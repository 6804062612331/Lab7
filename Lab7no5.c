#include<stdio.h>

long convert(long h, long m, long s); 

int main(){
    long hours,minutes,seconds;
    scanf("%d %d %d",&hours,&minutes,&seconds);
    seconds = convert(hours,minutes,seconds);
    printf("converted time = %d",seconds);
}

long convert(long h, long m, long s){
    long result;
    result = h*3600+m*60+s;
    return result;
}