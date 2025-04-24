#include<iostream>
using namespace std;
#include <vector>


int main()
{
  vector<string>songs;
  vector<int>length;
  string song;
  int sec;
  while(song != "exit"){
      cout << "Please enter a song(exit to quit): ";
      cin >> song;
      if(song == "exit"){
          int min = 60;
          cout << "The playlist is " << length[0] + length[1] << " long. \n";
          if(length[0] > length[1]){
              cout << "The longest song is " << songs[0] << ".\n";
              
          }else if(length[0] < length[1]){
              cout << "The longest song is " << songs[1] << ".\n";
          }
          break;
      }
      cout << "Please enter the length of the song in seconds: ";
      cin >> sec;
      songs.push_back(song);
      length.push_back(sec);
      
      
  }
  
  return 0;
}
