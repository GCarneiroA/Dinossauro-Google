
#ifndef DINO_DESENHAR_H
#define DINO_DESENHAR_H

#include "Tipos_PIG.h"

PIG_Cor calcularCor(double Intensidade, PIG_Cor CorBase);
void DesenharRedeNeural(int X, int Y, int Largura, int Altura);
void DesenharGrafico(int X, int Y, int Largura, int Altura);
void DesenharObstaculos();
void DesenharChao();
void DesenharMontanhas();
void DesenharFundo();
void DesenharNuvens();
void DesenharAviao(int i);
void DesenharDinossauros();
void Desenhar();

#endif
