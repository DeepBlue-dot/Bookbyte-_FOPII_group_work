#include "header.h"

void load_book(int&num, Book books[])
{
    ifstream fin ("book.txt");
    if(fin.is_open())
    {
        for (num= 0; !fin.eof(); num++)
        {
            getline(fin, books[num].title);
            getline(fin, books[num].author);
            getline(fin, books[num].Genre);
            getline(fin, books[num].ISBN);
            getline(fin, books[num].Publication_year);
            getline(fin, books[num].status);
            getline(fin, books[num].due_date);
        }  
        fin.close();   
    }
    else
    {
        ofstream fout("book.txt");
        fout.close();
        add_book(num, books);
    }
}