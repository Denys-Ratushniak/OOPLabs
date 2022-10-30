#ifndef NORMALPIZZABUILDER_H_INCLUDED
#define NORMALPIZZABUILDER_H_INCLUDED

class NormalPizzaBuilder: public IPizzaBuilder
{
private:
    string name;
    int diameter;
    double sauce,
           cheese,
           tomatoes,
           mushrooms,
           corn,
           onion,
           pineapple,
           pepper,
           chicken,
           pepperoni,
           salami,
           bacon;

public:
    NormalPizzaBuilder(int diameter)
    {
        this -> diameter = diameter;
        MyPizza::changeDiffer(diameter);
    }

    ///SettersBegin
    void setName(string name) override
    {
        this -> name = name;
    }
    void setDiameter(int diameter) override
    {
        this -> diameter = diameter;
    }
    void setSauce(double sauce) override
    {
        this -> sauce = sauce * MyPizza::differ;
    }
    void setCheese(double cheese) override
    {
        this -> cheese = cheese * MyPizza::differ;
    }
    void setTomatoes(double tomatoes) override
    {
        this -> tomatoes = tomatoes * MyPizza::differ;
    }
    void setMushrooms(double mushrooms) override
    {
        this -> mushrooms = mushrooms * MyPizza::differ;
    }
    void setCorn(double corn) override
    {
        this -> corn = corn * MyPizza::differ;
    }
    void setOnion(double onion) override
    {
        this -> onion = onion * MyPizza::differ;
    }
    void setPineapple(double pineapple) override
    {
        this -> pineapple = pineapple * MyPizza::differ;
    }
    void setPepper(double pepper) override
    {
        this -> pepper = pepper * MyPizza::differ;
    }
    void setChicken(double chicken) override
    {
        this -> chicken = chicken * MyPizza::differ;
    }
    void setPepperoni(double pepperoni) override
    {
        this -> pepperoni = pepperoni * MyPizza::differ;
    }
    void setSalami(double salami) override
    {
        this -> salami = salami * MyPizza::differ;
    }
    void setBacon(double bacon) override
    {
        this -> bacon = bacon * MyPizza::differ;
    }
    ///SettersEnd

    Pizza * makePizza() override
    {
        ///spendSomeTime....
        Pizza * result = new Pizza(name, diameter, sauce, cheese, tomatoes, mushrooms, corn, onion, pineapple, pepper, chicken, pepperoni, salami, bacon);
        name = "";
        sauce = cheese = tomatoes = mushrooms = corn = onion = pineapple = pepper = chicken = pepperoni = salami = bacon = 0.0;
        return result;
    }
};

#endif // NORMALPIZZABUILDER_H_INCLUDED
