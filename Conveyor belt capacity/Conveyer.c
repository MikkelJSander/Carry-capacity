#include <stdio.h>

int main() {
    int motors;                       //Number of motors
    float packageWeight;              //Total weight of packages
    float avgLoad;                    //Average load per motor
    const float maxLoad = 5.6;        //Max load per motor in kg

    printf("Number of motors? ");     //Requires user input
    scanf("%d", &motors);             //Saves user input

    printf("How much weight (kg)? "); //Requires user input
    scanf("%f", &packageWeight);      //Saves user input

    avgLoad = packageWeight / motors; //Divides weight by number of motors

    if (avgLoad <= maxLoad) {         //Output prints
        printf("Can carry.\n");
    } else {
        printf("Cannot carry.\n");
    }
    return 0;
}
