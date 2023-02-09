#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int mutex = 1, full = 0, empty = 10, x = 0, z;
void producer()
{
    --mutex;
    ++full;
    --empty;
    x++;
    printf("Producer %d : inserted item at %d\n", x, z);
    ++mutex;
}
void consumer()
{
    --mutex;
    --full;
    ++empty;
    printf("Consumer %d : removed item from %d\n", x, z);
    x--;
    ++mutex;
}

int main()
{
    int n, i;
    for (i = 0; i < 50; i++)
    {
        if (i % 3 == 0 || i % 3 == 2)
        {
            n = 1;
        }
        else
        {
            n = 2;
        }
        switch (n)
        {
        case 1:
            if ((mutex == 1) && (empty != 0))
            {
                producer();
            }
            else
            {
                printf("Buffer is full !! \n");
            }
            break;
        case 2:
            if ((mutex == 1) && (full != 0))
            {
                consumer();
            }
            else
            {
                printf("Buffer is empty !!\n");
            }
            break;
        }
    }
    return 0;
}