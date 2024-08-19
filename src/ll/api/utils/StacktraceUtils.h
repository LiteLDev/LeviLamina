#pragma once

#include <atomic>
#include <optional>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

#include "boost/stacktrace.hpp"

namespace ll::inline utils::stacktrace_utils {
class SymbolLoader {
    void*                     handle;
    static std::atomic_size_t count;

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
LLNDAPI StackTraceEntryInfo getInfo(boost::stacktrace::frame const&);
LLNDAPI std::string toString(boost::stacktrace::frame const&);
LLNDAPI std::string toString(boost::stacktrace::stacktrace const&);
} // namespace ll::inline utils::stacktrace_utils
