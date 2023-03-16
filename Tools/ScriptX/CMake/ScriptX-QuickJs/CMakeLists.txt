cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SCRIPTX_BACKEND QuickJs)

project(ScriptX-QuickJs)

include(../../CMakeLists.txt)

target_include_directories(
        ${PROJECT_NAME}
        PRIVATE ${SCRIPTENGINE_SOURCE_DIR}/third-party/backend/include/QuickJs
)
