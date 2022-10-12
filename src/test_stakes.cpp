#include"../include/stakes.h"
using std::cout;
using std::cin;
using std::endl;
int main() {
  int buyInChoice = -1;
  int spinChoice = 0;
  int initialCredit = 100;
  int currentCredit = initialCredit;
  int spinNumber;
  int spinNumberSum = 0;
  int buyIn;
  LowerStakes stakesType1;
  MediumStakes stakesType2;
  HigherStakes stakesType3;

  while (buyInChoice != 0 && currentCredit >= 20) {
    Prompt prompt;
    prompt.promptDecision(currentCredit);
    cin >> buyInChoice;
    while (!(buyInChoice == 0 || buyInChoice == 1 || buyInChoice == 2
      || buyInChoice == 3) || (buyInChoice == 3 && currentCredit < 200)) {
        prompt.promptWrongChoice();
        prompt.promptDecision(currentCredit);
        cin >> buyInChoice;
     }
     while (spinChoice != 3 && spinNumberSum <= 20 && buyInChoice != 0) {
      prompt.promptSpinnerChoice();
      cin >> spinChoice;
      cout << "Choice > " << spinChoice << endl;
      while (!(spinChoice == 1 || spinChoice == 2 || spinChoice == 3)) {
          cout << "You entered a wrong choice" << endl << endl;
          prompt.promptSpinnerChoice();
          cin >> spinChoice;
          cout << "Choice > " << spinChoice << endl;
      }
      if (buyInChoice == 1) {
        buyIn = 20;
        if (spinChoice != 3 && spinNumberSum <= 20) {
          stakesType1.setSpinnerChoice(spinChoice);
          spinNumber = stakesType1.getSpinNum(spinChoice);
          cout << "You spun a > " << spinNumber << endl << endl;
          spinNumberSum += spinNumber;
        }
        cout << "Your current total is " << spinNumberSum << endl << endl;
      }
      if (buyInChoice == 2) {
        buyIn = 100;
        if (spinChoice != 3 && spinNumberSum <= 20) {
          stakesType2.setSpinnerChoice(spinChoice);
          spinNumber = stakesType2.getSpinNum(spinChoice);
          cout << "You spun a  > " << spinNumber << endl << endl;
          spinNumberSum += spinNumber;
        }
        cout << "Your current total is " << spinNumberSum << endl << endl;
      }
     if (buyInChoice == 3) {
        buyIn = 200;
        if (spinChoice != 3 && spinNumberSum <= 20) {
          stakesType3.setSpinnerChoice(spinChoice);
          spinNumber = stakesType3.getSpinNum(spinChoice);
          cout << "You spun a > " << spinNumber << endl;
          spinNumberSum += spinNumber;
        }
        cout << "Your current total is " << spinNumberSum << endl;
      }
    }
    if (buyInChoice == 1)
      currentCredit = stakesType1.getCalculatedCredits(spinNumberSum, buyIn,
                                                       currentCredit);
    if (buyInChoice == 2)
      currentCredit = stakesType2.getCalculatedCredits(spinNumberSum, buyIn,
                                                       currentCredit);
    if (buyInChoice == 3)
      currentCredit = stakesType3.getCalculatedCredits(spinNumberSum, buyIn,
                                                       currentCredit);
    cout << "You won " << currentCredit << " credits!" << endl;
    spinChoice = 0;
    spinNumberSum = 0;
  }
  return 0;
}
