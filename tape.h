#ifndef TAPE_H
#define TAPE_H

#include <string>

namespace turing {
      class Tape {
            public:
                  bool read();
                  std::string print();
                  void write(bool write_bit);
                  void left();
                  void right();
            private:
                  std::string tape = "0";
                  int position = 0;
      };
}

#endif