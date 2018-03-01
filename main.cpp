#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int input;
  int wins;
  cout<<"How many times would you like to play?\n";
  cin>>input;
  for(int x=0; x<input; x++)
  {
   game.newGame();
   game.guessDoorC();
   game.guessDoorC();
   if(game.isWinner()== true)
   {
     wins++;
   }
  }
   cout<<"You've won "<<wins<<" times\n";
  return 0;
}
