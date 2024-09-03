#include<stdio.h>

int main() 
{
    char ch;

    printf("Enter any letter=>");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'a') {
        printf("\nApple");
    } else if (ch == 'B' || ch == 'b') {
        printf("\nBall");
    } else if (ch == 'C' || ch == 'c') {
        printf("\nCat");
    } else if (ch == 'D' || ch == 'd') {
        printf("\ndog");
    } else if (ch == 'E' || ch == 'e') {
        printf("\nElephant");
    } else if (ch == 'F' || ch == 'f') {
        printf("\nfacebook");
    } else if (ch == 'G' || ch == 'g') {
        printf("\ngentleman");
    } else if (ch == 'H' || ch == 'h') {
        printf("\nhorse");
    } else if (ch == 'I' || ch == 'i') {
        printf("\nice");
    } else if (ch == 'J' || ch == 'j') {
        printf("\njoker");
    } else if (ch == 'K' || ch == 'k') {
        printf("\nkatana");
    } else if (ch == 'L' || ch == 'l') {
        printf("\nlarge");
    } else if (ch == 'M' || ch == 'm') {
        printf("\nmango");
    } else if (ch == 'N' || ch == 'n') {
        printf("\nnote");
    } else if (ch == 'O' || ch == 'o') {
        printf("\norange");
    } else if (ch == 'P' || ch == 'p') {
        printf("\nprice");
    } else if (ch == 'Q' || ch == 'q') {
        printf("\nquit");
    } else if (ch == 'R' || ch == 'r') {
        printf("\nrate");
    } else if (ch == 'S' || ch == 's') {
        printf("\nsit");
    } else if (ch == 'T' || ch == 't') {
        printf("\nticket");
    } else if (ch == 'U' || ch == 'u') {
        printf("\nunity");
    } else if (ch == 'V' || ch == 'v') {
        printf("\nvacation");
    } else if (ch == 'W' || ch == 'w') {
        printf("\nwindow");
    } else if (ch == 'X' || ch == 'x') {
        printf("\nxerox");
    } else if (ch == 'Y' || ch == 'y') {
        printf("\nyoutube");
    } else if (ch == 'Z' || ch == 'z') {
        printf("\nzebra");
    } else {
        printf("A to Z only");
    }

    return 0;
}

