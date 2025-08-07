#include<stdio.h>

int total()
{
    int num = 0;
    printf("Enter the number of processes : ");
    scanf("%d", &num);
    return num;
}

int main()
{
    int no = 0;
    int processes[50];
    int i = 0;
    int max = 0;
    int initiate = 0;
    int coordinator = 0;

    no = total();
    printf("Total number of processes : %d\n", no);

    for(i = 0; i  < no; i++)
    {
        printf("Enter the numeric value of process %d : \n", i+1);
        scanf("%d", &processes[i]);
    }

    printf("Processes : \n");
    for(i = 0; i < no; i++)
    {
        printf("%d\n", processes[i]);
    }

    for(i = 0; i < no; i++)
    {
        if(processes[i] > max)
        {
            max = processes[i];
        }
    }

    printf("Coordinator Process is : %d\n", max);

    printf("Coordinator Prpcess %d is down, \nInitiating Election Process...\n", max);

    printf("Enter Process number that initiates election : ");
    scanf("%d", &initiate);

    printf("\nProcess %d sending Election Invites...\n", initiate);

    for(i = 0; i < no; i++)
    {
        if((processes[i] > initiate))
        {
            printf("Sending Invite to Process %d...\n", processes[i]);
        }
    }
    printf("Recieving OK Messages...\n");

    for(i = 0; i < no; i++)
    {
        if((processes[i] > coordinator) && (processes[i] < max))
        {
            coordinator = processes[i];
        }
    }

    printf("\nNEW COORDINATOR ELECTED IS : %d", coordinator);
    return 0;
}