#include <stdio.h>
#include <time.h>

int main(void)
{
    int toss;
    int front = 0;
    int back = 0;

    srand((unsigned)time(NULL));

    printf("동전의 앞면: %d \n", front);
    printf("동전의 뒷면: %d \n", back);

    return 0;
}