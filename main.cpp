#include "header.h"

int main(void)
{
    Book books[250];
    int num_books=0, choice=0;
    load_book(num_books, books);
    do
    {
        cout << "1.Recommendation" << endl;
        cout << "2.Browes books" << endl;
        cout << "3.Search a book" << endl;
        cout << "4.Adminstration" << endl;
        cout << "5.Exit" << endl;
        cin >> choice;
        system("clear");
        switch (choice)
        {
            case 1:
                reccomendation(num_books, books);
                break;
            case 2:
                browse(num_books, books);
                break;
            case 3:
                search(num_books, books);
                break;
            case 4:                
                cout << "1.Add a book" << endl;
                cout << "2.Update a book" << endl;
                cin >> choice;
                system("clear");
                switch (choice)
                {
                    case 1:
                        add_book(num_books, books);
                        break;
                    case 2:
                        update_book(num_books, books);
                        break;
                    default:
                        cout <<"Invalid Input" << endl;
                        break;
                }
                break;
            case 5:
                save_books(num_books, books);
                return 0;
                break;
            
            default:
                cout << "Invalid Input" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
        }
    } while (true);  
}


