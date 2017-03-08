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
)

include_directories(/usr/local/include)

add_library(LightCycleEngine ${SOURCES})
set_property(TARGET LightCycleEngine PROPERTY CXX_STANDARD 11)
message("${CMAKE_SOURCE_DIR}")
target_include_directories(LightCycleEngine PUBLIC ${CMAKE_SOURCE_DIR})
