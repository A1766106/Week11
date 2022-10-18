#include <iostream>

using namespace std;

class A{
    int _age;
    public:
        void set_age(int age)
        {
            if(age < 0)
            {
                throw("Invalid Age");
            }
            else if (age>100)
            {
                throw(999);
            }
            _age = age;
        }
};

int main()
{
    A a;
    try {
        a.set_age(15);
        // a.set_age(-5);
        throw(0);
    }
    catch(const char* msg){
        cerr << msg << endl;
    }
    catch(int ecode){
        cerr << "Error: " << ecode << endl;

    }


    return 0;
}