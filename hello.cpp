// std
#include <stdio.h>

// opengl
#include <GL/glew.h>

// sdl
#include <SDL2/SDL.h>

#define SCREEN_SIZE_X 800
#define SCREEN_SIZE_Y 600

int main (int argc, char* argv[])
{
    // ----- Initialize SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        fprintf(stderr, "SDL could not initialize\n");
        return 1;
    }

    // ----- Create window
    SDL_Window* window = SDL_CreateWindow("My Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_SIZE_X, SCREEN_SIZE_Y, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN);
    if (!window)
    {
        fprintf(stderr, "Error creating window.\n");
        return 2;
    }

    // ----- SDL OpenGL settings
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);

    // ----- SDL OpenGL context
    SDL_GLContext glContext = SDL_GL_CreateContext(window);

    // ----- SDL v-sync
    SDL_GL_SetSwapInterval(1);

    // ----- GLEW
    glewInit();
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // ----- Game loop
    bool quit = false;
    while (quit == false)
    {
        SDL_Event windowEvent;
        while (SDL_PollEvent(&windowEvent))
        {
            if (windowEvent.type == SDL_QUIT)
            {
                quit = true;
                break;
            }
        }

        /*
            do drawing here
        */

        SDL_GL_SwapWindow(window);
    }

    // ----- Clean up
    SDL_GL_DeleteContext(glContext);

    return 0;
}


/* #include <allegro5/allegro5>
#include <allegro5/allegro_font>
#include <stdbool.h>

int main()
{
    al_init();
    al_install_keyboard();

    ALLEGRO_TIMER* timer = al_create_timer(1.0 / 30.0);
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    ALLEGRO_DISPLAY* disp = al_create_display(320, 200);
    ALLEGRO_FONT* font = al_create_builtin_font();

    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_display_event_source(disp));
    al_register_event_source(queue, al_get_timer_event_source(timer));

    bool redraw = true;
    ALLEGRO_EVENT event;

    al_start_timer(timer);
    while(1)
    {
        al_wait_for_event(queue, &event);

        if(event.type == ALLEGRO_EVENT_TIMER)
            redraw = true;
        else if((event.type == ALLEGRO_EVENT_KEY_DOWN) || (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE))
            break;

        if(redraw && al_is_event_queue_empty(queue))
        {
            al_clear_to_color(al_map_rgb(0, 0, 0));
            al_draw_text(font, al_map_rgb(255, 255, 255), 0, 0, 0, "Hello world!");
            al_flip_display();

            redraw = false;
        }
    }

    al_destroy_font(font);
    al_destroy_display(disp);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);

    return 0;
} */