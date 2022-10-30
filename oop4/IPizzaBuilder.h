#ifndef IPIZZABUILDER_H_INCLUDED
#define IPIZZABUILDER_H_INCLUDED

class IPizzaBuilder
{
public:
    virtual void setName(string name) = 0;
    virtual void setDiameter(int diameter) = 0;
    virtual void setSauce(double sauce) = 0;
    virtual void setCheese(double cheese) = 0;
    virtual void setTomatoes(double tomatoes) = 0;
    virtual void setMushrooms(double mushrooms) = 0;
    virtual void setCorn(double corn) = 0;
    virtual void setOnion(double onion) = 0;
    virtual void setPineapple(double pineapple) = 0;
    virtual void setPepper(double pepper) = 0;
    virtual void setChicken(double chicken) = 0;
    virtual void setPepperoni(double pepperoni) = 0;
    virtual void setSalami(double salami) = 0;
    virtual void setBacon(double bacon) = 0;
    virtual Pizza * makePizza() = 0;
};

#endif // IPIZZABUILDER_H_INCLUDED
