#include "../includes/array_functions.h"
#include "../includes/utilities.h"
#include <algorithm>

void clear (std::vector<constants::entry>  &entries){
	entries.clear();
}

int getSize(std::vector<constants::entry>  &entries){
	return entries.size();
}

std::string getWordAt(std::vector<constants::entry>  &entries, int i){
	int size = entries.size();

	if (i > size){
		return entries[size-1].word;
	}
	else{
		return entries[i].word;
	}
}

int getNumbOccurAt(std::vector<constants::entry>  &entries,int i){
	int size = entries.size();

	if (i > size){
		return entries[size-1].number_occurences;
	}
	else{
		return entries[i].number_occurences;
	}
}

bool processFile(std::vector<constants::entry>  &entries,std::fstream &myfstream){
	return true;
}

void processLine(std::vector<constants::entry>  &entries,std::string &myString){

}

void processToken(std::vector<constants::entry>  &entries,std::string &token){
	if (strip_unwanted_chars(token) == true){
		if (token.empty()){
			return;
		}

		std::string tokenUpper = token;
		std::for_each(tokenUpper.begin(), tokenUpper.end(), [](char & c) {c = ::toupper(c);});

		constants::entry mp;
		mp.word = token;
		mp.word_uppercase = tokenUpper;
		mp.number_occurences = 1;
		//entries.push_back(mp);

		for (int i = 0; i < getSize(entries); ++i){
			if (entries[i].word == token || entries[i].word_uppercase == tokenUpper){
				mp.number_occurences++;
			}
		}

		entries.push_back(mp);

	}


}

void sort(std::vector<constants::entry>  &entries, constants::sortOrder so){

}
