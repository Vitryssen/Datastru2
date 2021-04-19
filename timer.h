/*
2021-04-19
André Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
/*
std::chrono::ur<chrono>.
En mätserie för varje indata måste bestå av minst 5 tidsmätningar. Fler ärbättre. Ju fler mätningar desto mindre mätfel.
Vanliga misstag är
•Sorteringen tar för vissa små indata för kort tid för att tidsmätningen skage ett riktigt värde. 
	Ofta är klockan inte tillräckligt noggrann för att mätakorta tidsintervall.
•Man försöker sortera indata som redan sorterats. Detta påverkar påtagligtflera av metodernas tidsmätningar.
•Man mäter inte endast sorteringssteget utan även initierande program-kod. 
	En vanlig fallgrop är att kopiera dataserien till sorteringsfunktionenistället för att ge pekare eller iteratorer till serien.
*/
#ifndef TIMER_H
#define TIMER_H
#endif