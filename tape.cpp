#include "tape.h"

#include <iostream>
#include <string>

namespace turing {
      
      // return either true or false based on the character on the current position
      bool Tape::read(){
            
            if(Tape::tape[Tape::position] == '0'){
                  return false;
            } else {
                  return true;
            }
      }

      // returns the tape as a string
      std::string Tape::print(){
            return Tape::tape;
      }

      // writes either a '1' or a '0' to the tape based on the input (true or false)
      void Tape::write(bool write_bit){
            if(write_bit){
                  Tape::tape[Tape::position] = '1';
            } else {
                  Tape::tape[Tape::position] = '0';
            }
      }

      // Prepends a '0' to the tape when the current position reaches 0, or decreases the position of the reader by one
      void Tape::left(){
            if(Tape::position == 0){
                  Tape::tape = '0' + Tape::tape;
            } else {
                  Tape::position = Tape::position - 1;
            }
      }

      // Appends a '0' to the tape when the position is at the end
      void Tape::right(){
            Tape::position = Tape::position + 1;
            if(Tape::position > (Tape::tape.length() - 1)){
                  Tape::tape = Tape::tape + '0';
            }
      }
}
