#include "main.h"


int main() {
	std::cout << "Welcome to the file sorter app proof of concept" << std::endl;
	std::cout << "The main purpose of this is to help easily sort files into folders" << std::endl;
	std::cout << "input -> Folder with files that need to be sorted\ninput-> Folder with subfolders where you want to put the files into" << std::endl;
	std::cout << "Each file will be shown sequentially, choose which subfolder you want to put the file into" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Please input the directory where the files you want to sort are located: ";
	std::string inputFolder;
	std::cin >> inputFolder;
	
	std::cout << "Please input the destination folder where the subfolders are located: ";
	std::string destinationFolder;
	std::cin >> destinationFolder;
}