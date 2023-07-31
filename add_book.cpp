#include "header.h"

void add_book(int& num, Book books[])
{
    string title,author,genre,due_date;
    string ISBN,publication_year;
    int N_book;
    //N_book ....number of books that the user wants to add.
    cout<<"How many books do you want to add?";
    cin>>N_book;
    cout<<"\t\tPlease fill these informations:"<<endl;
   for(int i=0;i<N_book;i++){
        cout<<"Book "<<num+1<<" :"<<endl;
        cout<<"\t\tTitle: ";
        cin>>books[num].title;
         cout<<"\t\tAuthor: ";
        cin>>books[num].author;
         cout<<"\t\tGenre: ";
        cin>>books[num].genre;
        cout<<"\t\tISBN of the book: ";
        cin>>books[num].ISBN;
        cout<<"\t\tPublication year:";
        cin>>books[num].publication_year;
      books[num].title=title;
      books[num].author=author;
      books[num].genre;
      books[num].ISBN = ISBN;
      books[num].publication_year= publication_year;
       num++;
       }
       save_books(num,books);
 
}