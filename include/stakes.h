#ifndef STAKES_H
#define STAKES_H
#include <iostream>
#pragma once
#include <string>
#include <random>
using std::cout;
using std::cin;
using std::endl;

class Prompt {
 public:
  void promptStartGame(int currCredit);
  void promptLowStakesCredit(int currCredit);
  void promptHighStakesCredit(int currCredit);
  void promptSpinnerChoice();
  void promptWrongChoice();
  void promptDecision(int currCredit);
};
class MediumStakes {
 public:
  int mediumRandomSpinOneToEight(int min, int max);
  int mediumRandomSpinFourToSeven(int min, int max);
  void setSpinnerChoice(int c);
  int getSpinnerChoice();
  int addSpinNum(int a);
  int getSpinNum(int d);
  int getCalculatedCredits(int b, int e, int f);

 protected:
  int spinNum = 0;
  int choice;
  int buyIn;
  int initialCredit = 100;
  int currentCredit = initialCredit;
  int spinnerChoice;
};
class LowerStakes {
 public:
  int lowerRandomSpinOneToEight(int min, int max);
  int lowerRandomSpinFourToSeven(int min, int max);
  void setSpinnerChoice(int c);
  int getSpinnerChoice();
  int addSpinNum(int a);
  int getSpinNum(int d);
  int getCalculatedCredits(int b, int e, int f);
 protected:
  int spinNum = 0;
  int spinNumSum = 0;
  int choice;
  int buyIn;
  int initialCredit = 100;
  int currentCredit = initialCredit;
  int spinnerChoice;
};
class HigherStakes {
 public:
  int higherRandomSpinOneToEight(int min, int max);
  int higherRandomSpinFourToSeven(int min, int max);
  void setSpinnerChoice(int c);
  int getSpinnerChoice();
  int addSpinNum(int a);
  int getSpinNum(int d);
  int getCalculatedCredits(int b, int e, int f);
 protected:
  int spinNum = 0;
  int choice;
  int buyIn;
  int initialCredit = 100;
  int currentCredit = initialCredit;
  int spinnerChoice;
};
#endif
