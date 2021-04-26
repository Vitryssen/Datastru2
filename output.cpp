/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
#include "output.h"
void clearFile(std::string filename) {
    std::ofstream myfile;
    myfile.open(filename, std::ios::out);
    if (myfile.is_open())
    {
        myfile << "";
    }
    myfile.close();
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
