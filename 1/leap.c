    #include <stdio.h>


int isLeapYear(int year) {
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int year;

    printf("Ingresa un año: ");
    scanf("%d", &year);

    if(isLeapYear(year)){
        printf("%d es un año bisiesto.\n", year);
    }
    else{
        printf("%d no es un año bisiesto.\n", year);
    }

    return 0;
}