cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)

project(scriptx-node-addon)

# important for node.js
# https://github.com/cmake-js/cmake-js/issues/37
add_definitions(-DBUILDING_NODE_EXTENSION)

# config ScriptX
set(SCRIPTX_BACKEND V8 CACHE STRING "" FORCE)
include(${CMAKE_CURRENT_LIST_DIR}/../../CMakeLists.txt)
target_include_directories(ScriptX PUBLIC ${CMAKE_JS_INC})
target_compile_options(ScriptX PUBLIC -fPIC)

add_library(${PROJECT_NAME} SHARED ${CMAKE_JS_SRC})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_JS_INC})
target_sources(${PROJECT_NAME} PRIVATE
        src/addon.cc
        )
target_compile_options(${PROJECT_NAME} PUBLIC -fPIC)
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "" SUFFIX ".node")
target_link_libraries(${PROJECT_NAME} ${CMAKE_JS_LIB} ScriptX)

# Include N-API wrappers
#execute_process(COMMAND node -p "require('node-addon-api').include"
#        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
#        OUTPUT_VARIABLE NODE_ADDON_API_DIR
#        )
#string(REGEX REPLACE "[\r\n\"]" "" NODE_ADDON_API_DIR ${NODE_ADDON_API_DIR})
#
#target_include_directories(${PROJECT_NAME} PRIVATE ${NODE_ADDON_API_DIR})
#
# define NPI_VERSION
#add_definitions(-DNAPI_VERSION=3)
