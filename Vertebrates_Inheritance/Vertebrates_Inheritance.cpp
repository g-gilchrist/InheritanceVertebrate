#include <string>
#include <iostream>
#include <ios>
#include <limits>

using namespace std;

class Vertebrate {
	public:
		void setAnimalName(string an) {
			AnimalName = an;
		}
		void setBackbone(bool bb) {
			Backbone = bb;
		}
	protected:
		string AnimalName;
		bool Backbone;
};

class Amphibian : public Vertebrate {
	public:
		void setBloodType(string bt) {
			BloodType = bt;
		}
		void setLarvalStage(bool ls) {
			LarvalStage = ls;
		}
		void getAmphibian() {
			if (Backbone == true && BloodType == "Cold Blooded" && LarvalStage == true) {
				cout << endl << AnimalName << "s are amphibians because they have backbones, they are cold blooded and they have a larval stage. \n\n";
			} else {
				cout << endl << AnimalName << "s are not Amphibians. ";
			}
		}

	protected:
		string BloodType;
		bool LarvalStage;
};

class Fish : public Vertebrate {
	public:
		void setBloodType(string bt) {
			BloodType = bt;
		}
		void setGills(bool g) {
			Gills = g;
		}
		void getFish() {
			if (Backbone == true && BloodType == "Cold Blooded" && Gills == true) {
				cout << endl << AnimalName << " are fish because they have a backbone, they are cold blooded and they have gills. \n\n";
			} else {
				cout << endl << AnimalName << "are not fish. ";
			}
		}

	protected:
		string BloodType;
		bool Gills;
};

class Reptile : public Vertebrate {
	public:
		void setBloodType(string bt) {
			BloodType = bt;
		}
		void setScales(bool s) {
			Scales = s;
		}
		void getReptile() {
			if (Backbone == true && BloodType == "Cold Blooded" && Scales == true) {
				cout << endl << AnimalName << "s are reptiles because they have a backbone, they are cold blooded and they have scales. \n\n";
			}
			else {
				cout << endl << AnimalName << "are not reptiles. ";
			}
		}

	protected:
		string BloodType;
		bool Scales;
};

class Bird : public Vertebrate {
	public:
		void setBloodType(string bt) {
			BloodType = bt;
		}
		void setFeathers(bool f) {
			Feathers = f;
		}
		void getBird() {
			if (Backbone == true && BloodType == "Cold Blooded" && Feathers == true) {
				cout << endl << AnimalName << "s are birds because they have a backbone, they are cold blooded and they have feathers. \n\n";
			}
			else {
				cout << endl << AnimalName << "s are not birds. ";
			}
		}
	protected:
		string BloodType;
		bool Feathers;
};

class Mammal : public Vertebrate {
	public:
		void setBloodType(string bt) {
			BloodType = bt;
		}
		void setHair(bool h) {
			Hair = h;
		}
		void getMammal() {
			if (Backbone == true && BloodType == "Warm Blooded" && Hair == true) {
				cout << endl << AnimalName << "s are mammals because they have a backbone, they are warm blooded and they have hair. \n\n";
			}
			else {
				cout << endl << AnimalName << "s are not mammals. ";
			}
		}
	protected:
		string BloodType;
		bool Hair;
};

int main() {
	//------------------------------------------------------
	Amphibian Newt;
	Newt.setAnimalName("Newt");
	Newt.setBackbone(true);
	Newt.setBloodType("Cold Blooded");
	Newt.setLarvalStage(true);

	//------------------------------------------------------
	Fish Trout;
	Trout.setAnimalName("Trout");
	Trout.setBackbone(true);
	Trout.setBloodType("Cold Blooded");
	Trout.setGills(true);

	//------------------------------------------------------
	Reptile Iguana;
	Iguana.setAnimalName("Iguana");
	Iguana.setBackbone(true);
	Iguana.setBloodType("Cold Blooded");
	Iguana.setScales(true);

	//------------------------------------------------------
	Bird Eagle;
	Eagle.setAnimalName("Eagle");
	Eagle.setBackbone(true);
	Eagle.setBloodType("Cold Blooded");
	Eagle.setFeathers(true);

	//------------------------------------------------------
	Mammal Human;
	Human.setAnimalName("Human");
	Human.setBackbone(true);
	Human.setBloodType("Warm Blooded");
	Human.setHair(true);

	//-------------------[ Menu ]------------------------------

	int AnimalPicker;

	while (true) {
		try {
			cout << endl << "What animal would you like to learn more about? \n"
				<< "1) Newt \n"
				<< "2) Trout \n"
				<< "3) Iguana \n"
				<< "4) Eagle \n"
				<< "5) Human \n";

			cin >> AnimalPicker;

			if (!cin) {
				throw 1;
			}

			if (AnimalPicker == 1) {
				Newt.getAmphibian();
				break;
			}
			else if (AnimalPicker == 2) {
				Trout.getFish();
				break;
			}
			else if (AnimalPicker == 3) {
				Iguana.getReptile();
				break;
			}
			else if (AnimalPicker == 4) {
				Eagle.getBird();
				break;
			}
			else if (AnimalPicker == 5) {
				Human.getMammal();
				break;
			}
			else {
				cout << endl << "Input Error: Please input a number 1-5. \n\n\n";
			}
		}
		catch (int e) {
			cout << endl << "Input Error: Please input a number 1-5. \n\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}

	//-------------------[ Redux ]------------------------------

	string Redo;

	while (true) {
		cout << endl << "Would you like to learn about another animal?  (Yes/No) \n";
		cin >> Redo;

		if (Redo == "Yes" || Redo == "yes" || Redo == "Y" || Redo == "y") {
			break;
		}
		else if (Redo == "No" || Redo == "no" || Redo == "N" || Redo == "n") {
			exit(0);
		}
		else {
			cout << endl << "Input Error: Please Input Yes or No. \n\n\n";
		}
	}
	main();

	return 0;

}