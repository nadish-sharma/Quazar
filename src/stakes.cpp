#include"../include/stakes.h"
using std::cout;
using std::cin;
using std::endl;
void Prompt::promptStartGame(int currCredit) {
  cout << "=====Welcome to Quasar====" << endl << endl;
  cout << "Your current total is " << currCredit << " credits" << endl << endl;
  cout << "How much you want to bet?" << endl;
  cout << "0) 0 credits (exit game)" << endl;
  cout << "1) 20 credits" << endl;
  cout << "2) 100 credits" << endl;
}
void Prompt::promptLowStakesCredit(int currCredit) {
  cout << "=====Welcome to Quasar====" << endl << endl;
  cout << "Your current total is " << currCredit << " credits" << endl << endl;
  cout << "How much you want to bet?" << endl;
  cout << "0) 0 credits (exit game)" << endl;
  cout << "1) 20 credits" << endl;
}
void Prompt::promptHighStakesCredit(int currCredit) {
  cout << "=====Welcome to Quasar====" << endl << endl;
  cout << "Your current total is " << currCredit << " credits" << endl << endl;
  cout << "How much you want to bet?" << endl;
  cout << "0) 0 credits (exit game)" << endl;
  cout << "1) 20 credits" << endl;
  cout << "2) 100 credits" << endl;
  cout << "3) 200 credits" << endl;
}
void Prompt::promptSpinnerChoice() {
  cout << "What do you want to do?" << endl;
  cout << "1) Spin 4-7 spinner" << endl;
  cout << "2) Spin 1-8 spinner" << endl;
  cout << "3) Stop spinning " << endl;
}
void Prompt::promptWrongChoice() {
  cout<< "You have entered a wrong choice" << endl;
  cout<< "Please Re-enter your choice" << endl;
}
void Prompt::promptDecision(int currCredit) {
  if (currCredit >= 100 && currCredit < 200) {
    promptStartGame(currCredit);
  }
  if (currCredit >= 200) {
    promptHighStakesCredit(currCredit);
  }
  if (currCredit >= 20 && currCredit < 100) {
    promptLowStakesCredit(currCredit);
  }
}
int MediumStakes::mediumRandomSpinOneToEight(int min, int max) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution < std::mt19937::result_type > dist6(1, 8);
  int number = dist6(rng);
  return number;
}
int MediumStakes::mediumRandomSpinFourToSeven(int min, int max) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution < std::mt19937::result_type > dist6(4, 7);
  int number = dist6(rng);
  return number;
}
void MediumStakes::setSpinnerChoice(int c) {
  spinnerChoice = c;
}
int MediumStakes::getSpinNum(int spinChoice) {
  spinnerChoice = spinChoice;
  if (spinnerChoice == 1)
    spinNum = mediumRandomSpinFourToSeven(4, 7);
  if (spinnerChoice == 2)
    spinNum = mediumRandomSpinOneToEight(1, 8);
  return spinNum;
}
int MediumStakes::getCalculatedCredits(int spinNumberSum, int buyIn,
                                       int currCredit) {
  if (spinNumberSum <= 14 || spinNumberSum > 20)
    currentCredit = currCredit - buyIn;
  if (spinNumberSum == 15)
    currentCredit = currCredit - (1 - 0.25) * buyIn;
  if (spinNumberSum == 16)
    currentCredit = currCredit - (1 - 0.50) * buyIn;
  if (spinNumberSum == 18)
    currentCredit = currCredit + (0.25) * buyIn;
  if (spinNumberSum == 19)
    currentCredit = currCredit + (0.50) * buyIn;
  if (spinNumberSum == 20)
    currentCredit = currCredit + (1.0) * buyIn;
  return currentCredit;
}
int LowerStakes::lowerRandomSpinOneToEight(int min, int max) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution < std::mt19937::result_type > dist6(1, 4);
  int number = dist6(rng);
  return number;
}
int LowerStakes::lowerRandomSpinFourToSeven(int min, int max) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution < std::mt19937::result_type > dist6(4, 5);
  int number = dist6(rng);
  return number;
}
void LowerStakes::setSpinnerChoice(int c) {
  spinnerChoice = c;
}
int LowerStakes::getSpinNum(int spinChoice) {
  spinnerChoice = spinChoice;
  if (spinnerChoice == 1)
    spinNum = lowerRandomSpinFourToSeven(4, 5);
  if (spinnerChoice == 2)
    spinNum = lowerRandomSpinOneToEight(1, 4);
  return spinNum;
}
int LowerStakes::getCalculatedCredits(int spinNumberSum, int buyIn,
                                      int currCredit) {
  if (spinNumberSum <= 14 || spinNumberSum > 20)
    currentCredit = currCredit - buyIn;
  if (spinNumberSum == 15)
    currentCredit = currCredit - (1 - 0.25) * buyIn;
  if (spinNumberSum == 16)
    currentCredit = currCredit - (1 - 0.50) * buyIn;
  if (spinNumberSum == 18)
    currentCredit = currCredit + (0.25) * buyIn;
  if (spinNumberSum == 19)
    currentCredit = currCredit + (0.50) * buyIn;
  if (spinNumberSum == 20)
    currentCredit = currCredit + (1.0) * buyIn;
  return currentCredit;
}
int HigherStakes::higherRandomSpinOneToEight(int min, int max) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution < std::mt19937::result_type > dist6(5, 8);
  int number = dist6(rng);
  return number;
}
int HigherStakes::higherRandomSpinFourToSeven(int min, int max) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution < std::mt19937::result_type > dist6(7, 8);
  int number = dist6(rng);
  return number;
}
void HigherStakes::setSpinnerChoice(int c) {
  spinnerChoice = c;
}
int HigherStakes::getSpinNum(int spinChoice) {
  spinnerChoice = spinChoice;
  if (spinnerChoice == 1)
    spinNum = higherRandomSpinFourToSeven(7, 8);
  if (spinnerChoice == 2)
    spinNum = higherRandomSpinOneToEight(5, 8);
  return spinNum;
}
int HigherStakes::getCalculatedCredits(int spinNumberSum, int buyIn,
                                       int currCredit) {
  if (spinNumberSum <= 14 || spinNumberSum > 20)
    currentCredit = currCredit - buyIn;
  if (spinNumberSum == 15)
    currentCredit = currCredit - (1 - 0.25) * buyIn;
  if (spinNumberSum == 16)
    currentCredit = currCredit - (1 - 0.50) * buyIn;
  if (spinNumberSum == 18)
    currentCredit = currCredit + (0.25) * buyIn;
  if (spinNumberSum == 19)
    currentCredit = currCredit + (0.50) * buyIn;
  if (spinNumberSum == 20)
    currentCredit = currCredit + (1.0) * buyIn;
  return currentCredit;
}
