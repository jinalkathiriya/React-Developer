#include <iostream>
#include <string>
using namespace std;

struct Book 
{
    string title;
    string author;
    double price;

    Book(string t, string a, double p) : title(t), author(a), price(p) {}
};

bool compareByPrice(const Book& a, const Book& b) 
{
    return a.price < b.price;
}

bool compareByAuthor(const Book& a, const Book& b) 
{
    return a.author < b.author;
}

int main() 
{
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        string title, author;
        double price;

        cin.ignore(); 
        cout << "Enter title of book " << i + 1 << ": ";
        getline(cin, title);
        cout << "Enter author of book " << i + 1 << ": ";
        getline(cin, author);
        cout << "Enter price of book " << i + 1 << ": ";
        cin >> price;

        books.push_back(Book(title, author, price));
    }

    int choice;
    cout << "\nHow would you like to sort the books?\n";
    cout << "1. By Price\n";
    cout << "2. By Author Name\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) 
    {
        sort(books.begin(), books.end(), compareByPrice);
        cout << "\nBooks sorted by Price:\n";
    } 
    else if (choice == 2) 
    {
        sort(books.begin(), books.end(), compareByAuthor);
        cout << "\nBooks sorted by Author Name:\n";
    } 
    else 
    {
        cout << "Invalid choice!";
        return 1;
    }

    for (const auto& book : books) 
    {
        cout << "Title: " << book.title << ", Author: " << book.author << ", Price: " << book.price << endl;
    }

    return 0;
}
