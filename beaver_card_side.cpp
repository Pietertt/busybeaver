#include "beaver_card_side.h"

#include <iostream>
#include <string>

namespace turing {
      Card_side::Card_side(){
            
      }

      Card_side::Card_side(bool what_to_write, bool should_right, int next_symbol){
            Card_side::what_to_write = what_to_write;
            Card_side::should_right = should_right;
            Card_side::next_symbol = next_symbol;
      }
}