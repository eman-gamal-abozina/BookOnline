#include <bits/stdc++.h>
using namespace std;
#include "user.h"

#ifndef CODEE_BOOK_H
#define CODEE_BOOK_H
class Book{
private:
    string title;
    string isbn;
    int id;
    string category;
    double averageRating;
    bool ok_a=false;
    user author;
     int numRates;
    double sumRates;
public:
    static int count;
    Book();
    Book(string , string , string );
    Book(const Book& );
    void setTitle(string );
    string getTitle() ;
    void setIsbn(string );
    string getIsbn() const;
    void setId(int);
    int getId() const;
    void setCategory(string );
    string getCategory()const;
    void setAuthor(const user & );
    user getAuthor();
    void rateBook(double );
    double getAverageRating () ;
    bool operator==(const Book&);
    friend ostream &operator<<(ostream &,  Book &);
    friend istream &operator>>( istream &, Book &);

};
#endif