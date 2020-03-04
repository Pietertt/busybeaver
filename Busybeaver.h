#ifndef BUSYBEAVER_H
#define BUSYBEAVER_H

#include "tape.h"

#include "card.h"

#include <vector>

namespace turing {
      class Busybeaver {
      public:
            Busybeaver();
            std::string print();
            void add_card(bool what_to_write_zero, bool direction_zero, int next_symbol_zero, bool what_to_write_one, bool direction_one, int next_symbol_one);
            bool playCard();
            int getSteps();
      private: 
            std::vector<turing::card> deck;
            int current_card;
            turing::Tape tape;
            int steps;
      };
}

#endif