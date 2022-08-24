#include <iostream>
#include <vector>
using namespace std;

class unit{ public:
	string name; 
	double supply, minerals, gas, hp;
};

int main() {
	
	unit SCV = {"SCV",1,50,0,45};
	unit Marine = {"Marine",1,50,0,55};
	unit Reaper = {"Reaper",1,50,50,60};
	unit Maurauder = {"Maurauder",2,100,25,125};
	unit Ghost = {"Ghost",2,200,100,100};
	unit Hellion = {"Hellion",2,100,0,90};
	unit Hellbat = {"Hellbat",2,100,0,135};
	unit Mine = {"Mine",2,75,50,90};
	unit Medivac = {"Medivac",2,100,100,150};
	unit Viking = {"Viking",2,150,75,125};
	unit Raven = {"Raven",2,100,200,140};
	unit Cyclone = {"Cyclone",3,150,150,120};
	unit Tank = {"Tank",3,150,125,160};
	unit Banshee = {"Banshee",3,150,100,140};
	unit Liberator = {"Liberator",3,150,150,180};
	unit Thor = {"Thor",6,300,200,400};
	unit Battlecruiser = {"Battlecruiser",6,400,300,550};
	
	vector<unit> squad;
	squad.insert(squad.end(), 80, SCV);
	squad.insert(squad.end(), 24, Marine);
	squad.insert(squad.end(), 16, Liberator);
	squad.insert(squad.end(), 6, Viking);
	squad.insert(squad.end(), 10, Tank);
	squad.insert(squad.end(), 3, Raven);
	
	double squadhp = 0;
	double squadsupply = 0;
	for(int i=0;i<int(squad.size());i++){
		squadhp += squad[i].hp;
		squadsupply += squad[i].supply;
	}
	cout<<"squadhp: "<<squadhp<<'\n';
	cout<<"squadsupply: "<<squadsupply<<'\n';
	cout<<"squadcount: "<<squad.size()<<'\n';
	cout<<"\n ||||||||||||| \n\n";
	
	vector<unit> squad2;
	squad2.insert(squad2.end(), 36, SCV);
	squad2.insert(squad2.end(), 6, Viking);
	squad2.insert(squad2.end(), 2, Tank);
	squad2.insert(squad2.end(), 2, Liberator);
	squad2.insert(squad2.end(), 2, Raven);
	squad2.insert(squad2.end(), 13, Marine);

	double squad2hp = 0;
	double squad2supply = 0;
	for(int i=0;i<int(squad2.size());i++){
		squad2hp += squad2[i].hp;
		squad2supply += squad2[i].supply;
	}
	cout<<"squad2hp: "<<squad2hp<<'\n';
	cout<<"squad2supply: "<<squad2supply<<'\n';
	cout<<"squad2count: "<<squad2.size()<<'\n';
	cout<<"\n ||||||||||||| \n\n";
}