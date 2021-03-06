#include <stdio.h>
#include "exengine/engine.h"
#include "inc/game.h"

int main(int argc, char **argv)
{
  ex_init_ptr = game_init;
  ex_update_ptr = game_update;
  ex_draw_ptr = game_draw;
  ex_exit_ptr = game_exit;
  ex_keypressed_ptr = game_keypressed;
  ex_resize_ptr = game_resize;

  exengine(argv, EX_ENGINE_SOUND);

  return EXIT_SUCCESS;
}
