#pragma once

#include <format>
#include <string>

namespace ll {
class SourceLocation {
public:
    static consteval SourceLocation current(
        int         line     = __builtin_LINE(),
        int         column   = __builtin_COLUMN(),
        char const* file     = __builtin_FILE(),
        char const* function = __builtin_FUNCTION()
    ) noexcept {
        return {line, column, file, function};
    }

    consteval SourceLocation(int line, int column, char const* file, char const* function) noexcept
    : mLine(line),
      mColumn(column),
      mFile(file),
      mFunction(function) {}

    [[nodiscard]] int         line() const noexcept { return mLine; }
    [[nodiscard]] int         column() const noexcept { return mColumn; }
    [[nodiscard]] char const* file() const noexcept { return mFile; }
    [[nodiscard]] char const* function() const noexcept { return mFunction; }

    [[nodiscard]] std::string toString() const {
        return std::format("{} at {}({}:{})", mFunction, mFile, mLine, mColumn);
    }

private:
    int         mLine;
    int         mColumn;
    char const* mFile;
    char const* mFunction;
};
} // namespace ll
