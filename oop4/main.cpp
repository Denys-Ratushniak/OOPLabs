#include "librariesClassesNamespaces.h"

#include "IDish.h"

#include "Pizza.h"

#include "IPizzaBuilder.h"

#include "PizzaDirector.h"

#include "NormalPizzaBuilder.h"

#include "FastPizzaBuilder.h"

int main()
{
    srand(clock());
    MyPizza::defaultDiameterOfPizza = 8;
    auto injector = boost::di::make_injector(boost::di::bind < int > .to(8));
    cout << "Hello. Welcome to our pizzeria. What type of dish do you want to order?" << endl;
    cout << "If it is pizza write 1" << endl;

    int typeOfDish;
    cin >> typeOfDish;
    if (typeOfDish == 1)
    {
        cout << "That`s nice choice! By default diameter of our pizza is " << MyPizza::defaultDiameterOfPizza << " inches." << endl;
        cout << "We have an option to make a pizza with diameter of 12 inches. If you wanna it write 1. If not - write 0" << endl;
        int change;
        cin >> change;
        if (change == 1)
        {
            injector = boost::di::make_injector(boost::di::bind < int > .to(12));
        }

        cout << "We have 2 chefs. One can make a pizza in a 25 minutes." << endl;
        cout << "Other can make a pizza in a 15 minutes, but there may be a little extra grams(0-0.2) of each ingredient" << endl;
        cout << "So if you want your pizza have been made quickly write 1, if not - write 2" << endl;
        int typeOfChef;
        cin >> typeOfChef;

        auto normalChef = injector.create < NormalPizzaBuilder > ();
        auto fastChef = injector.create < FastPizzaBuilder > ();

        PizzaDirector * BOSS = new PizzaDirector();

        if (typeOfChef == 1) BOSS -> setPizzaBuilder( & fastChef);
        else BOSS -> setPizzaBuilder( & normalChef);

        int typeOfPizza, ifOK;

        while (1)
        {
            cout << "Here is our opportunities: " << endl;
            cout << "Write 1 if you wanna order Pepperoni pizza" << endl;
            cout << "Write 2 if you wanna order Salami pizza" << endl;
            cout << "Write 3 if you wanna order Vegetarian pizza" << endl;
            cout << "Write 4 if you wanna order Custom pizza" << endl;
            cin >> typeOfPizza;
            if (typeOfPizza == 1) BOSS -> makePepperoniPizza();
            if (typeOfPizza == 2) BOSS -> makeSalamiPizza();
            if (typeOfPizza == 3) BOSS -> makeVegetarianPizza();
            if (typeOfPizza == 4) BOSS -> makeCustomPizza();
            Pizza * pizza;

            if (typeOfChef == 1) pizza = fastChef.makePizza();
            else pizza = normalChef.makePizza();

            pizza -> calculateThenPrintPrice();
            cout << "Now write 1 if you are not satisfied with price and you wanna choose other type of pizza" << endl;
            cout << "Write 2 in other case" << endl;
            cin >> ifOK;
            if (ifOK == 2) break;
        }
    }
    else
    {

        exit(0);
    }
    cout << "Thank you for visiting us, all the best!" << endl;

    return 0;
}
