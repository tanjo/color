#include <iostream>

std::string sixteen(int i) {
  switch(i) {
    case 0: return "0";
    case 1: return "1";
    case 2: return "2";
    case 3: return "3";
    case 4: return "4";
    case 5: return "5";
    case 6: return "6";
    case 7: return "7";
    case 8: return "8";
    case 9: return "9";
    case 10: return "A";
    case 11: return "B";
    case 12: return "C";
    case 13: return "D";
    case 14: return "E";
    case 15: return "F";
    default: return "";
  }
}

int main() {
  for (int a = 0; a < 16; a++) {
    std::string as = sixteen(a);

    for (int b = 0; b < 16; b++) {
      std::string bs = sixteen(b);

      for (int c = 0; c < 16; c++) {
        std::string cs = sixteen(c);

        for (int d = 0; d < 16; d++) {
          std::string ds = sixteen(d);

          for (int e = 0; e < 16; e++) {
            std::string es = sixteen(e);

            for (int f = 0; f < 16; f++) {
              std::string fs = sixteen(f);
              std::string result = as + bs + cs + ds + es + fs;
              std::cout << "<div style=\"background-color:#" << result << "\">#" << result << "</div>" << std::endl;
            }
          }
        }
      }
    }
  }
  return 0;
}
