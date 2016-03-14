#include <iostream>
#include "constants.h"

void distanceFallen(int seconds, double towerHeight)
{
  if((towerHeight - (GRAVITY*seconds*seconds/2)) >= 0)
    cout << "At " << seconds << " seconds, the ball is at height: " << towerHeight - (GRAVITY*seconds*seconds/2) << " meters."
  else
    cout << "At " << seconds << " seconds, the ball is at height: 0 meters."
}

int main()
{
  using namespace std;
  double towerHeight;
  
  cout << "Enter the initial height of the tower in meters: " << endl;
  cin >> towerHeight;
  
  distanceFallen(0,towerHeight);
  distanceFallen(1,towerHeight);
  distanceFallen(2,towerHeight);
  distanceFallen(3,towerHeight);
  distanceFallen(4,towerHeight);
  distanceFallen(5,towerHeight);
  
  return 0;
}
