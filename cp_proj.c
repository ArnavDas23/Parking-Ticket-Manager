#include <stdio.h>

int current_record()
{
    int num;

    struct vehicles
    {
        int vehicle_number, arrival, departure;
    } v[num];

    printf("Enter no. of Vehicles: ");
    scanf("%d", &num);
    printf("\n");

    for (int i = 0; i < num; i++)
    {
        printf("#%d\n", i + 1);
        printf("Enter Plate num: ");
        scanf("%d", &v[i].vehicle_number);
        printf("Enter Time of Arrival: ");
        scanf("%d", &v[i].arrival);
        printf("Enter Time of Departure: ");
        scanf("%d", &v[i].departure);
        printf("\n");
    }

    printf("\n############ CURRENT RECORD ############\n\n");
    printf("\t\tNum.\tArrival\tDeparture\n");
    for (int j = 0; j < num; j++)
    {
        printf("Vehical #%d\t%d\t%d\t%d\n", j+1, v[j].vehicle_number, v[j].arrival, v[j].departure);
    }
    printf("\n");

    return 0;
}

int reciept()
{
    int vehicle_type1, hours, fare;

    printf("Types of Vehicle:\n");
    printf("\t1 - Car\n");
    printf("\t2 - Bike\n");
    printf("\t3 - Scooty\n");
    printf("\nEnter the type of vehicle: ");
    scanf("%d", &vehicle_type1);
    printf("Enter no. of hours: ");
    scanf("%d", &hours);
    printf("\n");

    switch (vehicle_type1)
    {
        case 1:
            fare = 25 * hours;
            printf("\n############ RECIEPT ############\n\n");
            printf("Vehicle Type:   Car\n");
            printf("Rate:           ₹25 * hours\n");
            printf("Duration:       %d hours\n", hours);
            printf("PLEASE PAY:     ₹%d\n", fare);
            printf("Thank you! Do visit again!\n");
            printf("\n#################################\n\n");
            break;
        case 2:
            fare = 15 * hours;
            printf("\n############ RECIEPT ############\n\n");
            printf("Vehicle Type:   Bike\n");
            printf("Rate:           ₹15 * hours\n");
            printf("Duration:       %d hours\n", hours);
            printf("PLEASE PAY:     ₹%d\n", fare);
            printf("Thank you! Do visit again!\n");
            printf("\n#################################\n\n");
            break;
        case 3:
            fare = 10 * hours;
            printf("\n############ RECIEPT ############\n\n");
            printf("Vehicle Type:   Scooty\n");
            printf("Rate:           ₹10 * hours\n");
            printf("Duration:       %d hours\n", hours);
            printf("PLEASE PAY:     ₹%d\n", fare);
            printf("Thank you! Do visit again!\n");
            printf("\n#################################\n\n");
            break;
        default:
            printf("\n############ ERROR ############\n\n");
    }

    return 0;
}

/*int feedback()
{
    char feedback[100];

    printf("\nDo you wish to give any feedback? (y/n)\n");
    scanf("%s", feedback);
    printf("%s\n", feedback);

    switch (feedback)
    {
        case 'y':
            printf("Yes");
            printf("\nFeedback: ");
            scanf("%s", &feedback);
            printf("\nThank you :)\n\n");
            break;
        case 'n':
            printf("No");
            printf("\nThank you :)\n\n");
            break;
        default:
            printf("\nERROR :(\n\n");
    }

    return 0;
}*/

int main()
{
    int prog;
    int loop = 1;

    while (loop == 1)
    {
        printf("\nProgrammes:\n");
        printf("\t1 - Current Record\n");
        printf("\t2 - Reciept\n");
        printf("\nChoose Programme: ");
        scanf("%d", &prog);
        printf("\n");

        switch (prog)
        {
            case 1:
                current_record();
                break;

            case 2:
                reciept();
                break;

            default:
                printf("############ ERROR ############\n\n");
                break;
        }

        printf("\nEnter 1 to Repeat\n");
        printf("Enter 2 to Exit\n\n");
        scanf("%d", &loop);
        continue;
    }

    printf("\n");

    // feedback();

    return 0;
} 

