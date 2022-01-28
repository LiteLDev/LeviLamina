#### config fields

# default location is next to ScriptX root dir
# ScriptXLibs download by cmake script
if ("${SCRIPTX_TEST_LIBS}" STREQUAL "")
    if (NOT "$ENV{SCRIPTX_TEST_LIBS}" STREQUAL "")
        set(SCRIPTX_TEST_LIBS "$ENV{SCRIPTX_TEST_LIBS}")
    else ()
        set(SCRIPTX_TEST_LIBS ${CMAKE_CURRENT_BINARY_DIR}/ScriptXTestLibs)
    endif ()
endif ()

if ("${SCRIPTX_TEST_GOOGLE_TEST}" STREQUAL "")
    if (NOT "$ENV{SCRIPTX_TEST_GOOGLE_TEST}" STREQUAL "")
        set(SCRIPTX_TEST_GOOGLE_TEST "$ENV{SCRIPTX_TEST_GOOGLE_TEST}")
    else ()
        set(SCRIPTX_TEST_GOOGLE_TEST ${CMAKE_CURRENT_BINARY_DIR}/googletest-src)
    endif ()
endif ()

if ("${SCRIPTX_TEST_BUILD_ONLY}" STREQUAL "")
    if (NOT "$ENV{SCRIPTX_TEST_BUILD_ONLY}" STREQUAL "")
        set(SCRIPTX_TEST_BUILD_ONLY "$ENV{SCRIPTX_TEST_BUILD_ONLY}")
    else ()
        set(SCRIPTX_TEST_BUILD_ONLY OFF)
    endif ()
endif ()

# set(CMAKE_BUILD_TYPE Release)
# set(CMAKE_BUILD_TYPE RelWithDebInfo)

# set(TEST_FLAG_ENABLE_CLANG_TIDY ON)
# set(TEST_FLAG_ENABLE_ASAN ON)
# set(TEST_FLAG_ENABLE_UBSAN ON)

if ("${SCRIPTX_BACKEND}" STREQUAL "")
    ### choose your backend
    set(SCRIPTX_BACKEND V8 CACHE STRING "" FORCE)
    #set(SCRIPTX_BACKEND JavaScriptCore CACHE STRING "" FORCE)
    #set(SCRIPTX_BACKEND Lua CACHE STRING "" FORCE)
    #set(SCRIPTX_BACKEND WebAssembly CACHE STRING "" FORCE)
    #set(SCRIPTX_BACKEND QuickJs CACHE STRING "" FORCE)
    #set(SCRIPTX_BACKEND Empty CACHE STRING "" FORCE)
endif ()

# wasm need emscripten toolchain file, like
# -DCMAKE_TOOLCHAIN_FILE=<emsdk>/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake
# install using https://github.com/emscripten-core/emsdk

# download test libs if need
include(${CMAKE_CURRENT_LIST_DIR}/test_libs/CMakeLists.txt)

if (${SCRIPTX_BACKEND} STREQUAL V8)
    if (SCRIPTX_TEST_BUILD_ONLY)
        set(DEVOPS_LIBS_INCLUDE
                "${SCRIPTX_TEST_LIBS}/mac/v8/include"
                CACHE STRING "" FORCE)
    elseif (APPLE)
        set(DEVOPS_LIBS_INCLUDE
                "${SCRIPTX_TEST_LIBS}/mac/v8/include"
                CACHE STRING "" FORCE)
        set(DEVOPS_LIBS_LIBPATH
                "${SCRIPTX_TEST_LIBS}/mac/v8/libv8_monolith.a"
                CACHE STRING "" FORCE)

    elseif (WIN32)
        set(DEVOPS_LIBS_INCLUDE
                "${SCRIPTX_TEST_LIBS}/win64/v8/include"
                CACHE STRING "" FORCE)

        set(DEVOPS_LIBS_LIBPATH
                "${SCRIPTX_TEST_LIBS}/win64/v8/v8_libbase.dll.lib"
                "${SCRIPTX_TEST_LIBS}/win64/v8/v8_libplatform.dll.lib"
                "${SCRIPTX_TEST_LIBS}/win64/v8/v8.dll.lib"
                CACHE STRING "" FORCE)

        add_custom_command(TARGET UnitTests POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_directory
                "${SCRIPTX_TEST_LIBS}/win64/v8/dll" $<TARGET_FILE_DIR:UnitTests>
                )

    endif ()
elseif (${SCRIPTX_BACKEND} STREQUAL JavaScriptCore)
    if (SCRIPTX_TEST_BUILD_ONLY)
        set(DEVOPS_LIBS_INCLUDE
                "${SCRIPTX_TEST_LIBS}/win64/jsc/include"
                CACHE STRING "" FORCE)
    elseif (APPLE)
        set(DEVOPS_LIBS_INCLUDE
                ""
                CACHE STRING "" FORCE)

        set(DEVOPS_LIBS_LIBPATH
                "-w -framework Foundation -framework JavaScriptCore"
                CACHE STRING "" FORCE)
    elseif (WIN32)
        set(DEVOPS_LIBS_INCLUDE
                "${SCRIPTX_TEST_LIBS}/win64/jsc/include"
                CACHE STRING "" FORCE)

        set(DEVOPS_LIBS_LIBPATH
                "${SCRIPTX_TEST_LIBS}/win64/jsc/JavaScriptCore.lib"
                CACHE STRING "" FORCE)

        add_custom_command(TARGET UnitTests POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_directory
                "${SCRIPTX_TEST_LIBS}/win64/jsc/dll" $<TARGET_FILE_DIR:UnitTests>
                )
    endif ()

elseif (${SCRIPTX_BACKEND} STREQUAL Lua)
    if (SCRIPTX_TEST_BUILD_ONLY)
        set(DEVOPS_LIBS_INCLUDE
                "${SCRIPTX_TEST_LIBS}/mac/lua/include"
                CACHE STRING "" FORCE)
    elseif (APPLE)
        set(DEVOPS_LIBS_INCLUDE
                "${SCRIPTX_TEST_LIBS}/mac/lua/include"
                CACHE STRING "" FORCE)
        set(DEVOPS_LIBS_LIBPATH
                "${SCRIPTX_TEST_LIBS}/mac/lua/liblua.a"
                CACHE STRING "" FORCE)
    elseif (WIN32)
        set(DEVOPS_LIBS_INCLUDE
                "${SCRIPTX_TEST_LIBS}/win64/lua/include"
                CACHE STRING "" FORCE)

        set(DEVOPS_LIBS_LIBPATH
                "${SCRIPTX_TEST_LIBS}/win64/lua/Lua54.lib"
                CACHE STRING "" FORCE)
    endif ()

elseif (${SCRIPTX_BACKEND} STREQUAL WebAssembly)
    if ("${CMAKE_TOOLCHAIN_FILE}" STREQUAL "")
        message(FATAL_ERROR "CMAKE_TOOLCHAIN_FILE must be passed for emscripten")
    endif ()
elseif (${SCRIPTX_BACKEND} STREQUAL QuickJs)
    include("${SCRIPTX_TEST_LIBS}/quickjs/CMakeLists.txt")
    set(DEVOPS_LIBS_LIBPATH QuickJs CACHE STRING "" FORCE)
endif ()
