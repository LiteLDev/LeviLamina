#include "ll/api/utils/Base64Utils.h"
#include "ll/api/utils/HashUtils.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/detail/SnbtErrorCode.h"

namespace ll::nbt::detail {
Expected<CompoundTagVariant> parseSnbtValue(std::string_view& s) noexcept;
Expected<CompoundTagVariant> parseSnbtValueNonSkip(std::string_view& s);

Unexpected makeSnbtError(SnbtErrorCode);

bool isTrivialNbtStringChar(char c) { return isalnum(c) || c == '-' || c == '+' || c == '_' || c == '.'; }
} // namespace ll::nbt::detail
namespace ll {

using namespace hash_literals;
using namespace nbt::detail;

Expected<> scanComment(std::string_view& s) noexcept {
    size_t i = 0;
    switch (s[i++]) {
    // multi-line comments skip input until */ is read
    case '*': {
        while (i < s.size()) {
            switch (s[i++]) {
            case std::char_traits<char>::eof():
            case '\0':
                return makeSnbtError(SnbtErrorCode::UnexpectedEofEncountered);
            case '*': {
                switch (s[i]) {
                case '/':
                    s.remove_prefix(std::min(i + 1, s.size()));
                    return {};

                default:
                    continue;
                }
            }

            default:
                continue;
            }
        }
        break;
    }
    default:
        // {
        //     // unexpected character after reading '/'
        //     return false;
        // }
        // // single-line comments skip input until a newline or EOF is read
        // case '/':
        {
            while (i < s.size()) {
                switch (s[i++]) {
                case '\n':
                case '\r':
                case std::char_traits<char>::eof():
                case '\0':
                    s.remove_prefix(std::min(i, s.size()));
                    return {};

                default:
                    break;
                }
            }
            break;
        }
    }
    return makeSnbtError(SnbtErrorCode::UnterminatedComment);
}

void scanSpaces(std::string_view& s) noexcept {
    size_t i = 0;
    while (i <= s.size() && std::isspace(s[i++])) {}
    s.remove_prefix(std::min(i - 1, s.size()));
}

Expected<> skipWhitespace(std::string_view& s) {
    scanSpaces(s);
    while (s.front() == '/' || s.front() == '#' || s.front() == ';') {
        s.remove_prefix(1);
        if (auto res = scanComment(s); !res) {
            return res;
        }
        scanSpaces(s);
    }
    return {};
}

char get(std::string_view& s) {
    if (s.empty()) return '\0';
    char c = s.front();
    s.remove_prefix(1);
    return c;
}

Expected<ldouble> stold(std::string_view const& s, size_t& n) {
    int&        errnoRef = errno; // Nonzero cost, pay it once
    char const* ptr      = s.data();
    char*       eptr;
    errnoRef          = 0;
    const ldouble res = strtold(ptr, &eptr);

    if (ptr == eptr) {
        return makeSnbtError(SnbtErrorCode::NotANumber);
    }

    if (errnoRef == ERANGE) {
        return makeSnbtError(SnbtErrorCode::NumberOutOfRange);
    }

    n = static_cast<size_t>(eptr - ptr);

    return res;
}
template <class R, class T>
Expected<CompoundTagVariant> checkRange(ldouble& num) {
    if (std::numeric_limits<T>::lowest() <= num && num <= std::numeric_limits<T>::max()) {
        return R{(T)num};
    } else if constexpr (!std::is_floating_point_v<T>) {
        using unsigned_t = std::make_unsigned_t<T>;
        if (std::numeric_limits<unsigned_t>::lowest() <= num && num <= std::numeric_limits<unsigned_t>::max()) {
            return R{(unsigned_t)num};
        }
    }
    return makeSnbtError(SnbtErrorCode::NumberOutOfRange);
}

Expected<CompoundTagVariant> parseNumber(std::string_view& s) {

    size_t n = 0;

    ldouble res;

    if (auto tmp = stold(s, n); tmp) {
        res = *tmp;
    } else {
        return forwardError(tmp.error());
    }
    bool isInt = true;

    for (size_t i = 0; i < n; i++) {
        if (!std::isxdigit(s[i]) && s[i] != '-') {
            isInt = false;
        }
    }

    s.remove_prefix(n);

    switch (s.front()) {
    case 'b':
    case 'B':
        s.remove_prefix(1);
        return checkRange<ByteTag, schar>(res);
    case 's':
    case 'S':
        s.remove_prefix(1);
        return checkRange<ShortTag, short>(res);
    case 'i':
    case 'I':
        s.remove_prefix(1);
        return checkRange<IntTag, int>(res);
    case 'l':
    case 'L':
        s.remove_prefix(1);
        return checkRange<Int64Tag, int64>(res);
    case 'f':
    case 'F':
        s.remove_prefix(1);
        return checkRange<FloatTag, float>(res);
    case 'd':
    case 'D':
        s.remove_prefix(1);
        return checkRange<DoubleTag, double>(res);
    default:
        break;
    }
    if (s.size() >= 6) switch (ll::hash_utils::doHash(s.substr(0, 6))) {
        case " /*b*/"_h:
        case " /*B*/"_h:
            s.remove_prefix(6);
            return checkRange<ByteTag, schar>(res);
        case " /*s*/"_h:
        case " /*S*/"_h:
            s.remove_prefix(6);
            return checkRange<ShortTag, short>(res);
        case " /*i*/"_h:
        case " /*I*/"_h:
            s.remove_prefix(6);
            return checkRange<IntTag, int>(res);
        case " /*l*/"_h:
        case " /*L*/"_h:
            s.remove_prefix(6);
            return checkRange<Int64Tag, int64>(res);
        case " /*f*/"_h:
        case " /*F*/"_h:
            s.remove_prefix(6);
            return checkRange<FloatTag, float>(res);
        case " /*d*/"_h:
        case " /*D*/"_h:
            s.remove_prefix(6);
            return checkRange<DoubleTag, double>(res);
        default:
            break;
        }
    if (isInt) {
        if (std::numeric_limits<int>::lowest() <= res && res <= std::numeric_limits<int>::max()) {
            return IntTag{(int)res};
        } else {
        }
        return checkRange<IntTag, int>(res).or_else([&](Error&&) { return checkRange<Int64Tag, int64>(res); });
    } else {
        return DoubleTag{(double)res};
    }
}

Expected<int> get_codepoint(std::string_view& s) {
    int codepoint = 0;

    for (const auto factor : {12u, 8u, 4u, 0u}) {
        auto current = get(s);

        if (current >= '0' && current <= '9') {
            codepoint += static_cast<int>((static_cast<uint>(current) - 0x30u) << factor);
        } else if (current >= 'A' && current <= 'F') {
            codepoint += static_cast<int>((static_cast<uint>(current) - 0x37u) << factor);
        } else if (current >= 'a' && current <= 'f') {
            codepoint += static_cast<int>((static_cast<uint>(current) - 0x57u) << factor);
        } else {
            return makeSnbtError(SnbtErrorCode::NotAUnicodeEncodedHex);
        }
    }

    return codepoint;
}

Expected<std::string> parseString(std::string_view& s) {

    char starts = s.front();

    if (starts != '\"' && starts != '\'' && !isTrivialNbtStringChar(starts)) {
        return makeSnbtError(SnbtErrorCode::IllegalOmittedQuotesString);
    }
    std::string res;

    if (starts == '\"' || starts == '\'') {
        s.remove_prefix(1);
    } else {
        while (!s.empty()) {
            auto fc = s.front();
            if (isTrivialNbtStringChar(fc)) {
                s.remove_prefix(1);
                res.push_back(fc);
            } else {
                return res;
            }
        }
    }

    while (!s.empty()) {
        // get next character

        auto current = get(s);

        switch (current) {

        // closing quote
        case '\"': {
            if (starts == '\"') {
                if (s.starts_with(" /*BASE64*/")) {
                    return ll::base64_utils::decode(res);
                }
                return res;
            }
            res.push_back('\"');
        } break;
        case '\'': {
            if (starts == '\'') {
                return res;
            }
            res.push_back('\'');
        } break;

        // escapes
        case '\\': {
            switch (get(s)) {
            // multiline string
            case '\n':
            case '\r':
                if (auto skipped = skipWhitespace(s); !skipped) {
                    return forwardError(skipped.error());
                }
                break;

            // quotation mark
            case '\"': {
                if (starts == '\"') {
                    res.push_back('\"');
                } else {
                    return makeSnbtError(SnbtErrorCode::QuoteEscapeNotMatch);
                }
            } break;
            case '\'': {
                if (starts == '\'') {
                    res.push_back('\'');
                } else {
                    return makeSnbtError(SnbtErrorCode::QuoteEscapeNotMatch);
                }
            } break;
            // reverse solidus
            case '\\':
                res.push_back('\\');
                break;
            // solidus
            case '/':
                res.push_back('/');
                break;
            // backspace
            case 'b':
                res.push_back('\b');
                break;
            // form feed
            case 'f':
                res.push_back('\f');
                break;
            // line feed
            case 'n':
                res.push_back('\n');
                break;
            // carriage return
            case 'r':
                res.push_back('\r');
                break;
            // tab
            case 't':
                res.push_back('\t');
                break;
            // vtab
            case 'v':
                res.push_back('\v');
                break;

            // unicode escapes
            case 'u': {
                int codepoint1;
                if (auto getted = get_codepoint(s); getted) {
                    codepoint1 = *getted;
                } else {
                    return forwardError(getted.error());
                }
                int codepoint = codepoint1; // start with codepoint1

                // check if code point is a high surrogate
                if (0xD800 <= codepoint1 && codepoint1 <= 0xDBFF) {
                    // expect next \uxxxx entry
                    if (get(s) == '\\' && get(s) == 'u') {
                        int codepoint2;
                        if (auto getted = get_codepoint(s); getted) {
                            codepoint2 = *getted;
                        } else {
                            return forwardError(getted.error());
                        }
                        // check if codepoint2 is a low surrogate
                        if ((0xDC00 <= codepoint2 && codepoint2 <= 0xDFFF)) {
                            // overwrite codepoint
                            codepoint = static_cast<int>(
                                // high surrogate occupies the most significant 22 bits
                                (static_cast<uint>(codepoint1) << 10u)
                                // low surrogate occupies the least significant 15 bits
                                + static_cast<uint>(codepoint2)
                                // there is still the 0xD800, 0xDC00 and 0x10000 noise
                                // in the result, so we have to subtract with:
                                // (0xD800 << 10) + DC00 - 0x10000 = 0x35FDC00
                                - 0x35FDC00u
                            );
                        } else {
                            return makeSnbtError(SnbtErrorCode::Utf8Codepoint2NotInRange);
                        }
                    } else {
                        return makeSnbtError(SnbtErrorCode::Utf8Codepoint2Missing);
                    }
                } else {
                    if (0xDC00 <= codepoint1 && codepoint1 <= 0xDFFF) {
                        return makeSnbtError(SnbtErrorCode::Utf8Codepoint1Missing);
                    }
                }

                // translate codepoint into bytes
                if (codepoint < 0x80) {
                    // 1-byte characters: 0xxxxxxx (ASCII)
                    res.push_back(static_cast<char>(codepoint));
                } else if (codepoint <= 0x7FF) {
                    // 2-byte characters: 110xxxxx 10xxxxxx
                    res.push_back(static_cast<char>(0xC0u | (static_cast<uint>(codepoint) >> 6u)));
                    res.push_back(static_cast<char>(0x80u | (static_cast<uint>(codepoint) & 0x3Fu)));
                } else if (codepoint <= 0xFFFF) {
                    // 3-byte characters: 1110xxxx 10xxxxxx 10xxxxxx
                    res.push_back(static_cast<char>(0xE0u | (static_cast<uint>(codepoint) >> 12u)));
                    res.push_back(static_cast<char>(0x80u | ((static_cast<uint>(codepoint) >> 6u) & 0x3Fu)));
                    res.push_back(static_cast<char>(0x80u | (static_cast<uint>(codepoint) & 0x3Fu)));
                } else {
                    // 4-byte characters: 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
                    res.push_back(static_cast<char>(0xF0u | (static_cast<uint>(codepoint) >> 18u)));
                    res.push_back(static_cast<char>(0x80u | ((static_cast<uint>(codepoint) >> 12u) & 0x3Fu)));
                    res.push_back(static_cast<char>(0x80u | ((static_cast<uint>(codepoint) >> 6u) & 0x3Fu)));
                    res.push_back(static_cast<char>(0x80u | (static_cast<uint>(codepoint) & 0x3Fu)));
                }
            } break;

            // other characters after escape
            default:
                return makeSnbtError(SnbtErrorCode::IllegalEscape);
            }
        } break;
        default:
            res.push_back(current);
            break;
        }
    }
    return makeSnbtError(SnbtErrorCode::IllegalUtf8Character);
}
template <class R, class T, class H, class F>
Expected<R> parseNumArray(std::string_view& s, F&& f) {
    if (auto skipped = skipWhitespace(s); !skipped) {
        return forwardError(skipped.error());
    }
    if (s.front() == ']') {
        return R{};
    }
    T res;
    while (!s.empty()) {
        if (auto skipped = skipWhitespace(s); !skipped) {
            return forwardError(skipped.error());
        }
        if (s.front() == ']') {
            s.remove_prefix(1);
            return res;
        }
        if (auto value = parseNumber(s); value) {
            if (!value->hold<H>()) {
                return makeSnbtError(SnbtErrorCode::NotTheExpectedType);
            } else {
                std::invoke(std::forward<F>(f), res, value->get<H>());
            }
        } else {
            return forwardError(value.error());
        }
        if (auto skipped = skipWhitespace(s); !skipped) {
            return forwardError(skipped.error());
        }
        switch (s.front()) {
        case ']':
            s.remove_prefix(1);
            return res;
        case ',':
            s.remove_prefix(1);
        default:
            break;
        }
    }
    return makeSnbtError(SnbtErrorCode::UnclosedBracket);
}

Expected<ByteArrayTag> parseByteArray(std::string_view& s) {
    return parseNumArray<ByteArrayTag, std::vector<uchar>, ByteTag>(s, [](auto&& vec, auto&& num) {
        vec.emplace_back(num);
    });
}

Expected<IntArrayTag> parseIntArray(std::string_view& s) {
    return parseNumArray<IntArrayTag, std::vector<int>, IntTag>(s, [](auto&& vec, auto&& num) {
        vec.emplace_back(num);
    });
}

Expected<ByteArrayTag> parseLongArray(std::string_view& s) {
    return parseNumArray<ByteArrayTag, std::vector<uchar>, Int64Tag>(s, [](auto&& vec, auto&& num) {
        int64 val = num;
        for (int j = 7; j >= 0; j--) {
            vec.emplace_back((uchar)(val >> (uint64)(8 * j)));
        }
    });
}

Expected<CompoundTagVariant> parseList(std::string_view& s) {
    if (s.starts_with("[ /*") && (s.size() > 7 && s[6] == '*' && s[7] == '/')) {
        s.remove_prefix(4);
    } else {
        s.remove_prefix(1);
    }
    if (s.starts_with("B;")) {
        s.remove_prefix(2);
        if (s.starts_with("*/")) {
            s.remove_prefix(2);
        }
        if (auto array = parseByteArray(s); array) {
            return *array;
        } else {
            return forwardError(array.error());
        }
    } else if (s.starts_with("I;")) {
        s.remove_prefix(2);
        if (s.starts_with("*/")) {
            s.remove_prefix(2);
        }
        if (auto array = parseIntArray(s); array) {
            return *array;
        } else {
            return forwardError(array.error());
        }
    } else if (s.starts_with("L;")) {
        s.remove_prefix(2);
        if (s.starts_with("*/")) {
            s.remove_prefix(2);
        }
        if (auto array = parseLongArray(s); array) {
            return *array;
        } else {
            return forwardError(array.error());
        }
    }
    if (auto skipped = skipWhitespace(s); !skipped) {
        return forwardError(skipped.error());
    }
    if (s.front() == ']') {
        s.remove_prefix(1);
        return ListTag{};
    }
    auto res = ListTag{};

    bool settedType = false;

    while (!s.empty()) {
        if (auto skipped = skipWhitespace(s); !skipped) {
            return forwardError(skipped.error());
        }
        if (s.front() == ']') {
            s.remove_prefix(1);
            return res;
        }
        auto value = parseSnbtValueNonSkip(s);
        if (!value) {
            return forwardError(value.error());
        }
        if (!settedType) {
            res.mType  = value->index();
            settedType = true;
        }
        res.mList.emplace_back(value->toUnique());

        if (auto skipped = skipWhitespace(s); !skipped) {
            return forwardError(skipped.error());
        }
        switch (s.front()) {
        case ']':
            s.remove_prefix(1);
            return res;
        case ',': {
            s.remove_prefix(1);
        }
        default:
            break;
        }
    }
    return makeSnbtError(SnbtErrorCode::UnclosedBracket);
}

Expected<CompoundTagVariant> parseCompound(std::string_view& s) {
    get(s);
    if (auto skipped = skipWhitespace(s); !skipped) {
        return forwardError(skipped.error());
    }
    if (s.front() == '}') {
        s.remove_prefix(1);
        return CompoundTag{};
    }
    CompoundTag res;
    while (!s.empty()) {
        if (auto skipped = skipWhitespace(s); !skipped) {
            return forwardError(skipped.error());
        }
        if (s.front() == '}') {
            s.remove_prefix(1);
            return res;
        }
        auto key = parseString(s);
        if (!key) {
            return forwardError(key.error());
        }
        if (auto skipped = skipWhitespace(s); !skipped) {
            return forwardError(skipped.error());
        }
        auto p = get(s);
        if (p != ':' && p != '=') {
            return makeSnbtError(SnbtErrorCode::IllegalKeyValueSeparator);
        }
        auto value = parseSnbtValue(s);
        if (!value) {
            return forwardError(value.error());
        }
        res[*key] = *value;

        switch (s.front()) {
        case '}':
            s.remove_prefix(1);
            return res;
        case ',':
            s.remove_prefix(1);
        default:
            break;
        }
    }
    return makeSnbtError(SnbtErrorCode::UnclosedBracket);
}
} // namespace ll
namespace ll::nbt::detail {
Expected<CompoundTagVariant> parseSnbtValueNonSkip(std::string_view& s) {
    if (s.empty()) {
        return makeSnbtError(SnbtErrorCode::EmptyString);
    }
    switch (s.front()) {
    case 't':
        if (s.starts_with("true")) {
            s.remove_prefix(4);
            return ByteTag{true};
        }
        break;
    case 'f':
        if (s.starts_with("false")) {
            s.remove_prefix(5);
            return ByteTag{false};
        }
        break;
    case 'n':
        if (s.starts_with("null")) {
            s.remove_prefix(4);
            return EndTag{};
        }
        break;
    case ']':
    case '}':
        s.remove_prefix(1);
        return makeSnbtError(SnbtErrorCode::UnclosedBracket);
    case std::char_traits<char>::eof():
    case '\0':
        return makeSnbtError(SnbtErrorCode::UnexpectedEofEncountered);
    case '-':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        return parseNumber(s);
    case '[':
        return parseList(s);
    case '{':
        return parseCompound(s);
    default:
        break;
    }
    return parseString(s);
}
Expected<CompoundTagVariant> parseSnbtValue(std::string_view& s) noexcept try {
    if (auto skipped = skipWhitespace(s); !skipped) {
        return forwardError(skipped.error());
    }
    auto res = parseSnbtValueNonSkip(s);
    if (!res) {
        return res;
    }
    if (auto skipped = skipWhitespace(s); !skipped) {
        return forwardError(skipped.error());
    }
    return res;
} catch (...) {
    return ll::makeExceptionError();
}
} // namespace ll::nbt::detail
