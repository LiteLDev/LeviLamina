#pragma once

#include <string>

#include "ll/api/base/CompilerPredefine.h"
#include "ll/api/base/FixedString.h"

#include "fmt/format.h"

namespace ll {
class SourceLocation {
public:
    // Fixed capacities keep SourceLocation a structural type, so it can be used as a non-type template argument.
    static constexpr size_t FileCapacity     = 260;
    static constexpr size_t FunctionCapacity = 128;
    static constexpr size_t FuncsigCapacity  = 256;

    FixedString<FileCapacity>     mFile;
    FixedString<FunctionCapacity> mFunction;
    FixedString<FuncsigCapacity>  mFuncsig;
    int                           mLine;
    int                           mColumn;

    static consteval SourceLocation current(
        char const* file     = LL_CURRENT_FILE,
        char const* function = LL_CURRENT_FUNCTION,
        char const* funcsig  = LL_CURRENT_FUNCSIG,
        int         line     = LL_CURRENT_LINE,
        int         column   = LL_CURRENT_COLUMN
    ) noexcept {
        return {file, function, funcsig, line, column};
    }

    static consteval SourceLocation unknown() noexcept { return {"", "", "", 0, 0}; }

    consteval SourceLocation(char const* file, char const* function, char const* funcsig, int line, int column) noexcept
    : mFile(file),
      mFunction(function),
      mFuncsig(funcsig),
      mLine(line),
      mColumn(column) {}

    [[nodiscard]] char const* file() const noexcept { return mFile.c_str(); }
    [[nodiscard]] char const* function() const noexcept { return mFunction.c_str(); }
    [[nodiscard]] char const* funcsig() const noexcept { return mFuncsig.c_str(); }
    [[nodiscard]] int         line() const noexcept { return mLine; }
    [[nodiscard]] int         column() const noexcept { return mColumn; }

    [[nodiscard]] std::string toString() const {
        return fmt::format("{} at {}({}:{})", mFunction.sv(), mFile.sv(), mLine, mColumn);
    }
};

template <size_t N>
struct FixedStrWithLoc : FixedString<N> {
    SourceLocation location;

    consteval FixedStrWithLoc(std::string_view s, SourceLocation const& loc = SourceLocation::current()) noexcept
    : FixedString<N>(s),
      location(loc) {}
    consteval FixedStrWithLoc(char const* s, SourceLocation const& loc = SourceLocation::current()) noexcept
    : FixedString<N>(s),
      location(loc) {}

    constexpr SourceLocation const& loc() const noexcept { return location; }
};

template <size_t N>
FixedStrWithLoc(char const (&)[N]) -> FixedStrWithLoc<N - 1>;

} // namespace ll
