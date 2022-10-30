#ifndef PIZZADIRECTOR_H_INCLUDED
#define PIZZADIRECTOR_H_INCLUDED

class PizzaDirector
{
private:
    IPizzaBuilder * pizzaBuilder;

public:
    void setPizzaBuilder(IPizzaBuilder * pizzaBuilder)
    {
        this -> pizzaBuilder = pizzaBuilder;
    }

    void makePepperoniPizza()
    {
        this -> pizzaBuilder -> setName("Pepperoni");
        this -> pizzaBuilder -> setPepperoni(100);
        this -> pizzaBuilder -> setPepper(10);
        this -> pizzaBuilder -> setCheese(30);
        this -> pizzaBuilder -> setSauce(10);
    }

    void makeSalamiPizza()
    {
        this -> pizzaBuilder -> setName("Salami");
        this -> pizzaBuilder -> setSalami(110);
        this -> pizzaBuilder -> setOnion(10);
        this -> pizzaBuilder -> setTomatoes(30);
        this -> pizzaBuilder -> setCheese(20);
        this -> pizzaBuilder -> setSauce(10);
    }

    void makeVegetarianPizza()
    {
        this -> pizzaBuilder -> setName("Vegetarian");
        this -> pizzaBuilder -> setOnion(10);
        this -> pizzaBuilder -> setTomatoes(50);
        this -> pizzaBuilder -> setCheese(30);
        this -> pizzaBuilder -> setSauce(15);
        this -> pizzaBuilder -> setCorn(30);
        this -> pizzaBuilder -> setPineapple(30);
    }

    void makeCustomPizza()
    {
        this -> pizzaBuilder -> setName("Custom");

        vector < string > ingredients =
        {
            "sauce",
            "cheese",
            "tomatoes",
            "mushrooms",
            "corn",
            "onion",
            "pineapple",
            "pepper",
            "chicken",
            "pepperoni",
            "salami",
            "bacon"
        };
        double grams;
        for (string nowIngredient: ingredients)
        {
            cout << "How many grams of " << nowIngredient << " do you wish? Please, input it. Range - [0 - " << 100 * MyPizza::differ << "]. Another number means 0" << endl;
            cin >> grams;
            if (grams < 0 || grams > 100 * MyPizza::differ) grams = 0;

            if (nowIngredient == "sauce") this -> pizzaBuilder -> setSauce(grams / MyPizza::differ);
            if (nowIngredient == "cheese") this -> pizzaBuilder -> setCheese(grams / MyPizza::differ);
            if (nowIngredient == "tomatoes") this -> pizzaBuilder -> setTomatoes(grams / MyPizza::differ);
            if (nowIngredient == "mushrooms") this -> pizzaBuilder -> setMushrooms(grams / MyPizza::differ);
            if (nowIngredient == "corn") this -> pizzaBuilder -> setCorn(grams / MyPizza::differ);
            if (nowIngredient == "onion") this -> pizzaBuilder -> setOnion(grams / MyPizza::differ);
            if (nowIngredient == "pineapple") this -> pizzaBuilder -> setPineapple(grams / MyPizza::differ);
            if (nowIngredient == "pepper") this -> pizzaBuilder -> setPepper(grams / MyPizza::differ);
            if (nowIngredient == "chicken") this -> pizzaBuilder -> setChicken(grams / MyPizza::differ);
            if (nowIngredient == "pepperoni") this -> pizzaBuilder -> setPepperoni(grams / MyPizza::differ);
            if (nowIngredient == "salami") this -> pizzaBuilder -> setSalami(grams / MyPizza::differ);
            if (nowIngredient == "bacon") this -> pizzaBuilder -> setBacon(grams / MyPizza::differ);
        }
    }
};

#endif // PIZZADIRECTOR_H_INCLUDED
