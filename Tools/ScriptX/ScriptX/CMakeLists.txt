cmake_minimum_required(VERSION 3.0)

file(STRINGS ${CMAKE_CURRENT_LIST_DIR}/VERSION SCRIPTX_VERSION)

if ("${PROJECT_NAME}" STREQUAL "")
    project(ScriptX VERSION ${SCRIPTX_VERSION} LANGUAGES CXX C)
endif ()

if ("${CMAKE_CXX_STANDARD}" STREQUAL "")
    message(WARNING "CMAKE_CXX_STANDARD not set, please set to 17 or latter")
endif ()

set(SCRIPTX_DIR ${CMAKE_CURRENT_LIST_DIR})

# supported targets
set(SCRIPTX_BACKEND_V8 V8)
set(SCRIPTX_BACKEND_JAVASCRIPTCORE JavaScriptCore)
set(SCRIPTX_BACKEND_SPIDERMONKEY SpiderMonkey)
set(SCRIPTX_BACKEND_QUICKJS QuickJs)
set(SCRIPTX_BACKEND_WEBASSEMBLY WebAssembly)
set(SCRIPTX_BACKEND_WKWEBVIEW WKWebView)
set(SCRIPTX_BACKEND_LUA Lua)
set(SCRIPTX_BACKEND_PYTHON Python)
set(SCRIPTX_BACKEND_RUBY Ruby)
# Empty is for you to compile against ScriptX but don't keep any real implementations
set(SCRIPTX_BACKEND_EMPTY Empty)

set(SCRIPTX_BACKEND_LIST
        ${SCRIPTX_BACKEND_V8}
        ${SCRIPTX_BACKEND_JAVASCRIPTCORE}
        ${SCRIPTX_BACKEND_SPIDERMONKEY}
        ${SCRIPTX_BACKEND_QUICKJS}
        ${SCRIPTX_BACKEND_WEBASSEMBLY}
        ${SCRIPTX_BACKEND_WKWEBVIEW}
        ${SCRIPTX_BACKEND_LUA}
        ${SCRIPTX_BACKEND_PYTHON}
        ${SCRIPTX_BACKEND_RUBY}
        ${SCRIPTX_BACKEND_EMPTY}
        )

# set options, choose which ScriptX Backend to use, V8 or JSC or etc...
set(SCRIPTX_BACKEND "${SCRIPTX_BACKEND}" CACHE STRING "choose which ScriptX Backend(Implementation) to use, V8 or JavaScriptCore or etc...")
set_property(CACHE SCRIPTX_BACKEND PROPERTY STRINGS "${SCRIPTX_BACKEND_LIST}")
option(SCRIPTX_NO_EXCEPTION_ON_BIND_FUNCTION "don't throw exception on defineClass generated bound function/get/set, return null & log instead. default to OFF" OFF)
option(SCRIPTX_FEATURE_INSPECTOR "enable inspector feature, default to OFF" OFF)

###### add ScriptX library target ######

# define our target first
add_library(${PROJECT_NAME} STATIC
        ${SCRIPTX_DIR}/src/Engine.h
        ${SCRIPTX_DIR}/src/Engine.hpp
        ${SCRIPTX_DIR}/src/Engine.cc
        ${SCRIPTX_DIR}/src/Reference.h
        ${SCRIPTX_DIR}/src/Reference.cc
        ${SCRIPTX_DIR}/src/Scope.h
        ${SCRIPTX_DIR}/src/Value.h
        ${SCRIPTX_DIR}/src/Exception.h
        ${SCRIPTX_DIR}/src/Inspector.h
        ${SCRIPTX_DIR}/src/types.h
        ${SCRIPTX_DIR}/src/Scope.cc
        ${SCRIPTX_DIR}/src/Utils.cc
        ${SCRIPTX_DIR}/src/utils/GlobalWeakBookkeeping.hpp
        ${SCRIPTX_DIR}/src/utils/Helper.hpp
        ${SCRIPTX_DIR}/src/utils/Helper.cc
        ${SCRIPTX_DIR}/src/utils/MemoryPool.hpp
        ${SCRIPTX_DIR}/src/utils/MessageQueue.cc
        ${SCRIPTX_DIR}/src/utils/ThreadPool.cc
        ${SCRIPTX_DIR}/src/utils/TypeInformation.h
        )

target_include_directories(${PROJECT_NAME} PUBLIC ${SCRIPTX_DIR}/src/include)

###### config implementation ######

if ("${SCRIPTX_BACKEND}" STREQUAL "")
    message(FATAL_ERROR "Platform not set. Please set SCRIPTX_BACKEND. Candidates: ${SCRIPTX_BACKEND_LIST}")
endif ()

if (${SCRIPTX_BACKEND} STREQUAL ${SCRIPTX_BACKEND_V8})

    include(${SCRIPTX_DIR}/backend/V8/CMakeLists.txt)
    add_definitions(
            -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/V8/trait/Trait
    )

elseif (${SCRIPTX_BACKEND} STREQUAL ${SCRIPTX_BACKEND_JAVASCRIPTCORE})

    include(${SCRIPTX_DIR}/backend/JavaScriptCore/CMakeLists.txt)
    add_definitions(
            -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/JavaScriptCore/trait/Trait
    )

elseif (${SCRIPTX_BACKEND} STREQUAL ${SCRIPTX_BACKEND_SPIDERMONKEY})

    include(${SCRIPTX_DIR}/backend/SpiderMonkey/CMakeLists.txt)
    add_definitions(
            -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/SpiderMonkey/trait/Trait
    )

elseif (${SCRIPTX_BACKEND} STREQUAL ${SCRIPTX_BACKEND_QUICKJS})

    include(${SCRIPTX_DIR}/backend/QuickJs/CMakeLists.txt)
    add_definitions(
            -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/QuickJs/trait/Trait
    )

elseif (${SCRIPTX_BACKEND} STREQUAL ${SCRIPTX_BACKEND_WEBASSEMBLY})

    include(${SCRIPTX_DIR}/backend/WebAssembly/CMakeLists.txt)
    add_definitions(
            -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/WebAssembly/trait/Trait
    )
    # see https://github.com/emscripten-core/emscripten/blob/master/src/settings.js
    # -sALLOW_MEMORY_GROWTH=1
    # -sINITIAL_MEMORY=167772160
    # -sUSE_PTHREADS=1
    target_compile_options(ScriptX PRIVATE
            -sDISABLE_EXCEPTION_CATCHING=0
            )
    target_link_options(ScriptX INTERFACE
            -sDISABLE_EXCEPTION_CATCHING=0
            -sLLD_REPORT_UNDEFINED
            )

elseif (${SCRIPTX_BACKEND} STREQUAL ${SCRIPTX_BACKEND_WKWEBVIEW})

    include(${SCRIPTX_DIR}/backend/WKWebView/CMakeLists.txt)
    add_definitions(
            -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/WKWebView/trait/Trait
    )

elseif (${SCRIPTX_BACKEND} STREQUAL ${SCRIPTX_BACKEND_LUA})

    include(${SCRIPTX_DIR}/backend/Lua/CMakeLists.txt)
    add_definitions(
            -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/Lua/trait/Trait
    )

elseif (${SCRIPTX_BACKEND} STREQUAL ${SCRIPTX_BACKEND_PYTHON})

    include(${SCRIPTX_DIR}/backend/Python/CMakeLists.txt)
    add_definitions(
            -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/Python/trait/Trait
    )

elseif (${SCRIPTX_BACKEND} STREQUAL ${SCRIPTX_BACKEND_RUBY})

    include(${SCRIPTX_DIR}/backend/Ruby/CMakeLists.txt)
    add_definitions(
            -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/Ruby/trait/Trait
    )

elseif (${SCRIPTX_BACKEND} STREQUAL ${SCRIPTX_BACKEND_EMPTY})

    include(${SCRIPTX_DIR}/backend/Template/CMakeLists.txt)
    add_definitions(
            -DSCRIPTX_BACKEND_TRAIT_PREFIX=../backend/Template/trait/Trait
    )

else ()

    message(FATAL_ERROR "platform not supported: ${SCRIPTX_BACKEND}. please set SCRIPTX_BACKEND. Candidates: ${SCRIPTX_BACKEND_LIST}")

endif ()

if (${SCRIPTX_NO_EXCEPTION_ON_BIND_FUNCTION})
    add_definitions(-DSCRIPTX_NO_EXCEPTION_ON_BIND_FUNCTION)
endif ()

if (${SCRIPTX_FEATURE_INSPECTOR})
    add_definitions(-DSCRIPTX_FEATURE_INSPECTOR)
endif ()

message(STATUS "Configuring ScriptX version ${SCRIPTX_VERSION}.")
message(STATUS "Configuring ScriptX using backend ${SCRIPTX_BACKEND}.")
message(STATUS "Configuring ScriptX option SCRIPTX_NO_EXCEPTION_ON_BIND_FUNCTION ${SCRIPTX_NO_EXCEPTION_ON_BIND_FUNCTION}.")
message(STATUS "Configuring ScriptX feature SCRIPTX_FEATURE_INSPECTOR ${SCRIPTX_FEATURE_INSPECTOR}.")

include(${SCRIPTX_DIR}/docs/doxygen/CMakeLists.txt)
