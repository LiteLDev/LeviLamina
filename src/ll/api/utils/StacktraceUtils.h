#pragma once

#include <atomic>
#include <optional>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

#include "boost/stacktrace.hpp"

namespace ll {
using stacktrace       = ::boost::stacktrace::stacktrace;
using stacktrace_entry = ::boost::stacktrace::frame;
} // namespace ll

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
LLNDAPI StackTraceEntryInfo getInfo(stacktrace_entry const&);
LLNDAPI std::string toString(stacktrace_entry const&);
LLNDAPI std::string toString(stacktrace const&);
} // namespace ll::inline utils::stacktrace_utils
