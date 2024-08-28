# include "user.h"
#include <bits/stdc++.h>
using namespace std;

int user::count=0;
user::user(){
    name="";
    email="";
    password="";
    age=0;
    count++;
    id=count;
}
user::user(int age,string name,string email,string password){
   this-> age=age;
    this->name=name;
   this-> email=email;
   this-> password=password;
    count ++;
    id=count;
}
user::user(const user &u1) {
    age=u1.age;
    name=u1.name;
    email=u1.email;
    password=u1.password;
}

bool user::operator==(user &u1) {
    if(age!=u1.age || id!=u1.id || name!=u1.name || email!=u1.email|| password!=u1.password)
return false;
return true;
}
void user::setid(int i){
    id=i;
}
int user::getid() {
    return id;
}
string user::getname(){
    return name;

}

istream &operator>>(istream &input, user &u1) {
cout<<"enter the user information\n";
cout<<"name , age , email , password \n";
input>>u1.name>>u1.age>>u1.email>>u1.password;
return input;
}

ostream &operator<<(ostream &output, user &u1) {
    cout << "*************** user: " << u1.id << " information **************\n ";
    output << "name: " << u1.name << "\n" << "age: " << u1.age << "\n" << "id: " << u1.id << "\n" << "email: "
           << u1.email << "\n";
    cout << "***************************************************";
    return output;
}


