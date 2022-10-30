#ifndef LIBRARIESCLASSESNAMESPACES_H_INCLUDED
#define LIBRARIESCLASSESNAMESPACES_H_INCLUDED

#include <bits/stdc++.h>

#include "boost/di.hpp"

class IDish;
class Pizza;
class IPizzaBuilder;
class NormalPizzaBuilder;
class FastPizzaBuilder;
class PizzaDirector;

using namespace std;

namespace MyPizza
{
int defaultDiameterOfPizza = 1;

float differ = 1;

void changeDiffer(int nowDiameter)
{
    differ = pow((float) nowDiameter / (float) defaultDiameterOfPizza, 2);
    return;
}

float mistakes()
{
    return float(rand() % 20) / 100.0;
}
}

#endif // LIBRARIESCLASSESNAMESPACES_H_INCLUDED
