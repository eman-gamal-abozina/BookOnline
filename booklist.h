
#ifndef CODEE_BOOKLIST_H
#define CODEE_BOOKLIST_H
#include "book.h"
class booklist{
private :

int capasity;
int countbooks;
public:
    Book*book;
    booklist();
    booklist(int c);
void addbook(Book &b);
void setcap(int i);

  //  Book operator[](int i){
      //  if (index < 0 || index >= countbooks) {
         //   throw std::out_of_range("Index out of range");
        //}
       // return book[i];
  //  }
int count();
//friend ostream operator<<(ostream &output,booklist &b);
Book *searchbook(string);
Book *searchbook(int);
void deletbook(int id);
 Book gethighestrate();
void getbookforuser(user &y);
Book& operator[](int);

};



























#endif
