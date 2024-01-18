#include "ll/api/utils/Base64Utils.h"
#include "ll/api/utils/HashUtils.h"
#include "mc/nbt/CompoundTag.h"

namespace ll::nbt::detail {
std::optional<CompoundTagVariant> parseSnbtValue(std::string_view& s);

bool isTrivialNbtStringChar(char c) { return isalnum(c) || c == '-' || c == '+' || c == '_' || c == '.'; }
} // namespace ll::nbt::detail
namespace {

using namespace ll::hash_literals;
using namespace ll::hash_utils;
using namespace ll::nbt::detail;

bool scanComment(std::string_view& s) noexcept {
    size_t i = 0;
    switch (s[i++]) {
    // multi-line comments skip input until */ is read
    case '*': {
        while (i < s.size()) {
            switch (s[i++]) {
            case std::char_traits<char>::eof():
            case '\0': {
                return false;
            }
            case '*': {
                switch (s[i]) {
                case '/':
                    s.remove_prefix(std::min(i + 1, s.size()));
                    return true;

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
                    return true;

                default:
                    break;
                }
            }
            break;
        }
    }
    return false;
}

bool scanSpaces(std::string_view& s) noexcept {
    size_t i = 0;
    while (i <= s.size() && std::isspace(s[i++])) {}
    s.remove_prefix(std::min(i - 1, s.size()));
    return true;
}

bool skipWhitespace(std::string_view& s) {
    scanSpaces(s);
    while (s.front() == '/' || s.front() == '#' || s.front() == ';') {
        s.remove_prefix(1);
        if (!scanComment(s)) {
            return false;
        }
        scanSpaces(s);
    }
    return true;
}

char get(std::string_view& s) {
    if (s.empty()) return '\0';
    char c = s.front();
    s.remove_prefix(1);
    return c;
}

std::optional<ldouble> stold(std::string_view const& s, size_t& n) {
    int&        errnoRef = errno; // Nonzero cost, pay it once
    char const* ptr      = s.data();
    char*       eptr;
    errnoRef          = 0;
    const ldouble res = strtold(ptr, &eptr);

    if (ptr == eptr) {
        return std::nullopt;
    }

    if (errnoRef == ERANGE) {
        return std::nullopt;
    }

    n = static_cast<size_t>(eptr - ptr);

    return res;
}

std::optional<CompoundTagVariant> parseNumber(std::string_view& s) {

    size_t n = 0;

    ldouble res;

    if (auto tmp = stold(s, n); tmp) {
        res = *tmp;
    } else {
        return std::nullopt;
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
        return ByteTag{(schar)res};
    case 's':
    case 'S':
        s.remove_prefix(1);
        return ShortTag{(short)res};
    case 'l':
    case 'L':
        s.remove_prefix(1);
        return Int64Tag{(int64)res};
    case 'f':
    case 'F':
        s.remove_prefix(1);
        return FloatTag{(float)res};
    case 'd':
    case 'D':
        s.remove_prefix(1);
        return DoubleTag{(double)res};
    case 'i':
    case 'I':
        s.remove_prefix(1);
        return IntTag{(int)res};
    default:
        break;
    }
    if (s.size() >= 6) switch (do_hash(s.substr(0, 6))) {
        case " /*b*/"_h:
        case " /*B*/"_h:
            s.remove_prefix(6);
            return ByteTag{(schar)res};
        case " /*s*/"_h:
        case " /*S*/"_h:
            s.remove_prefix(6);
            return ShortTag{(short)res};
        case " /*l*/"_h:
        case " /*L*/"_h:
            s.remove_prefix(6);
            return Int64Tag{(int64)res};
        case " /*f*/"_h:
        case " /*F*/"_h:
            s.remove_prefix(6);
            return FloatTag{(float)res};
        case " /*d*/"_h:
        case " /*D*/"_h:
            s.remove_prefix(6);
            return DoubleTag{(double)res};
        case " /*i*/"_h:
        case " /*I*/"_h:
            s.remove_prefix(6);
            return IntTag{(int)res};
        default:
            break;
        }
    if (isInt) {
        if (abs(res) <= INT32_MAX) {
            return IntTag{(int)res};
        } else {
            return Int64Tag{(int64)res};
        }
    } else {
        return DoubleTag{(double)res};
    }
}

int get_codepoint(std::string_view& s) {
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
            return -1;
        }
    }

    return codepoint;
}

std::optional<std::string> parseString(std::string_view& s) {

    char starts = s.front();

    if (starts != '\"' && starts != '\'' && !isTrivialNbtStringChar(starts)) {
        return std::nullopt;
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
                if (!skipWhitespace(s)) {
                    return std::nullopt;
                }
                break;

            // quotation mark
            case '\"': {
                if (starts == '\"') {
                    res.push_back('\"');
                } else {
                    return std::nullopt;
                }
            } break;
            case '\'': {
                if (starts == '\'') {
                    res.push_back('\'');
                } else {
                    return std::nullopt;
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

                const int codepoint1 = get_codepoint(s);
                int       codepoint  = codepoint1; // start with codepoint1

                if (codepoint1 == -1) {
                    return std::nullopt;
                }

                // check if code point is a high surrogate
                if (0xD800 <= codepoint1 && codepoint1 <= 0xDBFF) {
                    // expect next \uxxxx entry
                    if (get(s) == '\\' && get(s) == 'u') {
                        const int codepoint2 = get_codepoint(s);

                        if (codepoint2 == -1) {
                            return std::nullopt;
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
                            return std::nullopt;
                        }
                    } else {
                        return std::nullopt;
                    }
                } else {
                    if (0xDC00 <= codepoint1 && codepoint1 <= 0xDFFF) {
                        return std::nullopt;
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
                return std::nullopt;
            }
        } break;
        default:
            res.push_back(current);
            break;
        }
    }
    return std::nullopt;
}


std::optional<ByteArrayTag> parseByteArray(std::string_view& s) {
    if (!skipWhitespace(s)) {
        return std::nullopt;
    }

    if (s.front() == ']') {
        return ByteArrayTag{};
    }

    auto res = std::vector<schar>{};
    res.clear();

    while (!s.empty()) {

        if (!skipWhitespace(s)) {
            return std::nullopt;
        }
        if (s.front() == ']') {
            s.remove_prefix(1);
            return res;
        }
        auto value = parseNumber(s);
        if (!skipWhitespace(s)) {
            return std::nullopt;
        }

        if (!value || !(*value).hold<ByteTag>()) {
            return std::nullopt;
        }

        res.emplace_back((*value).get<ByteTag>());

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

    return std::nullopt;
}

std::optional<IntArrayTag> parseIntArray(std::string_view& s) {
    if (!skipWhitespace(s)) {
        return std::nullopt;
    }

    if (s.front() == ']') {
        return IntArrayTag{};
    }

    auto res = std::vector<int>{};
    res.clear();

    while (!s.empty()) {

        if (!skipWhitespace(s)) {
            return std::nullopt;
        }
        if (s.front() == ']') {
            s.remove_prefix(1);
            return res;
        }
        auto value = parseNumber(s);
        if (!skipWhitespace(s)) {
            return std::nullopt;
        }

        if (!value || !(*value).hold<IntTag>()) {
            return std::nullopt;
        }

        res.emplace_back((*value).get<IntTag>());

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

    return std::nullopt;
}

std::optional<ByteArrayTag> parseLongArray(std::string_view& s) {
    if (!skipWhitespace(s)) {
        return std::nullopt;
    }

    if (s.front() == ']') {
        return ByteArrayTag{};
    }

    auto res = std::vector<int64>{};
    res.clear();

    while (!s.empty()) {

        if (!skipWhitespace(s)) {
            return std::nullopt;
        }
        if (s.front() == ']') {
            s.remove_prefix(1);
            return ByteArrayTag{std::in_place_type<int64>, std::span{res}};
        }
        auto value = parseNumber(s);
        if (!skipWhitespace(s)) {
            return std::nullopt;
        }

        if (!value || !(*value).hold<Int64Tag>()) {
            return std::nullopt;
        }

        res.emplace_back((*value).get<Int64Tag>());

        switch (s.front()) {
        case ']':
            s.remove_prefix(1);
            return ByteArrayTag{std::in_place_type<int64>, std::span{res}};
        case ',':
            s.remove_prefix(1);
        default:
            break;
        }
    }

    return std::nullopt;
}

std::optional<CompoundTagVariant> parseList(std::string_view& s) {
    if (s.starts_with("[B;")) {
        s.remove_prefix(3);
        if (auto array = parseByteArray(s); array) {
            return *array;
        }
        return std::nullopt;
    } else if (s.starts_with("[I;")) {
        s.remove_prefix(3);
        if (auto array = parseIntArray(s); array) {
            return *array;
        }
        return std::nullopt;
    } else if (s.starts_with("[L;")) {
        s.remove_prefix(3);
        if (auto array = parseLongArray(s); array) {
            return *array;
        }
        return std::nullopt;
    } else if (s.starts_with("[ /*B;*/")) {
        s.remove_prefix(8);
        if (auto array = parseByteArray(s); array) {
            return *array;
        }
        return std::nullopt;
    } else if (s.starts_with("[ /*I;*/")) {
        s.remove_prefix(8);
        if (auto array = parseIntArray(s); array) {
            return *array;
        }
        return std::nullopt;
    } else if (s.starts_with("[ /*L;*/")) {
        s.remove_prefix(8);
        if (auto array = parseLongArray(s); array) {
            return *array;
        }
        return std::nullopt;
    }
    get(s);
    if (!skipWhitespace(s)) {
        return std::nullopt;
    }

    if (s.front() == ']') {
        return ListTag{};
    }

    auto res = ListTag{};
    res.mList.clear();

    bool settedType = false;

    while (!s.empty()) {

        auto value = parseSnbtValue(s);

        if (!value) {
            return res;
        }
        if (!settedType) {
            res.mType  = (*value).index();
            settedType = true;
        }

        res.mList.emplace_back((*value).toUnique());


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

    return std::nullopt;
}

std::optional<CompoundTag> parseCompound(std::string_view& s) {
    get(s);
    if (!skipWhitespace(s)) {
        return std::nullopt;
    }

    if (s.front() == '}') {
        s.remove_prefix(1);
        return CompoundTag{};
    }
    auto res = CompoundTag{};
    while (!s.empty()) {
        if (!skipWhitespace(s)) {
            return std::nullopt;
        }
        if (s.front() == '}') {
            s.remove_prefix(1);
            return res;
        }
        auto key = parseString(s);

        if (!key) {
            return std::nullopt;
        }

        if (!skipWhitespace(s)) {
            return std::nullopt;
        }

        auto p = get(s);
        if (p != ':' && p != '=') {
            return std::nullopt;
        }

        auto value = parseSnbtValue(s);

        if (!value) {
            return res;
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

    return std::nullopt;
}
} // namespace
namespace ll::nbt::detail {
std::optional<CompoundTagVariant> parseSnbtValue(std::string_view& s) {

    if (!skipWhitespace(s)) {
        return std::nullopt;
    }

    std::optional<CompoundTagVariant> res = std::nullopt;

    switch (s.front()) {
    case ']':
    case '}':
        s.remove_prefix(1);
    case '\0':
        return std::nullopt;

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
        res = parseNumber(s);
        break;
    case '[':
        if (auto list = parseList(s); list) {
            res = *list;
            break;
        } else {
            return std::nullopt;
        }
    case '{':
        if (auto compound = parseCompound(s); compound) {
            res = *compound;
            break;
        } else {
            return std::nullopt;
        }
    default:
        break;
    }

    if (!res) {
        if (s.starts_with("true")) {
            s.remove_prefix(4);
            res = ByteTag{true};
        } else if (s.starts_with("false")) {
            s.remove_prefix(5);
            res = ByteTag{false};
        } else if (s.starts_with("null")) {
            s.remove_prefix(4);
            res = EndTag{};
        } else if (auto str = parseString(s); str) {
            res = StringTag{*str};
        }
    }

    if (!skipWhitespace(s)) {
        return std::nullopt;
    }

    return res;
}
} // namespace ll::nbt::detail
