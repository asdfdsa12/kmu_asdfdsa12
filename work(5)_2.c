#include <stdio.h>
#define N 3

int main(){
    int a[N][N];
    int y=0;
    int x=N/2;
    int ysum[N];
    for(int i=0;i<N;i++){
        ysum[i]=0;
    }
    for(int i=1;i<=N*N;i++){
        a[y][x]=i;
        if(i%N==0)
            y++;
        else{
            x--;
            y--;
            if(x<0)
                x=N-1;
            if(y<0)
                y=N-1;
        }
    }
    for(int i=0;i<N;i++){
        int xsum=0;
        for(int p=0;p<N;p++){
            printf("%d  ",a[i][p]);
            xsum+=a[i][p];
            ysum[p]+=a[i][p];
        }
        printf("    %d\n",xsum);
    }
    printf("\n");
    for(int i=0;i<N;i++){
        printf("%d ",ysum[i]);
    }
    int d1=0;
    int d2=0;
    for(int i=0;i<N;i++){
        d1+=a[i][i];
        d2+=a[N-i-1][i];
    }
    printf("\n우하향 대각선 합: %d, 우상향 대각선 합: %d",d1,d2);
}
