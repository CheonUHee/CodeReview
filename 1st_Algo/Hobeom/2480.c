#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
    int max=a;
    if(a==b&&b==c){
        printf("%d", 10000+a*1000);
    }
    else if(a==b||a==c){
        printf("%d", 1000+a*100);
    }
    else if(b==c){
        printf("%d", 1000+b*100);
    }
    else{
        if(max<b){
        max=b;
        if(max<c){
            max=c;
        }
        }
        else if(max<c){
            max=c;
        }
        printf("%d", max*100);
    }
    return 0;
}
