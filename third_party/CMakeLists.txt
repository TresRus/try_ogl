add_definitions(
    -DTW_STATIC
    -DTW_NO_LIB_PRAGMA
    -DTW_NO_DIRECT3D
    -DGLEW_STATIC
    -D_CRT_SECURE_NO_WARNINGS
)

include_directories(
  glew/include
)

### GLEW ###

add_subdirectory(glew/build/cmake)

