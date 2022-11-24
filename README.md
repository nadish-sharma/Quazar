# Quazar

GAME
Description of the game:

1. Play Quazar. The game will support playing Quazar.
  * The game is similar to Blackjack or 21.
  * The object of the game is to get as close to the number 20 by selecting to spin one of
  two different spinners.
  * After each spin, the player can choose to “stand”, meaning they don’t spin any more.
  * The two spinners have produce numbers from two different ranges: 4-7 and 1-8.
  * The game pays out using the following rules:
    * <= 14 or > 20: 0 credits (i.e. player loses their buy-in)
    * 15: 25% (e.g. if buy-in is 20 credits, the player gains 5 credits).
    * 16: 50% (e.g. if buy-in is 20 credits, the player gains 10 credits).
    * 17: 100% (e.g. if buy-in is 20 credits, the player gains 20 credits).
    * 18: 125% (e.g. if buy-in is 20 credits, the player gains 25 credits).
    * 19: 150% (e.g. if buy-in is 20 credits, the player gains 30 credits).
    * 20: 200% (e.g. if buy-in is 20 credits, the player gains 40 credits).
  * The player begins a gaming session with 100 credits.
    * The player will not be able to play the High Stakes level until they have won
    * a few games.
  * If a player has less than 20 credits, the game ends.
  * The player can choose to leave the session after any game.
  
2. Three betting levels. The game will have three betting levels:
  * Low Stakes: 20 credit buy-in.
  * Medium Stakes: 100 credit buy-in.
  * High Stakes: 200 credit buy-in.
3. Three spinners: Each betting level has a spinner that behaves differently: 
4. Low Stakes: The spinner favours the player (i.e. get them hooked). This spinner
   produces more low numbers which inceases the likelihood of the player reaching
   20.
  * Medium Stakes: The spinner is fair. All numbers are equally likely.
  * High Stakes: The spinner is favours the house (i.e. cheats the player). This spinner
  * produces more high numbers which inceases the likelihood of the player going over
  * 20.
4. Robust. Error-checking to prevent program crashing (i.e. validating all input from the user)
