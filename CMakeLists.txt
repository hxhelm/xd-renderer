cmake_minimum_required(VERSION 3.21)
project (xd_renderer)

set(CMAKE_CXX_STANDARD 23)

# Define sources and executable
set(EXECUTABLE_NAME "xd_renderer")
add_executable(${EXECUTABLE_NAME} main.cpp 2D/Space2D.cpp 2D/Space2D.h 2D/Vector2D.cpp 2D/Vector2D.h 2D/Entity2D.cpp 2D/Entity2D.h 2D/Circle.cpp 2D/Circle.h 2D/Line.cpp 2D/Line.h 3D/Space3D.cpp 3D/Space3D.h 3D/Vector3D.cpp 3D/Vector3D.h)


# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2.5.1 COMPONENTS system window graphics network audio REQUIRED)
target_link_libraries(${EXECUTABLE_NAME} sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
