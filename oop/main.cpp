#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class human
{
protected:
    string name, surname;
public:

    ll age;
    ll height;
    human(string name, string surname, ll age, ll height)
    {
        this -> name = name;
        this -> surname = surname;
        this -> age = age;
        this -> height = height;
        cout << "Constructor for human was called!" << endl;
    }~human()
    {
        cout << "Destructor for human was called!" << endl;
    }

    string getname()
    {
        return name;
    }
    string getsurname()
    {
        return surname;
    }

    virtual void sayhello() = 0;
};

class mathematician: virtual public human
{
private:
    ll math_exp;
public:
    mathematician(string name, string surname, ll age, ll height, ll math_exp = 0): human(name, surname, age, height)
    {
        this -> math_exp = math_exp;
        cout << "Constructor for mathematician was called!" << endl;
    }

    ~mathematician()
    {
        cout << "Destructor for mathematician was called!" << endl;
    }

    ll getmath_exp()
    {
        return math_exp;
    }

    void sayhello() override
    {
        cout << "Hi! I am mathematician " << name << endl;
    }
};

class physicist: virtual public human
{
private:
    ll physics_exp;

public:
    physicist(string name, string surname, ll age, ll height, ll physics_exp = 0): human(name, surname, age, height)
    {
        this -> physics_exp = physics_exp;
        cout << "Constructor for physicist was called!" << endl;
    }

    ~physicist()
    {
        cout << "Destructor for physicist was called!" << endl;
    }

    ll getphysics_exp()
    {
        return physics_exp;
    }

    void sayhello() override
    {
        cout << "Hi! I am physicist " << name << endl;
    }
};

class engineer: public mathematician, public physicist
{

private:
    ll engineer_exp;

public:
    engineer(string name, string surname, ll age, ll height, ll engineer_exp = 0, ll math_exp = 0, ll physics_exp = 0): mathematician(name, surname, age, height, math_exp),
        physicist(name, surname, age, height, physics_exp),
        human(name, surname, age, height)
    {
        this -> engineer_exp = engineer_exp;
        cout << "Constructor for engineer was called!" << endl;
    }

    ~engineer()
    {
        cout << "Destructor for engineer was called!" << endl;
    }

    ll getengineer_exp()
    {
        return engineer_exp;
    }

    void sayhello() override
    {
        cout << "Hi! I am engineer " << name << endl;
    }
};

void sayhello(human * human)
{
    human -> sayhello();
}

int main()
{
    engineer * A = new engineer("Jack", "Holland", 40, 181, 15, 16, 23);
    physicist * B = new physicist("Tom", "Hardy", 45, 185, 24);

    sayhello(A);

    cout << ( * A).getname() << endl;
    cout << ( * A).getmath_exp() << endl;

    sayhello(B);

    delete B;
    delete A;

    human * H1 = new mathematician("Arnold", "a", 1, 1, 1);
    human * H2 = new engineer("Bob", "b", 2, 2, 2, 2, 2);
    sayhello(H1);
    sayhello(H2);
    delete H1;
    return 0;
}
