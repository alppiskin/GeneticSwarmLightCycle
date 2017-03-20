cmake_minimum_required(VERSION 2.8)

project(GeneticLightCycle)

set(CMAKE_BUILD_TYPE Release)

add_subdirectory(src/LightCycleEngine)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
include_directories(/usr/local/include)

add_executable(test_program src/test.cpp)
set_property(TARGET test_program PROPERTY CXX_STANDARD 11)
target_link_libraries(test_program LightCycleEngine ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
