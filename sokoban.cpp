 //projekt pp.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.


#include <iostream>
using namespace std;


void ekran_powitalny()
{
	cout << "           gra sokoban      " << endl;
	cout << "autor: patrycja pienkowska s193452" << endl;
	cout << "              menu:         " << endl;
	cout << "          rozpocznij gre     " << endl;
	cout << "             wyjscie      " << endl;


}

char mapa[10][25] =
{
 "########################",
 "# x    ########        #",
 "#                      #",
 "#                      #",
 "#         #######      #",
 "#                      #",
 "#                      #",
 "#                      #",
 "###########   x        #",
 "########################"
};

void pokaz_mape()
{

	for (int i = 0; i < 10; i++)
	{
		printf("%s\n", mapa[i]);
	}
}

int main()
{
	ekran_powitalny();


	




	



	return 0;
}

