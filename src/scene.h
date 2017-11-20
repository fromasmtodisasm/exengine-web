#ifndef EX_SCENE_H
#define EX_SCENE_H

#include "list.h"
#include "texture.h"
#include "shader.h"
#include "camera.h"

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

typedef struct {
  GLuint shader;
  list_t *model_list, *texture_list, *coll_list;
  ex_fps_camera_t *fps_camera;
  int modelc;
} ex_scene_t;

ex_scene_t* ex_scene_new(GLuint shader);

void ex_scene_update(ex_scene_t *s, float delta_time);

void ex_scene_draw(ex_scene_t *s);

void ex_scene_render_models(ex_scene_t *s, GLuint shader, int shadows);

GLuint ex_scene_add_texture(ex_scene_t *s, const char *file);

void ex_scene_destroy(ex_scene_t *s);

#endif // EX_SCENE_H