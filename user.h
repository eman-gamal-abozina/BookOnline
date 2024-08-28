
#ifndef CODEE_USER_H
#define CODEE_USER_H
#include <bits/stdc++.h>
using namespace std;
class user{
private:
    string name;
    string email;
    string password;
    int id;
    int age;
public:
    static int count;
    user();
    user(int,string,string,string);
    user(const user&u1);
    void setname(string);
    string getname();
    void setemail(string);
    string getemail();
    void setpassword(string);
    string getpassword();
    void setage(int);
    int getage();
    void setid(int);
    int getid();
    bool operator==(user&u1);
    friend istream &operator>>(istream &input ,user&u1);
    friend ostream &operator<<(ostream &output,user & u1);
};
#endif
