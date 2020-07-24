#include <stdio.h> 
int main() {
int peHour, numberOfHours;
printf("Enter per hour pay:");
scanf("%d", &peHour); 
printf("How many hours?"); 
scanf("%d", &numberOfHours); 
int total= peHour* numberOfHours;
printf("Total salary: %d\n", total); 
int skat;
skat= total *70/100;
printf("after taxes %d", skat);
return 0;
}
