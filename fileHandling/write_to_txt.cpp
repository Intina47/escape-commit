// #include <stdio.h>
#include <iostream>
#include <cstdlib> //for exit()
#include <cstdio> //file handling
using namespace std;

int main() {
    int num;
    FILE *fptr;

    fptr = fopen("program.txt", "w");
    if(fptr == nullptr){
        cout << "Error!" <<endl;
        exit(1);
    }

    cout << "Enter num: ";
    cin >> num;

    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}