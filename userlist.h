

#ifndef CODEE_USERLIST_H
#define CODEE_USERLIST_H
#include "user.h"
class userlist{
private:
    user*u;//كده عملنا ارراي من الاوبجكتس لليوزر يعني كل شوية هدخل يوزر واحطه ف الارراي دي بي ارراي من نوع بوينتر
    int capasity;
    int userscount;
public:
    userlist();
    userlist(int);
    void setcap(int);
    int getcap();
    void adduser( user &u);
    friend ostream &operator<<(ostream &output,userlist &u);
user*searchname(string s);
user*searchid(int i);
void deleteuser(int d);
~userlist();



};
#endif //CODEE_USERLIST_H
