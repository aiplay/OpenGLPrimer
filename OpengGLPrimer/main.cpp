//
//  main.cpp
//  OpengGLPrimer
//
//  Created by xujh on 16/1/13.
//  Copyright © 2016年 xujh. All rights reserved.
//

#include <glew.h>
#include <glfw3.h>

int main(int argc, const char * argv[]) {
    GLFWwindow* window;
    if (!glfwInit())
        return -1;
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}
