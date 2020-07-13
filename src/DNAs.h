
#ifndef DNAS_H
#define DNAS_H

#include "Defines.h"

extern double* DNADaVez[POPULACAO_TAMANHO];
extern double MediaFitnessPopulacao[LARG_GRAFICO];
extern double MediaFitnessFilhos[LARG_GRAFICO];
extern double BestFitnessPopulacao[LARG_GRAFICO];

extern int GeracaoCompleta;

double BestFitnessGeracao();
double MediaFitnessGeracao();
double BestFitnessEver();
void InicializarDNA();

#endif
