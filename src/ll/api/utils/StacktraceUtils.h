#pragma once

#include <atomic>
#include <optional>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll {

class Stacktrace;

class StacktraceEntry {
    friend ::ll::Stacktrace;
    void* address{};
    StacktraceEntry(void* address) : address(address) {}

public:
    using native_handle_type = void*;

    void* native_handle() const { return address; }
};
class Stacktrace {
    std::vector<StacktraceEntry> entries;
    uint64                       hash;

public:
    LLNDAPI static Stacktrace current(size_t skip = 0, size_t maxDepth = ~0ull);

    uint64 getHash() const { return hash; }

    size_t size() const { return entries.size(); }

    bool empty() const { return entries.empty(); }

    StacktraceEntry const& operator[](size_t index) const { return entries[index]; }
};
} // namespace ll

namespace std {
template <>
struct hash<ll::StacktraceEntry> {
    [[nodiscard]] size_t operator()(ll::StacktraceEntry const& val) const noexcept {
        return hash<ll::StacktraceEntry::native_handle_type>{}(val.native_handle());
    }
};
template <>
struct hash<ll::Stacktrace> {
    [[nodiscard]] size_t operator()(ll::Stacktrace const& val) const noexcept { return val.getHash(); }
};
} // namespace std

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

LLNDAPI StackTraceEntryInfo getInfo(StacktraceEntry const&);
LLNDAPI std::string toString(StacktraceEntry const&);
LLNDAPI std::string toString(Stacktrace const&);
} // namespace ll::inline utils::stacktrace_utils
