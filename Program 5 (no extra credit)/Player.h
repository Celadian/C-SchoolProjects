
#include <string>

using namespace std;

class Player {
	private:
		
		string play{};
		
	public:
		
		
		string getPlay(){
			return play;
		}
		
		void setPlay(string playString){
			play = playString;
		}
		
		void setPlay(int playInt){
			switch(playInt){
				case 0:
					play = "rock";
					break;
				case 1:
					play = "paper";
					break;
				case 2:
					play = "scissors";
					break;
			}
		}
		
};
