// Ex_2.c -- Devise a function chline(ch,i,j) that prints the requested character in columns i
 * through j.

#include <stdio.h>
void chline(double ch, int i, int j);

int main(void){
    int i, j;
    i = 5;
    j = 9;
    chline('#', i, j);
    return 0;
}

void chline(double ch, int i, int j){
    int col = 0;
    while (col < i){
        putchar(' ');
        col++;
    }
    while (col <= j){
        putchar(ch);
        col++;
    }
    putchar('\n');
}