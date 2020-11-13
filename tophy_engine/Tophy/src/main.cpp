#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "../include/glfw3.h"
#include "../include/glfw3native.h"

int main (int argc, char* argv[]) {

    if(!glfwInit()) {
        std::cout << "Error" << std::endl;
    } else {
        std::cout << "Success" << std::endl;
    }

    return 0;
}
