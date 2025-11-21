#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
        srand(time(NULL));
        int a,b;
        a = rand() % 7;
        b = rand() % 7;
        while(a==0 || b==0) {
                a = rand() % 7;
                b = rand() % 7;
        }
        if((a==6 && b==5) || (a==5 && b==6)) {
                printf("Dau cu zaru 6 5 n-am nevoie de servici\n");
        }
        else if(a==6 && b==6) {
                printf("Dau cu zaru 6 6 ca mine nu se mai naste\n");
        }
        else {
                printf("Dau cu zaru %d %d\n", a, b);
        }
        return 0;
}