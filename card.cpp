#include "card.h"
#include "beaver_card_side.h"

#include <iostream>
#include <string>

namespace turing {
      Card::Card(bool what_to_write_zero, bool should_right_zero, int next_symbol_zero, bool what_to_write_one, bool should_right_one, int next_symbol_one){
           
            Card::sideZero.what_to_write = what_to_write_zero;
            Card::sideZero.should_right = should_right_zero;
            Card::sideZero.next_symbol = next_symbol_zero;

            Card::sideOne.what_to_write = what_to_write_one;
            Card::sideOne.should_right = should_right_one;
            Card::sideOne.next_symbol = next_symbol_one;
      }

      turing::Card_side Card::getSideZero(){
            return Card::sideZero;
      }

      void Card::setSideZero(turing::Card_side card){
            Card::sideZero = card;
      }

      turing::Card_side Card::getSideOne(){
            return Card::sideOne;
      }

      void Card::setSideOne(turing::Card_side card){
            Card::sideOne = card;
      }
}