#pragma once

#include <string>

#include "ll/api/base/CompilerPredefine.h"

#include "fmt/format.h"

namespace ll {
class SourceLocation {
public:
    char const* mFile;
    char const* mFunction;
    char const* mFuncsig;
    int         mLine;
    int         mColumn;

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

    [[nodiscard]] char const* file() const noexcept { return mFile; }
    [[nodiscard]] char const* function() const noexcept { return mFunction; }
    [[nodiscard]] char const* funcsig() const noexcept { return mFuncsig; }
    [[nodiscard]] int         line() const noexcept { return mLine; }
    [[nodiscard]] int         column() const noexcept { return mColumn; }

    [[nodiscard]] std::string toString() const {
        return fmt::format("{} at {}({}:{})", mFunction, mFile, mLine, mColumn);
    }
};
} // namespace ll
