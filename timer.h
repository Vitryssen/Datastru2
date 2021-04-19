/*
2021-04-19
Andr� Nordlund
anno1907
Datastrukturer och algoritmer DT046G
Labb 2
*/
/*
std::chrono::ur<chrono>.
En m�tserie f�r varje indata m�ste best� av minst 5 tidsm�tningar. Fler �rb�ttre. Ju fler m�tningar desto mindre m�tfel.
Vanliga misstag �r
�Sorteringen tar f�r vissa sm� indata f�r kort tid f�r att tidsm�tningen skage ett riktigt v�rde. 
	Ofta �r klockan inte tillr�ckligt noggrann f�r att m�takorta tidsintervall.
�Man f�rs�ker sortera indata som redan sorterats. Detta p�verkar p�tagligtflera av metodernas tidsm�tningar.
�Man m�ter inte endast sorteringssteget utan �ven initierande program-kod. 
	En vanlig fallgrop �r att kopiera dataserien till sorteringsfunktionenist�llet f�r att ge pekare eller iteratorer till serien.
*/
#ifndef TIMER_H
#define TIMER_H
#endif