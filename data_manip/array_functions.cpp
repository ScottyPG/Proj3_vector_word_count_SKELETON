#include "../includes/array_functions.h"

void clear (std::vector<constants::entry>  &entries){
	entries.clear();
}

std::string getWordAt(std::vector<constants::entry>  &entries, int i){
	if (i > entries.size()){
		return entries.at(entries.size()-1);
	}
	else{
		return entries.at(i);
	}
}

int getNumbOccurAt(std::vector<constants::entry>  &entries,int i){
	return 0;
}

bool processFile(std::vector<constants::entry>  &entries,std::fstream &myfstream){
	return true;
}

void processLine(std::vector<constants::entry>  &entries,std::string &myString){

}

void processToken(std::vector<constants::entry>  &entries,std::string &token){

}

void sort(std::vector<constants::entry>  &entries, constants::sortOrder so){

}
