In short, divides number of package weight (by input) by number of motors (by input)
and checks if the result is over, under or equals to 5.6kg.
If over 5.6, the belt cannot carry the packages. 

Explanation of the lines of the code.

#include <stdio.h>
betyder "inkluder "STD= Standard, I=Input, O=output, & ".h = Header file"."

int main()
int: integer, main: main function. 1 = error, 0 = succes, as return for the program.
{ -> the start of the program.

int motor;
Stores the number of motors

float packageWeight;
stores the total package weight.

float avgLoad;
Stores the average (avg) load pr. motor.

const float maxLoad = 5.6;
Stores the constsant value of the weight a motor can carry.

printf("Number of motors?);
Displays the message "Number of motors?" in the terminal, and awaits user input.

scanf("%d", &motors);
Reads and stores the input by the user.
"%d" is the format specifier the the integer
"&motors" is the address of the variable of motors, in int motor

printf("How much weight (kg)? ");
Displays the message above in the terminal, and waits for input.

scanf("%f", &packageWeight);
"%f" is a format specifier for float.
"&packageWeight" is the address of the variable of weight in kg, saved in "float packageWeight;"

avgLoad = packageWeight / motors
Divides packageWeight by the number of motors.

if (avgLoad <= maxLoad) 
function for checking if the value is over or under 5.6kg pr. motor.

Under 5.6kg? The motors can carry the weight. -> Can carry.
Else
Over 5.6kg? The motors cannot carry the weight. -> Cannot carry.

With two printf expressions for display of the output text.

return 0;
Ends the main function and returns 0 to the system, finalizing the program as succesfully executed.

} -> End of program.