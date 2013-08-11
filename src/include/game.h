#ifndef GAME_H
#define GAME_H

#include <malloc.h>

#include <allegro5/allegro.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

enum EstadosDoJogo { GAMESTATE_MENU, GAMESTATE_ABOUT, GAMESTATE_INTRO };

typedef struct 
{
    ALLEGRO_CONFIG *conf;
    ALLEGRO_DISPLAY *janela;
    ALLEGRO_EVENT_QUEUE *evento;
    
    enum EstadosDoJogo gameState;
    enum EstadosDoJogo gameLoads;
    
    int FullScreen;
    //int fps;
    int VolumeMusica;
    int VolumeVoz;
    int altura;
    int largura;
}Jogo;

#endif GAME_H
