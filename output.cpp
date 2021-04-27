/*
2021-04-27
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "output.h"
void clearFiles(std::vector<std::string> fileNames) {
    std::ofstream myfile;
    for (int i = 0; i < fileNames.size(); i++) {
        myfile.open(fileNames.at(i), std::ios::out | std::ios::trunc);
        if (myfile.is_open())
        {
            myfile << "#"+fileNames.at(i).erase(fileNames.at(i).size()-5, 5) << "\n" << "#N\tT[ms]\t\tStdev[ms]\tSamples\n";
        }
        myfile.close();
    }
}
void write(std::string filename, std::string output)
{
    std::ofstream myfile;
    myfile.open(filename, std::ios::out | std::ios::app);
    if (myfile.is_open())
    {
        myfile << output;
    }
    myfile.close();
}
