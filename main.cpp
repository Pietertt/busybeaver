#include <iostream>
#include <chrono>

#include "tape.h"
#include "Busybeaver.h"
#include "beaver_card_side.h"

int main(){
      // std::cout << tape.print() << std::endl;
      // tape.write(true);
      // tape.right();
      // tape.right();
      // tape.write(true);
      // tape.left();
      // tape.left();
      // tape.left();
      // tape.left();
      // tape.write(true); 
      // std::cout << tape.print() << std::endl;
      // std::cout << tape.read() << std::endl;
      // tape.right();
      // std::cout << tape.read() << std::endl;

      //turing::Busybeaver B(true, true, 1, true, false, 1);
      //B.add_card(true, false, 0, true, true, -1);

      // turing::Busybeaver beaver(true, true, 1, true, true, -1);
      // beaver.add_card(false, true, 2, true, true, 1);
      // beaver.add_card(true, false, 2, true, false, 0);

      // turing::Busybeaver beaver(true, true, 1, true, false, 1);
      // beaver.add_card(true, false, 0, false, false, 2);
      // beaver.add_card(true, true, -1, true, false, 3);
      // beaver.add_card(true, true, 3, false, true, 0);

      // turing::Busybeaver beaver(true, true, 1, true, false, 2);
      // beaver.add_card(true, true, 2, true, true, 1);
      // beaver.add_card(true, true, 3, false, false, 4);
      // beaver.add_card(true, false, 0, true, false, 3);
      // beaver.add_card(true, true, -1, false, false, 0);

      std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
      std::cout << "Started!" << std::endl;

      // what to write, should right, next symbol
      turing::Busybeaver beaver(1, true, 1, 1, false, 2);
      beaver.add_card(1, true, 2, 1, true, 1);
      beaver.add_card(1, true, 3, 0, false, 4);
      beaver.add_card(1, false, 0, 1, false, 3);
      beaver.add_card(1, true, -1, 0, false, 0);

      while(beaver.playCard()){
            //std::cout << beaver.print() << std::endl;
      }

      std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
      std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1);
      std::cout << "Ik took the beaver " << time_span.count() << " seconds" << std::endl;
      std::cout << "Steps: " << beaver.getSteps() << std::endl;

      return 0;
}