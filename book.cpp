#include "book.h"
#include "user.h"
#include <bits/stdc++.h>
using namespace std;

int Book::count=0;
Book::Book(){
    title="";
    isbn="";
    count++;
    id=count;
    category="";
    averageRating=0.0;
     numRates=0;
    sumRates=0.0;

}
Book::Book(string title,string isbn, string category) {
this->title=title;
this->isbn=isbn;
this->category=category;
count++;
id=count;
    averageRating=0.0;
    ok_a=false;
    numRates=0;
    sumRates=0.0;

}
Book::Book(const Book &b) {
    title=b.title;
    category=b.category;
    isbn=b.isbn;
    id=b.id;
    averageRating=b.averageRating;
    //author=b.author;
    numRates=b.numRates;
    sumRates=b.sumRates;
    ok_a=false;
}
void Book::setAuthor(const user &u) {
    ok_a=true;
    author= u;

}
void Book::setTitle(string t) {
    title=t;
}
void Book::setCategory(string c) {
    category=c;
}
void Book::rateBook(double r) {
    numRates++;
    sumRates+=r;
    averageRating=sumRates/numRates;
}
double Book::getAverageRating() {
    return averageRating;
}
bool Book::operator==(const Book &b) {
    if(title!=b.title || isbn!=b.isbn || category!=b.category || id!=b.id )
        return false;
    return true;
}
istream &operator>>(istream &input,Book &b){
    cout<<"enter the book info\n";
    cout<<"title, isbn, category\n ";
    input>>b.title>>b.isbn>>b.category;
    return input;
}

ostream &operator<<(ostream &output,Book &b){
    output<<"*************** The Book "<<b.id<<" info **********\n";
    output<<"title : "<<b.title<<"\n"<<"category : "<<b.category<<"\n"<<"isbn : "<<b.isbn<<"\n"<<"id : "<<b.id<<b.isbn<<"\n"<<"rating : "<<b.averageRating<<"\n";
    if(b.ok_a){
        output<<(b.author);
    }
    output<<"------------------------";
    return output;
}


string Book::getTitle() {
    return title;
}
void Book::setId(int id) {
    this->id=id;
}
int Book::getId() const {
    return id;
}
user Book::getAuthor() {
    return author;
}