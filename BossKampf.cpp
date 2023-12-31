
#include <iostream>

using namespace std;

class Charakter {

protected:
	string name;
	int leben;
	int schaden = 5;

    public:
        void setName(string parameter1) {
            name = parameter1;
        }

        string getName()
        {
            return name;
        }

        void setLeben(int parameter1){
            leben = parameter1;
        }

        int getLeben(){
            return leben;
        }

        void lebenabZiehen(){
            leben = leben - schaden;
        }
};

class Krieger : public Charakter{
    public:
    void lebenabZiehen (){
        leben = leben - (schaden + 10);
    }
};

class Boss : public Charakter{
    public:
    void lebenabZiehen(){
        leben = leben - (schaden + 5);
    }
};

int main(){

Krieger* krieger2 = new Krieger();
Krieger* krieger1 = new Krieger();
Boss* boss1 = new Boss();

krieger2->setName("Assa");
krieger2->setLeben(160);

krieger1->setName("Barb");
krieger1->setLeben(200);

boss1->setName("Izual");
boss1->setLeben(200);

cout << krieger1->getName() + " & " + krieger2->getName() + " VS " + boss1->getName() << endl;

while (krieger1->getLeben() > 0 && krieger2->getLeben() >0 && boss1->getLeben() > 0) {
	krieger1->lebenabZiehen();
	boss1->lebenabZiehen();
	krieger2->lebenabZiehen();
	cout << "BarbLeben: " << krieger1->getLeben() << " | " " AssaLeben: " << krieger2->getLeben() << " | " " BossLeben: " << boss1->getLeben() << endl;
}

if (krieger1->getLeben() > 0 && krieger2->getLeben() > 0 ) {
	cout << "DAS LICHT HAT GESIEGT" << endl;
	}
else {
	cout << "DAS BOESE HAT GESIEGT" << endl;
}




}