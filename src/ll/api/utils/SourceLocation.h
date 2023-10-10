#pragma once

#include <format>
#include <string>

namespace ll {
class SourceLocation {
    int         line_;
    int         column_;
    const char* file_;
    const char* function_;

public:
    static consteval SourceLocation current(
        int         line     = __builtin_LINE(),
        int         column   = __builtin_COLUMN(),
        const char* file     = __builtin_FILE(),
        const char* function = __builtin_FUNCTION()
    ) noexcept {
        return {line, column, file, function};
    }

    consteval SourceLocation(int line, int column, const char* file, const char* function) noexcept
    : line_(line),
      column_(column),
      file_(file),
      function_(function) {}

    [[nodiscard]] int         line() const noexcept { return line_; }
    [[nodiscard]] int         column() const noexcept { return column_; }
    [[nodiscard]] const char* file() const noexcept { return file_; }
    [[nodiscard]] const char* function() const noexcept { return function_; }

    [[nodiscard]] std::string toString() const {
        return std::format("{} at {}({}:{})", function_, file_, line_, column_);
    }
};
} // namespace ll
