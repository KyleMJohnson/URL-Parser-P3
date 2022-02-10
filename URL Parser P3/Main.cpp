
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//definitions of strings
	std::string URL;
	std::string scheme;
	std::string authority;
	std::string path;
	int j = 0;
	int k = 0;
	int slash = 0;

//	//input string from console
//	std::cout << "Enter URL: ";
//	std::cin >> URL;

	URL = "https://gmail.com/";

	for (int i = 0; i < URL.length(); ++i) {
		if (URL.at(i) == ':') {
			//concatenate onto scheme, mark location, then exit
			j = i;
			break;
		}
		else {
			//add to scheme
			scheme += scheme + URL.at(i);
		}
	}

	for (int i = j; i < URL.length(); ++i) {
		if (URL.at(i) == '/') {
			//check if third time here. if true continue if false add one to count then continue
			//don't concatenate onto authority, mark location globally, then exit
			if (slash >= 3) {
				slash++;
				k = i;
			}
			else {

			}
			
		}
		else {
			//add to authority
		}
	}

	for (int i = j; i < URL.length(); ++i) {
		if (URL.at(i) == '\0') {
			//concatenate onto path then exit
			k = i;
		}
		else {
			//add to authority
		}
	}




	//print out defined string
	//std::cout << "\nscheme = " << scheme;

	//print out defined authority
	//std::cout << "\nauthority = " << authority;

	//print out defined authority
	//std::cout << "\nscheme = " << scheme;
}