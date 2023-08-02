#include "header.h"

void reccomendation(int& num, Book books[])
{
    srand(time(0));
    
    // Generate a random index between 0 and num-1
    if(num > 0)
    {
        int randomIndex = rand() % num;
        cout << "Book " << randomIndex+1 << endl;
        display(books[randomIndex]);
    }
    else
    {
        cout << "There are no books" << endl;
    }
    // Display the randomly chosen book
}