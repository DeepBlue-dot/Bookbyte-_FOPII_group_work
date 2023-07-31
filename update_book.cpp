#include "header.h"

void update_book(int& num, Book books[])
{
    int n;
    char status;
    string due_date;
    void borrowers(int &num, Book books[]);
    cout<<"Choose a book and enter its book number ";
    cin>>n;
    if (n>=1 && n < num)
    {
      cout<<" choose 1 to borrow or else to cancel"<<endl ;
      cin>>status;
      if (status=='1');
      {
           books[n-1].status="borrowed";
           getline(cin,due_date);
      }
      else
        cout<<"\nUpdate Cancelled";
    }

    else
    {
     cout<<" Wrong entry ";
    }

   void save_books(int& num, Book books[])
}
 
