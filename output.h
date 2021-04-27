/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
/*
Du har två alternativ för att åstadkomma det:
1. Spara samtliga datapunkter från programmet. Metod,N, tidsåtgång, se-rie. Du behöver då efterbehandla mätserierna.
2. Spara medelvärdet och standardavvikelsen för varje mätpunkt. Du behöveräven spara antal mätningar och annan relevant data.
Exempel på 2. https://gyazo.com/f78ddaa9e47b1cfe88620fceb8a92838
*/
#include <fstream>
#ifndef OUTPUT_H
#define OUTPUT_H
/// <summary>
/// Clears file from data with given filename
/// </summary>
/// <param name="filename"></param>
void clearFile(std::string filename);

/// <summary>
/// Writes given output to given filename
/// </summary>
/// <param name="filename"></param>
/// <param name="output"></param>
void write(std::string filename, std::string output);
#endif