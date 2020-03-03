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

      bool Card_side::is_what_to_write(){
            return Card_side::what_to_write;
      }

      void Card_side::set_what_to_write(bool set_what_to_write){
            Card_side::what_to_write = set_what_to_write;
      }

      bool Card_side::is_should_right(){
            return Card_side::should_right;
      }

      void Card_side::set_should_right(bool should_right){
            Card_side::should_right = should_right;
      }

      int Card_side::get_next_symbol(){
            return Card_side::next_symbol;
      }

      void Card_side::set_next_symbol(int next_symbol){
            Card_side::next_symbol = next_symbol;
      }
}