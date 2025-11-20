#include <iostream>
using namespace std;

class HighScore
{
private:
    int age;
    string name;

public:
    HighScore(int a, string n)
    {
        age = a;
        name = n;
    }
    void display()
    {
        cout << "name :" << name << endl;
        cout << "age: " << age << endl;
        }

    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};

int main()
{
    HighScore hg(23, "Weldesilassie");
    hg.display();

    cout << "##########################" << endl;

    cout << hg.getage() << endl;

    cout << hg.getname() << endl;
}