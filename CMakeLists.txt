cmake_minimum_required(VERSION 3.15)
project(terraria)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/sdl/")

# SDL
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(SDL2_mixer REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${SDL2_IMAGE_INCLUDE_DIRS})
include_directories(${SDL2_TTF_INCLUDE_DIRS})
include_directories(${SDL2_MIXER_INCLUDE_DIRS})

set(SOURCE_FILES

        Classes/main.cpp Classes/Graphics.cpp Classes/Graphics.h
        Classes/Game.cpp Classes/Game.h Classes/Entity.cpp Classes/Entity.h Classes/EntityManager.cpp Classes/EntityManager.h Classes/Player.cpp Classes/Player.h Classes/ENTITIES_ID.h Classes/LevelBuilder.cpp Classes/LevelBuilder.h Prop.cpp Prop.h PROPS.h
        Classes/Physics.cpp Classes/Physics.h Classes/MOVEMENT.h
        )

add_executable(terraria ${SOURCE_FILES})

# link libraries
target_link_libraries(terraria ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARIES} ${SDL2_TTF_LIBRARIES} ${SDL2_MIXER_LIBRARIES})
