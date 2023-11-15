#pragma once

#include <format>
#include <string>

namespace ll {
class SourceLocation {
    int         line_;
    int         column_;
    char const* file_;
    char const* function_;

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
    : line_(line),
      column_(column),
      file_(file),
      function_(function) {}

    [[nodiscard]] int         line() const noexcept { return line_; }
    [[nodiscard]] int         column() const noexcept { return column_; }
    [[nodiscard]] char const* file() const noexcept { return file_; }
    [[nodiscard]] char const* function() const noexcept { return function_; }

    [[nodiscard]] std::string toString() const {
        return std::format("{} at {}({}:{})", function_, file_, line_, column_);
    }
};
} // namespace ll
