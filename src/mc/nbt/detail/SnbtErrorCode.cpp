#include "mc/nbt/detail/SnbtErrorCode.h"

#include <system_error>

#include "ll/api/Expected.h"
#include "ll/api/i18n/I18n.h"

namespace ll::nbt::detail {
using namespace ::ll::i18n_literals;
struct snbt_category : public std::error_category {
    constexpr snbt_category() noexcept : error_category() {}
    [[nodiscard]] std::string message(int errCode) const override {
        using enum SnbtErrorCode;
        switch ((SnbtErrorCode)errCode) {
        case NotTheExpectedType:
            return "Not the expected type"_tr();
        case UnexpectedEofEncountered:
            return "unexpected end-of-file encountered"_tr();
        case UnterminatedComment:
            return "unterminated comment, missing closing '*/'"_tr();
        case NotANumber:
            return "not a number"_tr();
        case NumberOutOfRange:
            return "number out of range"_tr();
        case NotAUnicodeEncodedHex:
            return "'\\u' must be followed by 4 hex digits"_tr();
        case IllegalOmittedQuotesString:
            return "strings omitting quotes must be trivial characters"_tr();
        case QuoteEscapeNotMatch:
            return "quotation marks illegally escaped"_tr();
        case Utf8Codepoint2NotInRange:
            return "surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF"_tr();
        case Utf8Codepoint2Missing:
            return "missing U+DC00..U+DFFF after U+D800..U+DBFF"_tr();
        case Utf8Codepoint1Missing:
            return "surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF"_tr();
        case IllegalEscape:
            return "forbidden character after backslash"_tr();
        case IllegalUtf8Character:
            return "ill-formed UTF-8 byte"_tr();
        case UnclosedBracket:
            return "brackets are not closed"_tr();
        case IllegalKeyValueSeparator:
            return "illegal key-value pair separator"_tr();
        case EmptyString:
            return "empty string"_tr();
        default:
            return "unknown error"_tr();
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
