
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