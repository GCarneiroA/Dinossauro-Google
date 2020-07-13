
#ifndef NEURAL_H
#define NEURAL_H

#define TAXA_APRENDIZADO    (0.1)
#define TAXA_PESO_INICIAL   (1.0)
#define BIAS                1

//#define AtivacaoOcultas(X)         (1.0/(1.0+exp(-X)))       /// sigmoide(x)
//#define AtivacaoSaida(X)           (1.0/(1.0+exp(-X)))       /// sigmoide(x)

//#define AtivacaoOcultas(X)         tanh(X)
//#define AtivacaoSaida(X)           tanh(X)

#define AtivacaoOcultas(X)        relu(X)
#define AtivacaoSaida(X)          relu(X)

typedef struct neuronio
{
    double* Peso;
    double  Erro;
    double  Saida;

    int QuantidadeLigacoes;

} Neuronio;

typedef struct camada
{
    Neuronio* Neuronios;

    int QuantidadeNeuronios;

} Camada;

typedef struct redeNeural
{
    Camada  CamadaEntrada;
    Camada* CamadaEscondida;
    Camada  CamadaSaida;

    int QuantidadeEscondidas;

} RedeNeural;

double relu(double X);
double reluDx(double X);
void RNA_CopiarVetorParaCamadas(RedeNeural* Rede, double* Vetor);
void RNA_CopiarParaEntrada(RedeNeural* Rede, double* VetorEntrada);
int RNA_QuantidadePesos(RedeNeural* Rede);
void RNA_CopiarDaSaida(RedeNeural* Rede, double* VetorSaida);
void RNA_CalcularSaida(RedeNeural* Rede);
void RNA_CriarNeuronio(Neuronio* Neuron, int QuantidadeLigacoes);
RedeNeural* RNA_CriarRedeNeural(int QuantidadeEscondidas, int QtdNeuroniosEntrada, int QtdNeuroniosEscondida, int QtdNeuroniosSaida);
RedeNeural* RNA_DestruirRedeNeural(RedeNeural* Rede);
RedeNeural* RNA_CarregarRede(char* String);
void RNA_SalvarRede(RedeNeural* Temp, char* String);

#endif
