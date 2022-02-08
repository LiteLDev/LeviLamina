cmake_minimum_required(VERSION 2.8.12)

target_sources(ScriptX PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/V8Engine.cc
        ${CMAKE_CURRENT_LIST_DIR}/V8Platform.cc
        ${CMAKE_CURRENT_LIST_DIR}/V8Scope.cc
        ${CMAKE_CURRENT_LIST_DIR}/V8Helper.cc
        ${CMAKE_CURRENT_LIST_DIR}/V8Value.cc
        ${CMAKE_CURRENT_LIST_DIR}/V8LocalReference.cc
        ${CMAKE_CURRENT_LIST_DIR}/V8Exception.cc
        ${CMAKE_CURRENT_LIST_DIR}/V8Native.cc
        ${CMAKE_CURRENT_LIST_DIR}/V8Utils.cc
        )

if (${SCRIPTX_FEATURE_INSPECTOR})

    target_sources(ScriptX PRIVATE
            ${CMAKE_CURRENT_LIST_DIR}/V8Inspector.cc
            )

endif ()

target_sources(ScriptX PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/V8Engine.h
        ${CMAKE_CURRENT_LIST_DIR}/V8Engine.hpp
        ${CMAKE_CURRENT_LIST_DIR}/V8Helper.h
        ${CMAKE_CURRENT_LIST_DIR}/V8Helper.hpp
        ${CMAKE_CURRENT_LIST_DIR}/V8Platform.h
        ${CMAKE_CURRENT_LIST_DIR}/V8Reference.hpp
        ${CMAKE_CURRENT_LIST_DIR}/V8Scope.h
        ${CMAKE_CURRENT_LIST_DIR}/V8Scope.hpp
        ${CMAKE_CURRENT_LIST_DIR}/V8Helper.hpp
        ${CMAKE_CURRENT_LIST_DIR}/V8Native.hpp
        ${CMAKE_CURRENT_LIST_DIR}/trait/TraitReference.h
        ${CMAKE_CURRENT_LIST_DIR}/trait/TraitScope.h
        ${CMAKE_CURRENT_LIST_DIR}/trait/TraitEngine.h
        ${CMAKE_CURRENT_LIST_DIR}/trait/TraitException.h
        ${CMAKE_CURRENT_LIST_DIR}/trait/TraitIncludes.h
        )