
#ifndef FUNCOES_AUXILIARES_H
#define FUNCOES_AUXILIARES_H

#include "Tipos.h"

int existeNuvem(double X, double Y);
double getRandomValue();
void getNextObstaculo(Obstaculo* obs, int Indice);
void SalvarRedeArquivo();
void VerificarTeclas();
int ProcurarProximoObstaculo(double X);

#endif
