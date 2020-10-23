#include <iostream>
#include <string>
#include <fstream>
#include "TekstAchterstevoren.h"
#include "TekstCombineren.h"

TekstAchterstevoren ta;
TekstCombineren tk;

int main()
{
    ta.draaiTekst("jabberwocky.txt", "omgedraaide_output.txt");
    tk.combineerTekst("jabberwocky.txt", "jabberwocky_lat.txt", "gecombineerde_output.txt");
}
