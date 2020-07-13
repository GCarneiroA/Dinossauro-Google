
#ifndef DINO_SPRITES_H
#define DINO_SPRITES_H

#include "Defines.h"

typedef struct sprite
{
    int Largura;
    int Altura;
    int Objeto;

} Sprite;

extern Sprite SpriteObstaculo[OBSTACULOS_SPRITE_QUANTIDADE];
extern Sprite SpriteAviao[2];

extern int SpriteNeuronDesativado;
extern int SpriteNeuronAtivado;
extern int SpriteLuz;
extern int SpriteSeta;

struct PIG_Cor;

void InicializarSpriteAviao();
void InicializarSpritesObstaculos();
void InicializarSprites();
Sprite getMontanhaSprite(int codigo);
Sprite getChaoSprite();
Sprite getDinossauroSprite(int Indice, PIG_Cor cor);
Sprite* getObstaculosSprite(int Tipo, int Frame);
Sprite getNuvemSprite();

#endif
