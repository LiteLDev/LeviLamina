#pragma once
#include "ll/api/base/Macro.h"
#include <string>
#if _HAS_CXX23
#include <stacktrace>

namespace ll::utils::stacktrace_utils {
class SymbolLoader {
    void* handle;

public:
    SymbolLoader(SymbolLoader const&)            = delete;
    SymbolLoader& operator=(SymbolLoader const&) = delete;

    LLAPI SymbolLoader();
    LLAPI ~SymbolLoader();
};

LLNDAPI std::string toString(std::stacktrace_entry const&);
LLNDAPI std::string toString(std::stacktrace const&);
} // namespace ll::utils::stacktrace_utils

#endif