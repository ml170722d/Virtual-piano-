#include <iostream>
#include <iomanip>
#include <Windows.h>

#include "CantDoError.h"
#include "ExitException.h"
#include "CancelException.h"

#include"Duration.h"
#include"MusicSymbol.h"
#include"Note.h"
#include "Pause.h"

using namespace std;

void main() {
	/*try {
		bool saved = false;

		while (true) {
			system("cls");
			cout << setw(24) << "MENU" << endl;
			cout << setw(2) << "1." << " " << setw(50) << left << "Load the composition" << endl;
			cout << setw(2) << "2." << " " << setw(50) << left << "Load musical symbol" << endl;
			cout << setw(2) << "3." << " " << setw(50) << left << "Show data about music track" << endl;
			cout << setw(2) << "4." << " " << setw(50) << left << "Iteration through the composition" << endl;
			cout << setw(2) << "5." << " " << setw(50) << left << "Change the composition stroke" << endl;
			cout << setw(2) << "6." << " " << setw(50) << left << "Change of the octave composition" << endl;
			cout << setw(2) << "0." << " " << setw(50) << left << "Exit program" << endl;

			int i;
			cin >> i;
			
			switch (i)
			{
			case 1: {
				try
				{
					system("cls");
					while (true) {
						cout << "Which composition do you want to load?" << endl;
						cout << setw(2) << "1." << " " << setw(50) << left << "Fur elise" << endl;
						cout << setw(2) << "2." << " " << setw(50) << left << "Jingle bells" << endl;
						cout << setw(2) << "3." << " " << setw(50) << left << "Ode to joy" << endl;
						cout << setw(2) << "4." << " " << setw(50) << left << "Spring" << endl;
						cout << setw(2) << "5." << " " << setw(50) << left << "We wish you a merry christmas" << endl;
						cout << endl << "More options: " << endl;
						cout << setw(2) << "6." << " " << setw(50) << left << "My composition" << endl;
						cout << setw(2) << "7." << " " << setw(50) << left << "Cancel" << endl;

						cin >> i;
						switch (i)
						{
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						{
							//load composition i...
							break;
						}
						case 6:
						{
							//load string and make composition...
						}
						case 7:
						{
							throw CancelException();
						}
						default:
							break;
						}
						break;
					}
				}
				catch (CancelException c)
				{
					cout << c << endl;
					Sleep(200);
				}
				
			}
			case 2: {
				break;
			}
			case 3: {
				break;
			}
			case 4: {
				break;
			}
			case 5: {
				break;
			}
			case 6: {
				break;
			}
			case 0: {
				if (saved)
					throw ExitException();
				else
				{
					cout << "You didn't save" << endl << "Would you like to save changes? y/n" << endl;
					char c;
					cin >> c;
					if (c == 'y') {
						//save file...

						throw ExitException();
					}
				}
				break;
			}
			default:
				cout << "Option does not exist" << endl << "Try again" << endl;
				Sleep(1000);
				break;
			}
		}
	}
	catch(ExitException e){
		cout << e << endl;
		Sleep(1000);
	}
	*/

	try
	{
		/*
		int midi1 = 50, midi2 = 100;
		pair<char, int> p1('c', 1), p2('c', 2);
		Duration d1(8), d2(4);

		Note n1(p1, midi1, d1), n2(p2, midi2, d2);
		Pause pa1(d1), pa2(d2);

		MusicSymbol *ms1 = &n1, 
				*ms2 = n2.divide(), 
				*ms3 = &pa1, 
				*ms4 = pa2.divide();

		cout << "ms1 is note: " << ms1->is_Note() << endl;
		cout << "ms2 is note: " << ms2->is_Note() << endl;
		cout << "ms3 is note: " << ms3->is_Note() << endl;
		cout << "ms4 is note: " << ms4->is_Note() << endl;

		cout << ms1->getMidi() << " " << ms1->getNota().first << " " << ms1->getNota().second << endl;
		cout << ms2->getMidi() << " " << ms2->getNota().first << " " << ms2->getNota().second << endl;
		cout << ms3->getMidi() << " " << ms3->getNota().first << " " << ms3->getNota().second << endl;
		cout << ms4->getMidi() << " " << ms4->getNota().first << " " << ms4->getNota().second << endl;
		*/

		/*Duration d1(4), d2(8);
		Duration d3 = d1 + d2;
		Duration d4 = d3 + d2;
		Duration d5 = d4 + d1;
		Duration d6 = d5 + d2;
		cout << "d1 = " << d1.getBr() << "/" << d1.getDel() << endl
			<< "d2 = " << d2.getBr() << "/" << d2.getDel() << endl
			<< "d3 = " << d3.getBr() << "/" << d3.getDel() << endl
			<< "d4 = " << d4.getBr() << "/" << d4.getDel() << endl
			<< "d5 = " << d5.getBr() << "/" << d5.getDel() << endl
			<< "d6 = " << d6.getBr() << "/" << d6.getDel() << endl;*/



		system("pause");
	}
	catch (...)
	{
		system("pause");
	}
}