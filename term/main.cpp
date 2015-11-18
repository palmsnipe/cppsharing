#include "mylib.h"

int	main(int argc, char **argv) {

  //   std::string str = helloworld();
  //   std::cout << str << std::endl;

  std::vector<std::string> list = getDays();

  for (int i = 0; i < list.size(); i++) {
    std::cout << list[i] << std::endl;
  }

  return 0;
}
