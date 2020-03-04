#include <iostream>
#include <chrono>

#include "tape.h"
#include "Busybeaver.h"
int main(){
      std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
      std::cout << "Started!" << std::endl;

      // what to write, should right, next symbol
      turing::Busybeaver beaver;
      beaver.add_card(  1, true,  1,    1, false,  2  );
      beaver.add_card(  1, true,  2,    1, true,   1  );
      beaver.add_card(  1, true,  3,    0, false,  4  );
      beaver.add_card(  1, false, 0,    1, false,  3  );
      beaver.add_card(  1, true,  -1,   0, false,  0  );

      while(beaver.playCard()){
            //std::cout << beaver.print() << std::endl;
      }

      std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
      std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1);
      std::cout << "It took the beaver " << time_span.count() << " seconds" << std::endl;
      std::cout << "Steps: " << beaver.getSteps() << std::endl;

      return 0;
}