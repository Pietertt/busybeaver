#ifndef CARD_H
#define CARD_H

#include "beaver_card_side.h"

namespace turing {
      class Card {
            public:
                  Card(bool what_to_write_zero, bool should_right_zero, int next_symbol_zero, bool what_to_write_one, bool should_right_one, int next_symbol_one);
                  turing::Card_side getSideZero();
                  void setSideZero(turing::Card_side);
                  turing::Card_side getSideOne();
                  void setSideOne(turing::Card_side);
            private:
                  turing::Card_side sideZero;
                  turing::Card_side sideOne;
      };
}

#endif