target_sources(ScriptX PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/WasmEngine.cc
        ${CMAKE_CURRENT_LIST_DIR}/WasmEngine.h
        ${CMAKE_CURRENT_LIST_DIR}/WasmEngine.hpp
        ${CMAKE_CURRENT_LIST_DIR}/WasmException.cc
        ${CMAKE_CURRENT_LIST_DIR}/WasmLocalReference.cc
        ${CMAKE_CURRENT_LIST_DIR}/WasmNative.cc
        ${CMAKE_CURRENT_LIST_DIR}/WasmNative.hpp
        ${CMAKE_CURRENT_LIST_DIR}/WasmReference.hpp
        ${CMAKE_CURRENT_LIST_DIR}/WasmUtils.cc
        ${CMAKE_CURRENT_LIST_DIR}/WasmValue.cc
        ${CMAKE_CURRENT_LIST_DIR}/WasmHelper.h
        ${CMAKE_CURRENT_LIST_DIR}/WasmHelper.cc
        ${CMAKE_CURRENT_LIST_DIR}/WasmScope.hpp
        ${CMAKE_CURRENT_LIST_DIR}/WasmScope.cc
        )