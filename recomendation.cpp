#include "header.h"

void reccomendation(int& num, Book books[])
{
    srand(time(0));
    
    // Generate a random index between 0 and num-1
    int randomIndex = rand() % num;
    
    // Display the randomly chosen book
    display(books[randomIndex]);
}