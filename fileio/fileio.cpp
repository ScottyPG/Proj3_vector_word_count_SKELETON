#include "../includes/fileio.h"

bool openFile(std::fstream& myfile, const std::string& myFileName,
		std::ios_base::openmode mode){
	myfile.open(myFileName, mode);
	return myfile.is_open();
}

void closeFile(std::fstream& myfile){
	if (myfile.is_open()){
		myfile.close();
	}
}

int writetoFile(std::vector<constants::entry>  &entries, const std::string &outputfilename){

	std::fstream myfile;

	if (!openFile(myfile, outputfilename)){
		return constants::FAIL_FILE_DID_NOT_OPEN;
	}

	if (entries.size() == 0){
		return constants::FAIL_NO_ARRAY_DATA;
	}

	for (int i = 0; i < entries.size(); ++i){
		myfile << entries[i].word << std:: endl;
	}

	myfile.close();

	return constants::SUCCESS;
}
