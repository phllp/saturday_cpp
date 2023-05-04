#include<string>

using namespace std;

class User {

    string name;
    char marker;

    public:
        User();
        void setName(string name);
        string getName();
        void setMarker(char marker);
        char getMarker();
};

User::User() {
    name = "undefined";
}

void User::setName(string nameIn) {
    name = nameIn;
}

string User::getName() {
    return name;
}

void User::setMarker(char markerIn) {
    marker = markerIn;
}

char User::getMarker() {
    return marker;
}