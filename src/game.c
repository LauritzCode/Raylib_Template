#include "game.h"

const Color COLORS[] = {
    // BLUES
    (Color){90, 140, 255, 255},
    (Color){70, 110, 210, 255},
    (Color){50, 85, 160, 255},
    (Color){30, 60, 120, 255},
    (Color){110, 180, 255, 255},

    // PURPLES
    (Color){150, 120, 255, 255},
    (Color){120, 90, 210, 255},
    (Color){100, 70, 180, 255},
    (Color){170, 140, 255, 255},
    (Color){80, 60, 140, 255},

    // MAGENTA
    (Color){210, 130, 255, 255},
    (Color){190, 100, 200, 255},
    (Color){160, 70, 170, 255},
    (Color){230, 160, 255, 255},

    // TEALS / CYANS
    (Color){80, 200, 220, 255},
    (Color){60, 160, 175, 255},
    (Color){40, 120, 130, 255},
    (Color){100, 220, 235, 255},

    // ORANGES
    (Color){255, 150, 80, 255},
    (Color){220, 120, 70, 255},
    (Color){200, 100, 60, 255},

    // REDS
    (Color){180, 60, 70, 255},
    (Color){150, 40, 50, 255},
    (Color){210, 90, 100, 255},

    // DUSTY
    (Color){120, 120, 160, 255},
    (Color){100, 100, 130, 255},
    (Color){80, 80, 110, 255},
};

const int COLORS_COUNT = sizeof(COLORS) / sizeof(COLORS[0]);

static Texture2D bg;

void game_init(void) {
  //
  bg = LoadTexture("resources/background.jpg");
}

void game_update(void) {}
void game_draw(void) {
  Rectangle src = {0, 0, (float)bg.width, (float)bg.height};
  Rectangle dest = {0, 0, (float)WIDTH, (float)HEIGHT};
  Vector2 org = {0, 0};
  DrawTexturePro(bg, src, dest, org, 0.0f, WHITE);
}
