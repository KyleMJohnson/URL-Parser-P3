
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

//	//input string from console
//	std::cout << "Enter URL: ";
//	std::cin >> URL;

	URL = "lmao:ouh";

	for (int i = 0; i < URL.length(); ++i) {
		if (URL.at(i) == ':') {
			//concatenate onto scheme, mark location, then exit
			j = i;
			break;
		}
		else {
			//add to scheme
		}
	}

	for (int i = j; i < URL.length(); ++i) {
		if (URL.at(i) == '//') {
			//don't concatenate onto authority, mark location globally, then exit
			k = i;
		}
		else {
			//add to authority
		}
	}

	for (int i = j; i < URL.length(); ++i) {
		if (URL.at(i) == '/') {
			//concatenate onto path then exit
			k = i;
		}
		else {
			//add to authority
		}
	}




	//print out defined string
	//std::cout << "\nscheme = " << scheme << ". Hooray!";

	//print out defined authority
	//std::cout << "\nauthority = " << authority << ". Hooray!";

	//print out defined authority
	//std::cout << "\nscheme = " << scheme << ". Hooray!";
}