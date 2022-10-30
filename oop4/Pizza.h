#ifndef PIZZA_H_INCLUDED
#define PIZZA_H_INCLUDED

class Pizza: public IDish
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
    Pizza(string name, int diameter, double sauce, double cheese, double tomatoes,
          double mushrooms, double corn, double onion, double pineapple, double pepper, double chicken, double pepperoni, double salami, double bacon)
    {
        this -> name = name;
        this -> diameter = diameter;
        this -> sauce = sauce;
        this -> cheese = cheese;
        this -> tomatoes = tomatoes;
        this -> mushrooms = mushrooms;
        this -> corn = corn;
        this -> onion = onion;
        this -> pineapple = pineapple;
        this -> pepper = pepper;
        this -> chicken = chicken;
        this -> pepperoni = pepperoni;
        this -> salami = salami;
        this -> bacon = bacon;
    }
    ///GettersBegin
    string getName()
    {
        return name;
    }
    double getDiameter()
    {
        return diameter;
    }
    double getSauce()
    {
        return sauce;
    }
    double getCheese()
    {
        return cheese;
    }
    double getTomatoes()
    {
        return tomatoes;
    }
    double getMushrooms()
    {
        return mushrooms;
    }
    double getCorn()
    {
        return corn;
    }
    double getOnion()
    {
        return onion;
    }
    double getPineapple()
    {
        return pineapple;
    }
    double getPepper()
    {
        return pepper;
    }
    double getChicken()
    {
        return chicken;
    }
    double getPepperoni()
    {
        return pepperoni;
    }
    double getSalami()
    {
        return salami;
    }
    double getBacon()
    {
        return bacon;
    }
    ///GettersEnd

    void calculateThenPrintPrice() override
    {
        double price = 0.00;
        price += 0.05 * diameter;
        price += 0.10 * sauce;
        price += 0.15 * cheese;
        price += 0.20 * tomatoes;
        price += 0.25 * mushrooms;
        price += 0.30 * corn;
        price += 0.35 * onion;
        price += 0.40 * pineapple;
        price += 0.45 * pepper;
        price += 0.50 * chicken;
        price += 0.55 * pepperoni;
        price += 0.60 * salami;
        price += 0.65 * bacon;

        cout << "Price of " << name << " pizza which is " << diameter << " inches is " << price << " dollars" << endl;
        return;
    }
};

#endif // PIZZA_H_INCLUDED
