#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main()
{
    struct timeval t1; gettimeofday(&t1, NULL); srand(t1.tv_usec*t1.tv_sec);
    int setsizes[] = {5,10,50,100,1000,10000,100000,1000000,10000000,100000000};
    int standard[20] = {1,20,2,19,3,18,4,17,5,16,6,15,7,14,8,13,9,12,10,11};
    int spindown[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int standard_acc[20]={0};
    int spindown_acc[20]={0};
    int n = 10,r;
    for(int i=0;i<n;i++){
        printf("set of %d\n",setsizes[i]);
        for(int c=0;c<setsizes[i];c++){
            r = rand()%20;
            standard_acc[standard[r]-1]++;
            spindown_acc[spindown[r]-1]++;
        }
        printf("Standard\t\t\tSpindown\n");
        for (int i=0;i<20;i++){
            printf("%d: %d\t\t\t%d\n",i+1,standard_acc[i],spindown_acc[i]);
            standard_acc[i]=0;spindown_acc[i]=0;
        }
        printf("\n\n");
    }
    return 0;
}
