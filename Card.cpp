#include "Card.h"
#include <iostream>
using namespace std;

Card::Card() {};

Card::Card(char r, char s)
{
  rank = r;
  suit = s;
}

void Card::setCard(char r, char s )
{
  rank = r;
  suit = s;
}
