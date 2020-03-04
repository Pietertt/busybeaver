#include "Busybeaver.h"
#include "card.h"

#include "card.h"
#include "side.h"

#include <vector>

namespace turing {
      Busybeaver::Busybeaver(){
            Busybeaver::deck = std::vector<turing::card>();
            Busybeaver::tape = turing::Tape();
            Busybeaver::current_card = 0;
      }

      // returns the tape as a string
      std::string Busybeaver::print(){
            return Busybeaver::tape.print();
      }

      // adds a new card by creating one and pushing it to the list
      void Busybeaver::add_card(bool what_to_write_zero, bool direction_zero, int next_symbol_zero, bool what_to_write_one, bool direction_one, int next_symbol_one){
                        
            struct side s1 = { what_to_write_zero, direction_zero, next_symbol_zero };
            struct side s2 = { what_to_write_one, direction_one, next_symbol_one };
            struct card card = { s1, s2 };

            Busybeaver::deck.push_back(card);
      }

      bool Busybeaver::playCard(){
            // returns false when the halt symbol is given (in this case '-1')
            if(Busybeaver::current_card == -1){
                  return false;
            }

            // an empty cardside to play with
            side temp;

            // sets the variable 'tempmem' to either the head or tail of the card. 
            // this is based on the return data from the 'read()' function of the tape class
            if(Busybeaver::tape.read()){ // if the current character is a '1'
                  temp = Busybeaver::deck[Busybeaver::current_card].head;
            } else { // if the current character is a '0'
                  temp = Busybeaver::deck[Busybeaver::current_card].tail;
            }

            // write either a 1 or a 0 to the tape. 
            // This is based on the 'what_to_write' variable, which depends on the given input
            Busybeaver::tape.write(temp.what_to_write);

            //shift the tape to either left or right.
            // This is based on the 'should_right' variable, which depens on the given input
            if(temp.direction){
                  Busybeaver::tape.right();
            } else {
                  Busybeaver::tape.left();
            }

            // Increments the 'steps' variable, which counts the total steps the program needs
            Busybeaver::steps = Busybeaver::steps + 1;

            
            Busybeaver::current_card = temp.next_symbol; 

            return true;
      }

      int Busybeaver::getSteps(){
            return Busybeaver::steps;
      }
}