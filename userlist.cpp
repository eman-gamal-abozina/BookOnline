#include "userlist.h"
#include "user.h"
#include <iostream>
using namespace std;
userlist::userlist(){
    capasity=0;
    userscount=0;//اللي هعد بيه اليوزرز اكنهم اندكسات للارراي
}
userlist::userlist(int capasity) {//كده بدخل السايز بتاع الارراي
    this->capasity = capasity;
    u=new user[capasity];//حجزنا عددcapasity  من الاوبجكتس
userscount=0;
}
void userlist::adduser(user &u1) {
    if(userscount<capasity) {//عشان منعديش سايز الارراي
        u[userscount] = u1;
        u[userscount].setid(userscount+1);
        userscount++;
    }
}
user* userlist::searchname(string s) {
    for(int i=0;i<userscount;i++) {
        if (u[i].getname() == s)
            return &u[i];
    }
            return NULL;
    }
user* userlist::searchid(int d) {
    for(int i=0;i<userscount;i++) {
        if (u[i].getid() == d)
            return &u[i];
    }
    return NULL;
}
void userlist::deleteuser(int d) {
    for(int i=0;i<userscount;i++) {
        if (u[i].getid() == d) {
            while (i < userscount - 1) {
                u[i] = u[i + 1];
                i++;
            }
        }
        userscount--;
        capasity--;
        break;
    }
    }
    ostream &operator<<(ostream &output,userlist &u1){
    for(int i=0;i<u1.userscount;i++){
        output<<u1.u[i];
    }
return output;
}
userlist::~userlist() {
    delete []u;
}
