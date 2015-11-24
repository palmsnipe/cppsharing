#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "mylib.h"

int	main(int argc, char **argv) {

  //   std::string str = helloworld();
  //   std::cout << str << std::endl;

  //   std::vector<std::string> list = getDays();

  //   for (int i = 0; i < list.size(); i++) {
  //     std::cout << list[i] << std::endl;
  //   }
  // getFile();

  const char* json = "{\"project\":\"rapidjson\",\"stars\":10}";
  rapidjson::Document d;
  d.Parse(json);

  // 2. Modify it by DOM.
  rapidjson::Value& s = d["stars"];
   s.SetInt(s.GetInt() + 1);

//   // 3. Stringify the DOM
   rapidjson::StringBuffer buffer;
   rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
  d.Accept(writer);

  // Output {"project":"rapidjson","stars":11}
  std::cout << buffer.GetString
   () << std::endl;

  return 0;
}
