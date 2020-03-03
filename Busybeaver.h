#ifndef BUSYBEAVER_H
#define BUSYBEAVER_H

#include "card.h"
#include "tape.h"

#include <vector>

namespace turing {
      class Busybeaver {
      public:
            Busybeaver(bool what_to_write_zero, bool should_right_zero, int next_symbol_zero, bool what_to_write_one, bool should_right_one, int next_symbol_one);
            std::string print();
            void add_card(bool what_to_write_zero, bool should_right_zero, int next_symbol_zero, bool what_to_write_one, bool should_right_one, int next_symbol_one);
            bool playCard();
            int getSteps();
      private: 
            std::vector<turing::Card> deck;
            int current_card;
            turing::Tape tape;
            int steps;
      };
}

#endif