#ifndef BEAVER_CARD_SIDE_H
#define BEAVER_CARD_SIDE_H

namespace turing {
      class Card_side {
            public:
                  Card_side();
                  Card_side(bool what_to_write, bool should_right, int next_symbol);
                  bool what_to_write;
                  bool should_right;
                  int next_symbol;
            private:
      };
}

#endif