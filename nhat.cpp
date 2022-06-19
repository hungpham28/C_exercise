#include <stdio.h>
int a[25];
void print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

int ktr(int a[], int n){
    for (int i=0;i<n;i++){
        if (a[i]==0){
            return 0;
        }
    }
    return 1;
}
int method(int a[], int n){
    print(a,n);
    while(ktr(a,n)==0){
        int i=n-1;
        do{
            if(a[i]==0){
                a[i]=1;
                for(int j=i+1;j<n;j++){
                    a[j]=0;
                }
            }
            else i--;
        }while(a[i]==1);
        print(a,n);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n;i++){
        a[i]=0;
    }
    method(a,n);
}
