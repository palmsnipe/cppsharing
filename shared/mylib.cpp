//
// shared.cpp for cppsharing in /Users/cyrilmorales/Documents/Projects/perso-cppsharing/shared
//
// Made by Cyril Morales
// Email   <palmsnipe@hotmail.com>
//
// Started on  Wed Nov 18 00:10:30 2015 Cyril Morales
// Last update Wed Nov 18 19:47:21 2015 Cyril Morales
//

#include <iostream>
#include <vector>
#include "mylib.h"

const std::string	helloworld() {
  return std::string("Bonjour le monde !!");
}


const std::vector<std::string>	getDays() {
  std::vector<std::string>	list;

  list.push_back(std::string("lundi"));
  list.push_back(std::string("mardi"));
  list.push_back(std::string("mercredi"));
  list.push_back(std::string("jeudi"));
  list.push_back(std::string("vendredi"));
  list.push_back(std::string("samedi"));
  list.push_back(std::string("dimanche"));

  return list;
}
