#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class user {
private:
    string name;
    string lastName;
    int clearenceLvL;
    int subscription;

public:
    string getName();
    string getLastName();
    int getClearanceLvL();
    int getSubscription();

    user(string Cname, string ClastName, int CclearenceLvL){
        name = Cname;
        lastName = ClastName;
        clearenceLvL = CclearenceLvL;
    }

};

int user::getClearanceLvL() {
    return clearenceLvL;
}

string user::getName() {
    return name;
}

string user::getLastName() {
    return lastName;
}

int user::getSubscription() {
    return subscription;
}


user erenSonmez("Eren", "Sonmez",5);

int main() {


    cout << erenSonmez.getName() + " " + erenSonmez.getLastName();


}
