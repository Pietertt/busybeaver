#include "Busybeaver.h"
#include "card.h"
#include "beaver_card_side.h"

#include <vector>

namespace turing {
      Busybeaver::Busybeaver(bool what_to_write_zero, bool should_right_zero, int next_symbol_zero, bool what_to_write_one, bool should_right_one, int next_symbol_one){
            Busybeaver::deck = std::vector<turing::Card>();
            Busybeaver::tape = turing::Tape();
            Busybeaver::current_card = 0;

            
            Busybeaver::add_card(what_to_write_zero, should_right_zero, next_symbol_zero, what_to_write_one, should_right_one, next_symbol_one);
      }

      // returns the tape as a string
      std::string Busybeaver::print(){
            return Busybeaver::tape.print();
      }

      
      void Busybeaver::add_card(bool what_to_write_zero, bool should_right_zero, int next_symbol_zero, bool what_to_write_one, bool should_right_one, int next_symbol_one){
            
            Card card(what_to_write_zero, should_right_zero, next_symbol_zero, what_to_write_one, should_right_one, next_symbol_one);
            
            Busybeaver::deck.push_back(card);
      }

      bool Busybeaver::playCard(){
            // returns false when the halt symbol is given (in this case '-1')
            if(Busybeaver::current_card == -1){
                  return false;
            }

            Card_side tempmem;

            // sets the variable 'tempmem' to either the head or tail of the card. 
            // this is based on the return data from the 'read()' function of the tape class
            if(Busybeaver::tape.read()){
                  tempmem = Busybeaver::deck[Busybeaver::current_card].getSideOne();
            } else {
                  tempmem = Busybeaver::deck[Busybeaver::current_card].getSideZero();
            }

            // write either a 1 or a 0 to the tape. 
            // This is based on the 'what_to_write' variable, which depends on the given input
            Busybeaver::tape.write(tempmem.is_what_to_write());

            //shift the tape to either left or right.
            // This is based on the 'should_right' variable, which depens on the given input
            if(tempmem.is_should_right()){
                  Busybeaver::tape.right();
            } else {
                  Busybeaver::tape.left();
            }

            // Increments the 'steps' variable, which counts the total steps the program needs
            Busybeaver::steps = Busybeaver::steps + 1;

            
            Busybeaver::current_card = tempmem.get_next_symbol(); 

            return true;
      }

      int Busybeaver::getSteps(){
            return Busybeaver::steps;
      }
}