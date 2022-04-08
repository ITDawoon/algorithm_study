#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    // Generate and reset ArrayList
    List list;
    int data;
    ListInit(&list);

    // Store 5 data
    LInsert(&list, 11); LInsert(&list, 11);
    LInsert(&list, 22); LInsert(&list, 22);
    LInsert(&list, 33);

    // Generate output of stored data
    printf("Current data: %d \n", LCount(&list));

    if (LFirst(&list, &data))
    {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");

    // Search 22 and delete
    if (LFirst(&list, &data))
    {
        if (data == 22)
            LRemove(&list);
        
        while (LNext(&list, &data))
        {
            if(data == 22)
                LRemove(&list);
        }
    }

    // Generate output of remain data
    printf("Current data: %d \n", LCount(&list));

    if (LFirst(&list, &data))
    {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    return 0;
}