#include <stdio.h>
#include <time.h>

int main(void)
{
    int toss;
    int front = 0;
    int back = 0;

    srand((unsigned)time(NULL));

        for(toss=0; toss<100; toss++)
    {
        if(coin_toss() == 1)
        {
            front++;
        }
        else
        {
            back++;
        }
    }

    printf("동전의 앞면: %d \n", front);
    printf("동전의 뒷면: %d \n", back);

    return 0;
}