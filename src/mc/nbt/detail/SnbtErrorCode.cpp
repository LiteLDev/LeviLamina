#include "mc/nbt/detail/SnbtErrorCode.h"

#include <system_error>

#include "ll/api/Expected.h"

namespace ll::nbt::detail {
struct snbt_category : public std::error_category {
    constexpr snbt_category() noexcept : error_category() {}
    [[nodiscard]] std::string message(int errCode) const override {
        using enum SnbtErrorCode;
        switch ((SnbtErrorCode)errCode) {
        case NoError:
            return "success";
        case NotTheExpectedType:
            return "Not the expected type";
        case UnexpectedEofEncountered:
            return "unexpected end-of-file encountered";
        case UnterminatedComment:
            return "unterminated comment, missing closing '*/'";
        case NotANumber:
            return "not a number";
        case NumberOutOfRange:
            return "number out of range";
        case NotAUnicodeEncodedHex:
            return "'\\u' must be followed by 4 hex digits";
        case IllegalOmittedQuotesString:
            return "strings omitting quotes must be trivial characters";
        case QuoteEscapeNotMatch:
            return "quotation marks illegally escaped";
        case Utf8Codepoint2NotInRange:
            return "surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
        case Utf8Codepoint2Missing:
            return "missing U+DC00..U+DFFF after U+D800..U+DBFF";
        case Utf8Codepoint1Missing:
            return "surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
        case IllegalEscape:
            return "forbidden character after backslash";
        case IllegalUtf8Character:
            return "ill-formed UTF-8 byte";
        case UnclosedBracket:
            return "brackets are not closed";
        case IllegalKeyValueSeparator:
            return "illegal key-value pair separator";
        case EmptyString:
            return "empty string";
        default:
            return "unknown error";
        }
    }
    [[nodiscard]] char const* name() const noexcept override { return "snbt"; }
};
inline std::error_category const& snbt_category() noexcept {
    return std::_Immortalize_memcpy_image<struct snbt_category>();
}

ll::Unexpected makeSnbtError(SnbtErrorCode code) {
    return makeErrorCodeError(std::error_code{fmt::underlying(code), snbt_category()});
}
} // namespace ll::nbt::detail
