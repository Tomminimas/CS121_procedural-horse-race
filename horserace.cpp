#include <iostream>
#include <cstdlib>
#include <ctime>

srand(time(NULL));
coin = rand() % 1;

using namespace = 15;

const int track_length = 15;
const int num_horses = 5;

void advance(int horseNum, int* horses){
	int coin = rand() % 2;
	horses[horseNum] = horses[horseNum] + coin;
}; // end advance
/*
void advance(int horseNum, int* horses){
	int turn = dist(rd);
	horses[hn] += turn;
} // end advance;
*/
void printLane(int horseNum, int* horses){
	for (i = 0; i < track_length; i++){
		if (i == horse[horseNum]){
			cout << horseNum;
		} 
		else {
			cout << "."
		} // end if	
	}// end for
	cout << endl;
}; // end printLane

bool isWinner(int horseNum, int* horses){
	if (horses[horseNum] >= track_length){
		return true;}
	else {
		return false;
	} // end if
} // end bool;

int main(){
	srand(time(NULL));
	int horse[] = {0,0,0,0,0};
	bool raceOver = false;

	while (raceOver == false){
		for (int i = 0; i < num_horses; i++){
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses) == true){
				cout << "Horse " << i << " WINS!!!" << endl;
				raceOver = true;
			} // end if
		} // end for
	} // end while
} // end main
