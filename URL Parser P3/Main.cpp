
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

	//input string from console
	std::cout << "Please enter a URL: ";
	std::cin >> URL;

//	URL = "https://gmail.com/";

	for (int i = 0; i < URL.length(); ++i) {
		if (URL.at(i) == ':') {
			//concatenate onto scheme, mark location, then exit
			scheme += URL.at(i);
			j = ++i;
			break;
		}
		else {
			//add to scheme
			scheme += URL.at(i);
		}
	}

	for (int i = j; i < URL.length(); ++i) {
		if (URL.at(i) == '/') {
			//check if third time here. if true continue if false add one to count then continue
			//don't concatenate onto authority, mark location , then exit
			if (slash >= 2) {
				k = i;
				break;
			}
			else {
				//concatenate onto authority
				authority += URL.at(i);
				slash++;
			}
			
		}
		else {
			//add to authority
			authority += URL.at(i);
		}
	}

	for (int i = k; i < URL.length(); ++i) {
		if (URL.at(i) == '\0') {
			//exit and finish
			break;
		}
		else {
			//add to path
			path += URL.at(i);
		}
	}




	//print out defined string
	std::cout << "\nscheme = " << scheme;

	//print out defined authority
	std::cout << "\nauthority = " << authority;

	//print out defined authority
	std::cout << "\npath = " << path;
}