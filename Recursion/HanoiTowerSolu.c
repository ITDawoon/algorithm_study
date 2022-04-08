#include <stdio.h>

int i = 1;

void HanoiTowerMove(int num, char from, char by, char to)
{
    if (num == 1)
    {
        printf("Disk 1 moved from %c to %c \n", from, to);
    }
    else
    {
        HanoiTowerMove(num-1, from, to, by);
        printf("Disk %d moved from %c to %c \n", num, from, to);
        HanoiTowerMove(num-1, by, from, to);
    }
    printf("Total moved %d \n", i++);
}

int main(void)
{
    HanoiTowerMove(3, 'A', 'B', 'C');
    return 0;
}