#include "booklist.h"
#include "book.h"
booklist::booklist () {
    capasity = 0;
    countbooks = 0;
}
    booklist::booklist(int c){
        capasity=c;
        book=new Book[c];
        countbooks=0;

    }

Book* booklist::searchbook(string s){
        for(int i=0;i<countbooks;i++){
            if(book[i].getTitle()==s)
                return &book[i];
        }
        return NULL;
    }
    Book*booklist::searchbook(int d) {
        for (int i = 0; i < countbooks; i++) {
            if (book[i].getId() == d)
                return &book[i];
        }
        return NULL;
    }
    void booklist::addbook(Book &b) {
    if(countbooks<capasity) {
        book[countbooks] = b;
        book[countbooks].setId(countbooks+1) ;
        countbooks++;
    }
}
void booklist::deletbook(int d) {
    for (int i = 0; i < countbooks; i++) {
        if (book[i].getId() == d){
            while(i<countbooks-1){
                book[i]=book[i+1];
                i++;
            }
            countbooks--;
            capasity--;
            break;
        }

    }
}

ostream& operator<< (ostream &output,booklist &b) {
    for (int i = 0; i < b.count(); i++) {
        output << b.book[i];
    }
    return output;
}
int booklist:: count(){
    return countbooks;
}

Book booklist:: gethighestrate(){
    double highest=-1;
    int index=0;
    for(int i=0;i<countbooks;i++){
        if(book[i].getAverageRating()>highest){
            highest=book[i].getAverageRating();
            index=i;
        }
    }
    return book[index];
}
void booklist::getbookforuser(user &y){
for(int i=0;i<countbooks;i++){
    if(book[i].getAuthor()==y)
        cout<<book[i];
}
}
/*Book&booklist::operator[](int n){
    bool f=true;
    if(n<0 || n>=countbooks)
        f=false;
    if(f)cout<<"position Erorr";
    else
    return book[n];

}
 */
;
