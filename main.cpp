#include <iostream>
#include <cstring>
using namespace std;

class Reader
{
private:
    /* data */
    char* name;
    long index;
    int age;
    char sex;
    int name_len;
public:
    // constructor 
    Reader(char* i_name, char i_sex, int i_age);
    void show_data()
    {
        cout << "Reader's Data..." << endl;
        cout << "name : " << name << endl;
        cout << "sex : " << sex << endl;
        cout << "age : " << age << endl;
        cout << "index number : " << index << endl;
    }
};
// Member initialization list
Reader::Reader(char* i_name, char i_sex, int i_age):name_len(strlen(i_name)), index(2), sex(i_sex), age(i_age)
{
    name = new char [name_len+1];
    strcpy(name, i_name);
}

int main()
{
    char name[10] = "John";

    Reader A_Reader(name, 'M', 10);
    A_Reader.show_data();

    return 0;
}
