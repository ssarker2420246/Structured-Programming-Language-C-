#include <stdio.h>

struct Patient {

char name [50];
int age;
float height;
float weight;
float BMI;

};

int main () {

struct Patient allPatients [5];

printf ("Enter all the information of all patients: \n");
for (int i=0; i<5; i++) {
    printf ("\nEnter Patient name: ");
    scanf ("%s", allPatients [i].name);
     printf ("\nEnter Patient age: ");
    scanf ("%d", &allPatients [i].age);
     printf ("\nEnter Patient height: ");
    scanf ("%f", &allPatients [i].height);
     printf ("\nEnter Patient weight: ");
    scanf ("%f", &allPatients [i].weight);
    allPatients [i].BMI = (allPatients [i].weight)/ (allPatients [i].height);

}

int youngestAge = 0;
for (int i=0; i<5; i++) {
    if (allPatients [i].age < allPatients [youngestAge].age) {
        youngestAge = i;
    }
}

printf ("\n\nYoungest Patient Name: %s", allPatients [youngestAge].name);
printf ("\nYoungest Patient Age: %d", allPatients [youngestAge].age);
printf ("\nYoungest Patient Height: %.1f", allPatients [youngestAge].height);
printf ("\nYoungest Patient Weight: %.1f", allPatients [youngestAge].weight);
printf ("\nYoungest Patient BMI: %.2f", allPatients [youngestAge].BMI);


return 0;
}
