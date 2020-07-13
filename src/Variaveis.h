
#ifndef VARIAVEIS_H
#define VARIAVEIS_H

#include "Tipos.h"
#include "Defines.h"
#include <Tipos_PIG.h>

extern PIG_Cor     Cores[8];

extern Dinossauro  Dinossauros[POPULACAO_TAMANHO];
extern int         QuantidadeDinossauros;

extern Chao        chao[CHAO_QUANTIDADE];
extern Montanha    montanha[MONTANHA_QUANTIDADE];
extern Nuvem       nuvem[NUVEM_QUANTIDADE];
extern Grafico     grafico;
extern Dinossauro* MelhorDinossauro;

extern Obstaculo   obstaculo[MAX_OBSTACULOS];
extern Obstaculo   obstaculosModelo[20000];

extern int         Fonte, FonteVermelha, FonteAzul;
extern double      VELOCIDADE;
extern int         TimerGeral;
extern double      Periodo;
extern double      DistanciaRecorde;
extern double      DistanciaAtual;

extern int         DinossaurosMortos;
extern int         ObstaculoDaVez;
extern int         Geracao;
extern int         DesenharTela;

#endif
