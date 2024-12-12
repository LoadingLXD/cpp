#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
bool won = false;
bool canplayhere = true;
int play[2];
string boxes[3][3] = 
{
{"-","-","-"},
{"-","-","-"},
{"-","-","-"}
};
// prints game
for(int i = 0; i < sizeof(boxes) / sizeof(boxes[0]); i++)
{
for(int j = 0; j < sizeof(boxes) / sizeof(boxes[0]); j++)
{
cout << boxes[i][j] << "  ";
}
cout << "\n";

}
// end for loop 

while (won == false)
{
    


// X turn ------------
cout << "enter x in rows and columns: \n";
cin >> play[1] >> play[2];
// check if played before
if(boxes[play[2]-1][play[1]-1] == "-") 
{
    canplayhere = true;
boxes[play[2]-1][play[1]-1] = "x";
}
else {
    canplayhere = false;
    cout << "you already played here!";
}
//checks if can play
while (canplayhere == false)
{
  cout << "enter x in rows and columns: \n";
cin >> play[1] >> play[2];
// check if played before
if(boxes[play[2]-1][play[1]-1] == "-") 
{
    canplayhere = true;
boxes[play[2]-1][play[1]-1] = "x";
}
else {
    canplayhere = false;
    cout << "you already played here!";
}
}
// prints game another time
for(int i = 0; i < sizeof(boxes) / sizeof(boxes[0]); i++)
{
for(int j = 0; j < sizeof(boxes) / sizeof(boxes[0]); j++)
{
cout << boxes[i][j] << "  ";
}
cout << "\n";

}
// o turn ------------
cout << "enter o in rows and columns: \n";
cin >> play[1] >> play[2];
// check if played before
if(boxes[play[2]-1][play[1]-1] == "-") 
{
    canplayhere = true;
boxes[play[2]-1][play[1]-1] = "o";
}
else {
    canplayhere = false;
    cout << "you already played here! \n";
}
//checks if can play
while (canplayhere == false)
{
  cout << "enter o in rows and columns: \n";
cin >> play[1] >> play[2];
// check if played before
if(boxes[play[2]-1][play[1]-1] == "-") 
{
    canplayhere = true;
boxes[play[2]-1][play[1]-1] = "o";
}
else {
    canplayhere = false;
    cout << "you already played here! \n";
}
}
// prints game another time
for(int i = 0; i < sizeof(boxes) / sizeof(boxes[0]); i++)
{
for(int j = 0; j < sizeof(boxes) / sizeof(boxes[0]); j++)
{
cout << boxes[i][j] << "  ";
}
cout << "\n";

        }
    }
}
