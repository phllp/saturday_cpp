class Student {
    string name;
    int id;
    int gradYear;

    public:
        void setName(string name);
        void setGradYear(int gradYear);
        void setid(int id);

        string getName();
        int getGradYear();
        int getId();

        void print();

    void Student::setName(string nameIn) {
        name = nameIn;
    }

    void Student::setGradYear(int gradYearIn) {
        gradYear = gradYearIn
    }

    void Student::setId(int idIn) {
        id = idIn;
    }

    string Student::getName() {
        return name;
    }

    int Student::getGradYear() {
        return gradYear;
    }

    int Student::getId() {
        return id;
    }

    void Student::print() {
        std::cout << "[ " << id << " - " << name << " - " << gradYear << " ]";
    }
}