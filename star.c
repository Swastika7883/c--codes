#include<stdio.h>
// -------------- star patters , tables , factoricals etc
void a(int b){
    int i;
    for(i=1 ; i<=10 ; i++){
        printf("2 * %d = %d" , i , (2*i));
        printf("\n");
    }
    printf("\n");
}
// 2nd star ------ left side
void b(int x){
    int f, g ,k ;
    for(f=1;f<=4;f++){
        for (g=3 ; g>=f; g--){
            printf(" ");
        }
        for(k=1 ; k<=f ; k++){
            printf("*");
        }
        printf("\n");
    }
    
}

 void bitwiseComplement(int n) {
        int m = n;
        int mask =0;
        if (n==0) return 1;
        while(m!=0){
            m = m >> 1;
            mask = (mask<< 1) | 1;

        }
        
        int ans=(~n )& mask;
        return ans;
    }


int main(){
    int i ,j;
    for (i=1; i<=3;i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");

    }

    a(2);

    b(5);
    bitwiseComplement(5);
}
