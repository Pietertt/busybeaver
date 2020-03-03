#ifndef BEAVER_CARD_SIDE_H
#define BEAVER_CARD_SIDE_H

namespace turing {
      class Card_side {
            public:
                  Card_side();
                  Card_side(bool what_to_write, bool should_right, int next_symbol);
                  bool is_what_to_write();
                  void set_what_to_write(bool what_to_write);
                  bool is_should_right();
                  void set_should_right(bool should_right);
                  int get_next_symbol();
                  void set_next_symbol(int next_symbol);
                  bool what_to_write;
                  bool should_right;
                  int next_symbol;
            private:
                  bool what_to_write = false;
                  bool should_right = false;
                  int next_symbol = -1;
      };
}

#endif