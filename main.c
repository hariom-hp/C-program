#include<stdio.h>
void printmc();
void printmuji();

int main() {
    printf("Enter 'i' for indian   & 'n' for nepali: ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i' || ch == 'i') {
        printmc();
    } else {
        printmuji();
    }

    return 0;
}

void printmc() {
    printf("madharchod\n");
}

void printmuji() {
    printf("muji \n");
}
