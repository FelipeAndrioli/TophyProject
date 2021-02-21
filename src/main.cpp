#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "../lib/GLFW/include/glfw3.h"
#include "../lib/GLFW/include/glfw3native.h"

#include "./graphics/window.h"

int main (int argc, char* argv[]) {
    using namespace tophy;
    using namespace graphics;

    Window window("Tophy", 800, 600);
    glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

    while (!window.closed()) {
        window.clear();
        glBegin(GL_TRIANGLES);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.5f, -0.5f);
        glEnd();
        window.update();
    }

    return 0;
}
