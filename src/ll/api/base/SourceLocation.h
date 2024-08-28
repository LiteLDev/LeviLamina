#pragma once

#include <string>

#include "ll/api/base/CompilerPredefine.h"

#include "fmt/format.h"

namespace ll {
class SourceLocation {
public:
    static consteval SourceLocation current(
        char const* file     = LL_CURRENT_FILE,
        char const* function = LL_CURRENT_FUNCTION,
        int         line     = LL_CURRENT_LINE,
        int         column   = LL_CURRENT_COLUMN
    ) noexcept {
        return {file, function, line, column};
    }

    static consteval SourceLocation unknown() noexcept { return {"", "", 0, 0}; }

    consteval SourceLocation(char const* file, char const* function, int line, int column) noexcept
    : mLine(line),
      mColumn(column),
      mFile(file),
      mFunction(function) {}

    [[nodiscard]] int         line() const noexcept { return mLine; }
    [[nodiscard]] int         column() const noexcept { return mColumn; }
    [[nodiscard]] char const* file() const noexcept { return mFile; }
    [[nodiscard]] char const* function() const noexcept { return mFunction; }

    [[nodiscard]] std::string toString() const {
        return fmt::format("{} at {}({}:{})", mFunction, mFile, mLine, mColumn);
    }

private:
    char const* mFile;
    char const* mFunction;
    int         mLine;
    int         mColumn;
};
} // namespace ll
