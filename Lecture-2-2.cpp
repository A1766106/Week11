#include <iostream>
#include <string.h>

using namespace std;

class A{
    int* _age;
    public:
    A(){_age =  new int;}
        void set_age(int age)
        {
            if(age < 0 || age > 100)
            {
                throw runtime_error("Error");
            }
            *_age = age;
        }
        ~A()
        {
            delete _age;
            cout << "A-\n";
        }
};

int main()
{
    try {
        A a;
        a.set_age(150);
    }
    catch(exception const& e){
        cerr << e.what() << endl;
    }
    catch(int ecode){
        cerr << "Error: " << ecode << endl;

    } catch (...)
    {
        cerr << "Unknown error" << endl;
    }
    cout << "Line 45" << endl;
    return 0;
}