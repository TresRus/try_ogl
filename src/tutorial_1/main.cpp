#include <iostream>

#include <GL/glew.h>

#include <glfw3.h>
GLFWwindow* window;

#include <glm/glm.hpp>
using namespace glm;

int main() {
  if (!glfwInit()) {
    std::cout << "Failed to initialize GLFW" << std::endl;
    std::cin.ignore();
    return -1;
  }

  glfwWindowHint(GLFW_SAMPLES, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  window = glfwCreateWindow(1024, 768, "Tutorial 01", nullptr, nullptr);
  if (window == nullptr) {
    std::cout << "Failed to open GLFW window. If you have an Intel GPU, they are not 3.3 compatible. " << 
        "Try the 2.1 version of the tutorials." << std::endl;
    std::cin.ignore();
    glfwTerminate();
    return -1;
  }
  glfwMakeContextCurrent(window);

  if (glewInit() != GLEW_OK) {
    std::cout << "Failed to initialize GLEW" << std::endl;
    std::cin.ignore();
    glfwTerminate();
    return -1;
  }

  glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

  glClearColor(0.0f, 0.0f, 0.4f, 0.0f);

  do {
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(window);
    glfwPollEvents();
  } while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLEW_PRESS &&
      glfwWindowShouldClose(window) == 0);

  glfwTerminate();
  return 0;
}
