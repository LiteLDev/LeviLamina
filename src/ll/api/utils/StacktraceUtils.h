#pragma once

#if _HAS_CXX23
#include <atomic>
#include <optional>
#include <stacktrace>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

struct _CONTEXT; // NOLINT(bugprone-reserved-identifier)

namespace ll::inline utils::stacktrace_utils {
class SymbolLoader {
    void*                     handle;
    static std::atomic_ullong count;

public:
    SymbolLoader(SymbolLoader const&)            = delete;
    SymbolLoader& operator=(SymbolLoader const&) = delete;

    LLAPI SymbolLoader();
    LLAPI SymbolLoader(std::string_view);
    LLAPI ~SymbolLoader();
};

struct StackTraceEntryInfo {
    std::optional<size_t> displacement;
    std::string           name;
    std::optional<ulong>  line;
    std::string           file;
};

LLNDAPI uintptr_t           tryGetSymbolAddress(std::string_view);
LLNDAPI StackTraceEntryInfo getInfo(std::stacktrace_entry const&);
LLNDAPI std::string toString(std::stacktrace_entry const&);
LLNDAPI std::string toString(std::stacktrace const&);
LLNDAPI std::string toString(_CONTEXT const&);
} // namespace ll::inline utils::stacktrace_utils

#endif
