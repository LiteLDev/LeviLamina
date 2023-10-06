#include "mc/nbt/CompoundTag.h"

std::optional<CompoundTagVariant> parseSnbtValue(std::string_view& s);

bool scanComment(std::string_view& s) noexcept {
    size_t i = 0;
    switch (s[i++]) {
    // single-line comments skip input until a newline or EOF is read
    case '/': {
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
    }

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
    }

    // unexpected character after reading '/'
    default: {
        return false;
    }
    }
}

bool scanSpaces(std::string_view& s) noexcept {
    size_t i = 0;
    while (i <= s.size() && std::isspace(s[i++])) {}
    s.remove_prefix(std::min(i - 1, s.size()));
    return true;
}

bool skipWhitespace(std::string_view& s) {
    scanSpaces(s);
    while (s.front() == '/') {
        s.remove_prefix(1);
        if (!scanComment(s)) { return false; }
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

inline std::optional<long double> stold(std::string_view const& s, size_t& n) {
    int&        errnoRef = errno; // Nonzero cost, pay it once
    const char* ptr      = s.data();
    char*       eptr;
    errnoRef              = 0;
    const long double res = strtold(ptr, &eptr);

    if (ptr == eptr) { return std::nullopt; }

    if (errnoRef == ERANGE) { return std::nullopt; }

    n = static_cast<size_t>(eptr - ptr);

    return res;
}

std::optional<CompoundTagVariant> parseNumber(std::string_view& s) {

    size_t n = 0;

    auto res = stold(s, n);

    if (!res) { return std::nullopt; }

    bool isInt = true;

    for (size_t i = 0; i < n; i++) {
        if (!std::isxdigit(s[i]) && s[i] != '-') { isInt = false; }
    }

    s.remove_prefix(n);

    switch (s.front()) {
    case 'b':
    case 'B':
        s.remove_prefix(1);
        return ByteTag{(schar)(res.value())};
    case 's':
    case 'S':
        s.remove_prefix(1);
        return ShortTag{(short)(res.value())};
    case 'l':
    case 'L':
        s.remove_prefix(1);
        return Int64Tag{(int64)(res.value())};
    case 'f':
    case 'F':
        s.remove_prefix(1);
        return FloatTag{(float)(res.value())};
    case 'd':
    case 'D':
        s.remove_prefix(1);
        return DoubleTag{(double)(res.value())};
    default:
        break;
    }
    if (isInt) {
        return IntTag{(int)(res.value())};
    } else {
        return DoubleTag{(double)(res.value())};
    }
}

bool isTrivialChar(char c) { return isalnum(c) || c == '-' || c == '+' || c == '_' || c == '.'; }

std::optional<std::string> parseString(std::string_view& s) {

    char starts = s.front();

    if (starts != '\"' && starts != '\'' && !isTrivialChar(starts)) { return std::nullopt; }

    auto res = std::string{};

    if (starts == '\"' || starts == '\'') {
        s.remove_prefix(1);
    } else {
        while (!s.empty()) {
            auto fc = s.front();
            if (isTrivialChar(fc)) {
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
            if (starts == '\"') { return res; }
            res.push_back('\"');
        } break;
        case '\'': {
            if (starts == '\'') { return res; }
            res.push_back('\'');
        } break;

        // escapes
        case '\\': {
            switch (get(s)) {

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

                return std::nullopt; // TODO
            }

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
    if (!skipWhitespace(s)) { return std::nullopt; }

    if (s.front() == ']') { return ByteArrayTag{}; }

    auto res = std::vector<schar>{};
    res.clear();

    while (!s.empty()) {

        if (!skipWhitespace(s)) { return std::nullopt; }
        auto value = parseNumber(s);
        if (!skipWhitespace(s)) { return std::nullopt; }

        if (!value || !value.value().hold<ByteTag>()) { return std::nullopt; }

        res.emplace_back(value.value().get<ByteTag>());

        switch (s.front()) {
        case ']':
            s.remove_prefix(1);
            return res;
        case ',':
            s.remove_prefix(1);
            break;
        default:
            return std::nullopt;
        }
    }

    return std::nullopt;
}

std::optional<IntArrayTag> parseIntArray(std::string_view& s) {
    if (!skipWhitespace(s)) { return std::nullopt; }

    if (s.front() == ']') { return IntArrayTag{}; }

    auto res = std::vector<int>{};
    res.clear();

    while (!s.empty()) {

        if (!skipWhitespace(s)) { return std::nullopt; }
        auto value = parseNumber(s);
        if (!skipWhitespace(s)) { return std::nullopt; }

        if (!value || !value.value().hold<IntTag>()) { return std::nullopt; }

        res.emplace_back(value.value().get<IntTag>());

        switch (s.front()) {
        case ']':
            s.remove_prefix(1);
            return res;
        case ',':
            s.remove_prefix(1);
            break;
        default:
            return std::nullopt;
        }
    }

    return std::nullopt;
}

std::optional<CompoundTagVariant> parseList(std::string_view& s) {
    if (s.starts_with("[B;")) {
        s.remove_prefix(3);
        if (auto array = parseByteArray(s); array) { return array.value(); }
        return std::nullopt;
    } else if (s.starts_with("[I;")) {
        s.remove_prefix(3);
        if (auto array = parseIntArray(s); array) { return array.value(); }
        return std::nullopt;
    }
    get(s);
    if (!skipWhitespace(s)) { return std::nullopt; }

    if (s.front() == ']') { return ListTag{}; }

    auto res  = ListTag{};
    res.mType = Tag::Type::End;
    res.mList.clear();

    auto& type = res.mType;

    while (!s.empty()) {

        auto value = parseSnbtValue(s);

        if (!value) { return std::nullopt; }

        if (type == Tag::Type::End) {
            type = value.value().get()->getId();
        } else if (value.value().get()->getId() != type) {
            return std::nullopt;
        }
        res.mList.emplace_back(value.value().toUnique());


        switch (s.front()) {
        case ']':
            s.remove_prefix(1);
            return res;
        case ',':
            s.remove_prefix(1);
            break;
        default:
            return std::nullopt;
        }
    }

    return std::nullopt;
}

std::optional<CompoundTag> parseCompound(std::string_view& s) {
    get(s);
    if (!skipWhitespace(s)) { return std::nullopt; }

    if (s.front() == '}') {
        s.remove_prefix(1);
        return CompoundTag{};
    }
    auto res = CompoundTag{};
    while (!s.empty()) {
        if (!skipWhitespace(s)) { return std::nullopt; }

        auto key = parseString(s);

        if (!key) { return std::nullopt; }

        if (!skipWhitespace(s)) { return std::nullopt; }

        if (get(s) != ':') { return std::nullopt; }

        auto value = parseSnbtValue(s);


        if (!value) { return std::nullopt; }

        res[key.value()] = value.value();

        switch (s.front()) {
        case '}':
            s.remove_prefix(1);
            return res;
        case ',':
            s.remove_prefix(1);
            break;
        default:
            return std::nullopt;
        }
    }

    return std::nullopt;
}

std::optional<CompoundTagVariant> parseSnbtValue(std::string_view& s) {

    if (!skipWhitespace(s)) { return std::nullopt; }

    std::optional<CompoundTagVariant> res = std::nullopt;

    switch (s.front()) {
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
            res = list.value();
            break;
        } else {
            return std::nullopt;
        }
    case '{':
        if (auto compound = parseCompound(s); compound) {
            res = compound.value();
            break;
        } else {
            return std::nullopt;
        }
        break;
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
            res = StringTag{str.value()};
        }
    }

    if (!skipWhitespace(s)) { return std::nullopt; }

    return res;
}
