cmake_minimum_required(VERSION 2.8.12)

target_sources(ScriptX PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/JscEngine.cc
        ${CMAKE_CURRENT_LIST_DIR}/JscValue.cc
        ${CMAKE_CURRENT_LIST_DIR}/JscHelper.cc
        ${CMAKE_CURRENT_LIST_DIR}/JscLocalReference.cc
        ${CMAKE_CURRENT_LIST_DIR}/JscUtils.cc
        ${CMAKE_CURRENT_LIST_DIR}/JscNative.cc
        ${CMAKE_CURRENT_LIST_DIR}/JscException.cc
        ${CMAKE_CURRENT_LIST_DIR}/JscScope.cc
        )

target_sources(ScriptX PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/JscEngine.h
        ${CMAKE_CURRENT_LIST_DIR}/JscEngine.hpp
        ${CMAKE_CURRENT_LIST_DIR}/JscReference.hpp
        ${CMAKE_CURRENT_LIST_DIR}/JscNative.hpp
        ${CMAKE_CURRENT_LIST_DIR}/JscScope.h
        ${CMAKE_CURRENT_LIST_DIR}/JscWeakRef.h
        ${CMAKE_CURRENT_LIST_DIR}/trait/TraitReference.h
        ${CMAKE_CURRENT_LIST_DIR}/trait/TraitScope.h
        ${CMAKE_CURRENT_LIST_DIR}/trait/TraitEngine.h
        ${CMAKE_CURRENT_LIST_DIR}/trait/TraitException.h
        ${CMAKE_CURRENT_LIST_DIR}/trait/TraitIncludes.h
        )

# check if we are targeting apple's OS
# https://cmake.org/cmake/help/v3.14/manual/cmake-toolchains.7.html#cross-compiling-for-ios-tvos-or-watchos
if ("${CMAKE_SYSTEM_NAME}" MATCHES "Darwin|iOS|tvOS|watchOS"
        # some misbehaved toolchain.cmake didn't set CMAKE_SYSTEM_NAME properly, add more checks
        OR APPLE OR NOT "${CMAKE_OSX_SYSROOT}" STREQUAL "")

    target_sources(ScriptX PRIVATE ${CMAKE_CURRENT_LIST_DIR}/JscWeakRef.mm)

    # disable ARC for JscWeakRef.mm
    set_source_files_properties(${CMAKE_CURRENT_LIST_DIR}/JscWeakRef.mm PROPERTIES COMPILE_FLAGS "-fno-objc-arc")

    # objc-lib
    target_link_libraries(ScriptX "-framework Foundation")

else ()

    target_sources(ScriptX PRIVATE ${CMAKE_CURRENT_LIST_DIR}/JscWeakRef.cc)

    message(WARNING "using JavaScriptCore on non-apple platform requires JSWeakPrivate.h private API, which is not stable."
            "If you encountered any link issue, please use JavaScriptCore version after 7604.1.38.0.7 (year 2017) or contact project author.")

endif ()

if (${SCRIPTX_FEATURE_INSPECTOR})

    message(WARNING "JavaScriptCore haven't implement the inspector APIs, consider disable SCRIPTX_FEATURE_INSPECTOR")

endif ()
