#include <bits/stdc++.h>

#include "boost/di.hpp"

using namespace std;

class GraphicsCard
{
public:
    virtual void work() = 0;
};

class CPU
{
public:
    virtual void calculate() = 0;
};

class Nvidia: public GraphicsCard
{
public:

    void work() override
    {
        cout << "Nvidia card is working right now" << endl;
    }
};

class Radeon: public GraphicsCard
{
public:
    void work() override
    {
        cout << "Radeon card is working right now" << endl;
    }
};

class Intel: public CPU
{
public:
    void calculate() override
    {
        cout << "Intel CPU is calculating..." << endl;
    }
};

class Ryzen: public CPU
{
public:
    void calculate() override
    {
        cout << "Ryzen CPU is calculating..." << endl;
    }
};

class PC
{
public:
    CPU * cpu;
    GraphicsCard * card;
    string opa;
    int a;
    PC(CPU * cpu, GraphicsCard * card, int a, string opa)
    {
        this -> cpu = cpu;
        this -> card = card;
        this -> a = a;
        this -> opa = opa;
    }

    void turnON()
    {
        cpu -> calculate();
        card -> work();
        cout << opa << endl << a << endl;
    }
};

class c
{
public:
    int a;
    double d = 0.0;
};

int main()
{

    auto injector = boost::di::make_injector(
                        boost::di::bind < int > .to(42)
                        //boost::di::bind<double>.to(87.0)
                    );
    auto to = injector.create < c > ();
    c * nn = new c();
    cout << nn -> a << endl;
    cout << to.a << " " << to.d << endl;;
    auto injectorIN = boost::di::make_injector(
                          boost::di::bind < CPU > .to < Intel > (),
                          boost::di::bind < GraphicsCard > .to < Nvidia > (),
                          boost::di::bind < string > .to("kchau"),
                          boost::di::bind < int > .to(345)
                      );

    auto myPC = injectorIN.create < PC > ();
    cout << "DO " << myPC.a << endl;

    myPC.turnON();
    /*
      auto injectorRR = boost::di::make_injector
                        (
                            boost::di::bind<CPU>.to<>(new Ryzen()),
                            boost::di::bind<GraphicsCard>.to<Radeon>()
                        );

      auto anotherMyPC=injectorRR.create<PC>();
      anotherMyPC.turnON();

      auto anotherMyPC_2=injectorRR.create<PC>();
      anotherMyPC_2.turnON();
    */
    return 0;
}
