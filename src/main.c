#include "SDL3/SDL_init.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  if (!SDL_Init(SDL_INIT_VIDEO)) {
    fprintf(stderr, "Failed to init SDL\n");
  }

  SDL_Window *window = SDL_CreateWindow("js2d", 800, 600, 0);
  if (window == NULL) {
    fprintf(stderr, "Failed to create a window\n");
  }

  SDL_Event *event;
  while (true) {
    if (!SDL_PollEvent(event))
      continue;
    switch (event->type) {
    case SDL_EVENT_QUIT:
      return EXIT_SUCCESS;
    }
  }

  return EXIT_SUCCESS;
}