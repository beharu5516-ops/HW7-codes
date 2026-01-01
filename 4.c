#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeNewline (char *name){
    int length = strlen(name);
    if(length > 0 && name[length - 1] == '\n'){
        name[length - 1] = '\0'; //deleting \n.
    }
}

void checkAttendency (){
FILE *input = fopen("students.txt" , "r");
if (input == NULL){
    return;
}

FILE *output = fopen("attendance_students.txt" , "w");
if(output == NULL){
    return;
}

char name[100];
while(fgets(name , sizeof(name) , input)){
    removeNewline(name);
    if (strlen(name) == 0){
        continue;
    }
    int status;
    printf ("enter status : 1 for present and 0 for absent");
    scanf("%d" , &status);

    fputs(name , output);
    if (status == 0)
    fputs(":absent\n", output);

    else
    fputs(":present\n" , output);
}
fclose(input);
fclose(output);
}