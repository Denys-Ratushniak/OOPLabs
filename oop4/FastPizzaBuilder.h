#ifndef FASTPIZZABUILDER_H_INCLUDED
#define FASTPIZZABUILDER_H_INCLUDED

class FastPizzaBuilder: public IPizzaBuilder
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
    FastPizzaBuilder(int diameter)
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
        this -> sauce = sauce * MyPizza::differ + MyPizza::mistakes();
    }
    void setCheese(double cheese) override
    {
        this -> cheese = cheese * MyPizza::differ + MyPizza::mistakes();
    }
    void setTomatoes(double tomatoes) override
    {
        this -> tomatoes = tomatoes * MyPizza::differ + MyPizza::mistakes();
    }
    void setMushrooms(double mushrooms) override
    {
        this -> mushrooms = mushrooms * MyPizza::differ + MyPizza::mistakes();
    }
    void setCorn(double corn) override
    {
        this -> corn = corn * MyPizza::differ + MyPizza::mistakes();
    }
    void setOnion(double onion) override
    {
        this -> onion = onion * MyPizza::differ + MyPizza::mistakes();
    }
    void setPineapple(double pineapple) override
    {
        this -> pineapple = pineapple * MyPizza::differ + MyPizza::mistakes();
    }
    void setPepper(double pepper) override
    {
        this -> pepper = pepper * MyPizza::differ + MyPizza::mistakes();
    }
    void setChicken(double chicken) override
    {
        this -> chicken = chicken * MyPizza::differ + MyPizza::mistakes();
    }
    void setPepperoni(double pepperoni) override
    {
        this -> pepperoni = pepperoni * MyPizza::differ + MyPizza::mistakes();
    }
    void setSalami(double salami) override
    {
        this -> salami = salami * MyPizza::differ + MyPizza::mistakes();
    }
    void setBacon(double bacon) override
    {
        this -> bacon = bacon * MyPizza::differ + MyPizza::mistakes();
    }
    ///SettersEnd

    Pizza * makePizza() override
    {
        ///spendALittleTime....
        Pizza * result = new Pizza(name, diameter, sauce, cheese, tomatoes, mushrooms, corn, onion, pineapple, pepper, chicken, pepperoni, salami, bacon);
        name = "";
        sauce = cheese = tomatoes = mushrooms = corn = onion = pineapple = pepper = chicken = pepperoni = salami = bacon = 0.0;
        return result;
    }
};

#endif // FASTPIZZABUILDER_H_INCLUDED
