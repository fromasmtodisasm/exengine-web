#ifndef EX_TEXT_H
#define EX_TEXT_H

#include <ft2build.h>
#include FT_FREETYPE_H

#define GLEW_STATIC
#include <GL/glew.h>

#include "math.h"

typedef struct {
  FT_Library freetype;
  GLuint shader;
  mat4x4 projection;
} ex_text_t;

extern ex_text_t *ex_text;

typedef struct {
  GLuint id, advance;
  vec2 size, bearing;
} ex_char_t;

typedef struct {
  ex_char_t chars[128];
  GLuint vao, vbo;
} ex_font_t;

void ex_text_init();

ex_font_t* ex_text_load_font(const char *path);

void ex_text_print(ex_font_t *font, const char *str, float x, float y, float scale, float r, float g, float b);

#endif // EX_TEXT_H