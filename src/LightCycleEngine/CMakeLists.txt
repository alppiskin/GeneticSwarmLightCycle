set(CMAKE_BUILD_TYPE Release)

file(GLOB SOURCES 
	DynamicEntity.cpp
	DynamicEntity.hpp
	Entity.cpp
	Entity.hpp
	LightCycleEngine.cpp
	LightCycleEngine.hpp
	Vec2d.cpp
	Vec2d.hpp
	LightBarrier.hpp
	LightBarrier.cpp
	LightCycle.hpp
	LightCycle.cpp
	Display.hpp
	Display.cpp
)

include_directories(/usr/local/include)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

add_library(LightCycleEngine ${SOURCES})
set_property(TARGET LightCycleEngine PROPERTY CXX_STANDARD 11)
target_include_directories(LightCycleEngine PUBLIC ${CMAKE_SOURCE_DIR})
target_link_libraries(LightCycleEngine glfw)
target_include_directories(LightCycleEngine PUBLIC ${OPENGL_INCLUDE_DIR})
target_link_libraries(LightCycleEngine ${OPENGL_glu_LIBRARY})
