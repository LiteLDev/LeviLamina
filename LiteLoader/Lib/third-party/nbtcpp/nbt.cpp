#include "nbt_internal.hpp"

#include <cassert>
#include <cstdlib>
#include <sstream>
#include <stdexcept>

namespace nbt {

void skip_space(std::istream& input) {
    for (;;) {
        int next = cheof(input);
        if (!std::isspace(next)) {
            input.putback(next);
            return;
        }
    }
}

int context_id() {
    static const int i = std::ios_base::xalloc();
    return i;
}

context*& context_storage(std::ios_base& ios) {
    int i = context_id();
    return reinterpret_cast<context*&>(ios.pword(i));
}

const context& context::get(std::ios_base& ios) {
    auto ctxt = context_storage(ios);
    if (ctxt == nullptr)
        return contexts::java;
    else
        return *ctxt;
}

void ios_callback(std::ios_base::event event, std::ios_base& ios, int) {
    if (event == std::ios_base::event::erase_event)
        delete context_storage(ios);
}

void context::set(std::ios_base& ios) const {
    context*& ctxt = context_storage(ios);
    if (ctxt == nullptr) {
        ios.register_callback(ios_callback, context_id());
        ctxt = new context(*this);
    } else {
        *ctxt = *this;
    }
}

std::int32_t load_varint(std::istream& input) {
    return load_varnum<std::int32_t>(input);
}

void dump_varint(std::ostream& output, std::int32_t value) {
    dump_varnum(output, value);
}

std::int64_t load_varlong(std::istream& input) {
    return load_varnum<std::int64_t>(input);
}

void dump_varlong(std::ostream& output, std::int64_t value) {
    dump_varnum(output, value);
}

template <typename number_t, char suffix>
number_t load_text_simple(std::istream& input) {
    number_t value;
    input >> value;
    int next = cheof(input);
    if (next != suffix)
        input.putback(next);
    return value;
}

template <>
std::int8_t load_text<std::int8_t>(std::istream& input) {
    int value;
    input >> value;
    int next = cheof(input);
    if (next != 'b')
        input.putback(next);
    return static_cast<std::int8_t>(value);
}

template <>
std::int16_t load_text<std::int16_t>(std::istream& input) {
    return load_text_simple<std::int16_t, 's'>(input);
}

template <>
std::int32_t load_text<std::int32_t>(std::istream& input) {
    std::int32_t value;
    input >> value;
    return value;
}

template <>
std::int64_t load_text<std::int64_t>(std::istream& input) {
    return load_text_simple<std::int64_t, 'l'>(input);
}

template <>
float load_text<float>(std::istream& input) {
    return load_text_simple<float, 'f'>(input);
}

template <>
double load_text<double>(std::istream& input) {
    return load_text_simple<double, 'd'>(input);
}

template <>
std::int32_t load<std::int32_t>(std::istream& input, const context& ctxt) {
    switch (ctxt.format) {
        case context::formats::bin:
            return load_flat<std::int32_t>(input, ctxt.order);
        case context::formats::zigzag:
            return load_varint(input);
        case context::formats::mojangson:
            return load_text<std::int32_t>(input);
        case context::formats::zint:
        default:
            return load_zint<std::int32_t>(input);
    }
}

template <>
std::int64_t load<std::int64_t>(std::istream& input, const context& ctxt) {
    switch (ctxt.format) {
        case context::formats::bin:
            return load_flat<std::int64_t>(input, ctxt.order);
        case context::formats::zigzag:
            return load_varlong(input);
        case context::formats::mojangson:
            return load_text<std::int64_t>(input);
        case context::formats::zint:
        default:
            return load_zint<std::int64_t>(input);
    }
}

template <>
void dump<std::int32_t>(std::ostream& output, std::int32_t number, const context& ctxt) {
    switch (ctxt.format) {
        case context::formats::bin:
            return dump_flat(output, number, ctxt.order);
        case context::formats::zigzag:
            return dump_varint(output, number);
        case context::formats::mojangson:
            return dump_text(output, number);
        case context::formats::zint:
        default:
            return dump_zint(output, number);
    }
}

template <>
void dump<std::int64_t>(std::ostream& output, std::int64_t number, const context& ctxt) {
    switch (ctxt.format) {
        case context::formats::bin:
            return dump_flat(output, number, ctxt.order);
        case context::formats::zigzag:
            return dump_varlong(output, number);
        case context::formats::mojangson:
            return dump_text(output, number);
        case context::formats::zint:
        default:
            return dump_zint(output, number);
    }
}

template <>
void dump_text<std::int8_t>(std::ostream& output, std::int8_t number) {
    output << int(number) << 'b';
}

template <>
void dump_text<std::int16_t>(std::ostream& output, std::int16_t number) {
    output << number << 's';
}

template <>
void dump_text<std::int32_t>(std::ostream& output, std::int32_t number) {
    output << number;
}

template <>
void dump_text<std::int64_t>(std::ostream& output, std::int64_t number) {
    output << number << 'l';
}

template <>
void dump_text<float>(std::ostream& output, float number) {
    output << number << 'f';
}

template <>
void dump_text<double>(std::ostream& output, double number) {
    output << number;
}

std::size_t load_size(std::istream& input, const context& ctxt) {
    if (ctxt.format == context::formats::bin)
        return load_flat<std::uint32_t>(input, ctxt.order);
    else
        return static_cast<std::size_t>(load_varint(input));
}

void dump_size(std::ostream& output, const context& ctxt, std::size_t size) {
    auto sz = static_cast<std::uint32_t>(size);
    if (ctxt.format == context::formats::bin)
        dump_flat(output, sz, ctxt.order);
    else
        dump_varint(output, sz);
}

std::ostream& operator<<(std::ostream& output, tag_id tid) {
    return output << std::to_string(tid);
}

inline bool is_valid_char(char c) {
    return std::isalnum(c) || c == '-' || c == '_' || c == '+' || c == '.';
}

tag_id deduce_tag(std::istream& input) {
    skip_space(input);
    char a = cheof(input);
    if (a == '}' || a == ']') {
        input.putback(a);
        return tag_id::tag_end;
    }
    if (a == '[') {
        char b = cheof(input);
        tag_id id;
        switch (b) {
            case 'B':
                id = tag_id::tag_bytearray;
                break;
            case 'I':
                id = tag_id::tag_intarray;
                break;
            case 'L':
                id = tag_id::tag_longarray;
                break;
            default:
                id = tag_id::tag_list;
                break;
        }
        if (id != tag_id::tag_list) {
            char c = input.peek();
            if (c != ';')
                id = tag_id::tag_list;
        }
        input.putback(b);
        input.putback(a);
        return id;
    }
    if (a == '{') {
        input.putback(a);
        return tag_id::tag_compound;
    }
    if (std::isdigit(a) || a == '-' || a == '+') {
        std::string buffer(&a, 1);
        tag_id deduced;
        for (;;) {
            char b = cheof(input);
            buffer.push_back(b);
            if (std::isdigit(b)) {
                continue;
            } else if (b == 'b') {
                deduced = tag_id::tag_byte;
            } else if (b == 's') {
                deduced = tag_id::tag_short;
            } else if (b == 'l') {
                deduced = tag_id::tag_long;
            } else if (b == 'f') {
                deduced = tag_id::tag_float;
            } else if (b == 'd') {
                deduced = tag_id::tag_double;
            } else if (b == 'e') {
                char c = cheof(input);
                buffer.push_back(c);
                if (std::isdigit(c) || c == '-' || c == '+') {
                    for (;;) {
                        char d = cheof(input);
                        buffer.push_back(d);
                        if (std::isdigit(d)) {
                            continue;
                        } else if (d == 'f') {
                            deduced = tag_id::tag_float;
                        } else if (d == 'd') {
                            deduced = tag_id::tag_double;
                        } else {
                            deduced = tag_id::tag_double;
                        }
                        break;
                    }
                } else {
                    deduced = tag_id::tag_int;
                }
            } else if (b == '.') {
                for (;;) {
                    char c = cheof(input);
                    buffer.push_back(c);
                    if (std::isdigit(c)) {
                        continue;
                    } else if (c == 'e' || c == 'E') {
                        char d = cheof(input);
                        buffer.push_back(d);
                        if (std::isdigit(d) || d == '-' || d == '+')
                            continue;
                    } else if (c == 'f') {
                        deduced = tag_id::tag_float;
                    } else if (c == 'd') {
                        deduced = tag_id::tag_double;
                    } else {
                        deduced = tag_id::tag_double;
                    }
                    break;
                }
            } else {
                deduced = tag_id::tag_int;
            }
            break;
        }
        for (auto iter = buffer.crbegin(), end = buffer.crend(); iter != end; ++iter)
            input.putback(*iter);
        return deduced;
    }
    if (a == '"' || is_valid_char(a)) {
        input.putback(a);
        return tag_id::tag_string;
    }
    input.putback(a);
    return tag_id::tag_end;
}

namespace tags {

std::string read_string_text(std::istream& input) {
    skip_space(input);
    char first = cheof(input);
    if (first == '"') {
        std::string result;
        for (;;) {
            int c = cheof(input);
            switch (c) {
                case '"':
                    return result;
                case '\\': {
                    int s = cheof(input);
                    switch (s) {
                        case '"':
                            result.push_back('"');
                            break;
                        case '\\':
                            result.push_back('\\');
                            break;
                        case '/':
                            result.push_back('/');
                            break;
                        case 'b':
                            result.push_back('\b');
                            break;
                        case 'f':
                            result.push_back('\f');
                            break;
                        case 'n':
                            result.push_back('\n');
                            break;
                        case 'r':
                            result.push_back('\r');
                            break;
                        case 't':
                            result.push_back('\t');
                            break;
                        case 'u':
                            throw std::runtime_error("TODO");
                        default:
                            result.push_back('\\');
                            result.push_back(s);
                            break;
                    }
                    break;
                }
                default:
                    result.push_back(c);
                    break;
            }
        }
    } else {
        std::string result(&first, 1);
        for (;;) {
            int c = cheof(input);
            if (is_valid_char(c)) {
                result.push_back(c);
            } else {
                input.putback(c);
                return result;
            }
        }
    }
}

std::string read_string_bin(std::istream& input, const context& ctxt) {
    std::uint32_t size = (ctxt.format == context::formats::zigzag || ctxt.format == context::formats::zint) ? load_varint(input) : load_flat<std::uint16_t>(input, ctxt.order);
    std::string result;
    result.resize(size);
    input.read(result.data(), size);
    return result;
}

std::string read_string(std::istream& input, const context& ctxt) {
    if (ctxt.format == context::formats::mojangson)
        return read_string_text(input);
    else
        return read_string_bin(input, ctxt);
}

void write_string_text(std::ostream& output, const std::string& string) {
    output << '"';
    for (char c : string) {
        switch (c) {
            case '"':
                output << "\\\"";
                break;
            case '\\':
                output << "\\\\";
                break;
            case '\b':
                output << "\\b";
                break;
            case '\f':
                output << "\\f";
                break;
            case '\n':
                output << "\\n";
                break;
            case '\r':
                output << "\\r";
                break;
            case '\t':
                output << "\\t";
                break;
            default:
                output << c;
        }
    }
    output << '"';
}

void write_string(std::ostream& output, const std::string& string, const context& ctxt) {
    switch (ctxt.format) {
        case context::formats::bin:
            dump(output, static_cast<std::uint16_t>(string.size()), ctxt);
            break;
        case context::formats::mojangson:
            write_string_text(output, string);
            return;
        case context::formats::zigzag:
        case context::formats::zint:
        default:
            dump_varint(output, static_cast<std::int32_t>(string.size()));
            break;
    }
    output << string;
}

template <tag_id tid>
std::unique_ptr<tag> read_bridge(tag_id id, std::istream& input) {
    if (id == tid)
        return read<tid>(input);
    else
        return read_bridge<static_cast<tag_id>(static_cast<std::int8_t>(tid) - 1)>(id, input);
}

template <>
std::unique_ptr<tag> read_bridge<tag_id::tag_end>(tag_id, std::istream&) {
    throw std::runtime_error("end tag not for reading");
}

std::unique_ptr<tag> read(tag_id tid, std::istream& input) {
    return read_bridge<tag_id::tag_longarray>(tid, input);
}

template <tag_id tid>
std::unique_ptr<list_tag> read_list_content_bridge(tag_id id, std::istream& input) {
    if (id == tid)
        return list_by<tid>::read_content(input);
    else
        return read_list_content_bridge<static_cast<tag_id>(static_cast<std::int8_t>(tid) - 1)>(id, input);
}

template <>
std::unique_ptr<list_tag> read_list_content_bridge<tag_id::tag_end>(tag_id id, std::istream& input) {
    assert(id == tag_id::tag_end);
    return list_by<tag_id::tag_end>::read_content(input);
}

std::unique_ptr<list_tag> read_list_content(tag_id tid, std::istream& input) {
    return read_list_content_bridge<tag_id::tag_longarray>(tid, input);
}

void end_tag::write(std::ostream& output) const {
    output.put('\0');
}

std::unique_ptr<tag> end_tag::copy() const {
    return std::make_unique<end_tag>();
}

string_tag::string_tag(const value_type& string)
    : value(string) {
}

string_tag::string_tag(value_type&& string)
    : value(std::move(string)) {
}

std::unique_ptr<string_tag> string_tag::read(std::istream& input) {
    const context& ctxt = context::get(input);
    return std::make_unique<string_tag>(read_string(input, ctxt));
}

void string_tag::write(std::ostream& output) const {
    const context& ctxt = context::get(output);
    write_string(output, value, ctxt);
}

std::unique_ptr<tag> string_tag::copy() const {
    return std::make_unique<string_tag>(value);
}

std::unique_ptr<list_tag> list_tag::read(std::istream& input) {
    const context& ctxt = context::get(input);
    if (ctxt.format == context::formats::mojangson) {
        skip_space(input);
        char a = cheof(input);
        if (a != '[')
            throw std::runtime_error("failed to open list tag");
        tag_id type = deduce_tag(input);
        auto result = read_list_content(type, input);
        skip_space(input);
        a = cheof(input);
        if (a != ']')
            throw std::runtime_error(std::string("failed to close list tag, got: ") + a);
        return result;
    } else {
        tag_id type = static_cast<tag_id>(cheof(input));
        return read_list_content(type, input);
    }
}

std::unique_ptr<tag> tag_list_tag::operator[](size_t i) const {
    return value.at(i)->copy();
}

tag_list_tag::tag_list_tag()
    : eid(tag_id::tag_end) {
}

tag_list_tag::tag_list_tag(tag_id tid)
    : eid(tid) {
}

tag_list_tag::tag_list_tag(const tag_list_tag& other)
    : eid(other.eid) {
    value.reserve(other.size());
    for (const auto& each : other.value)
        value.emplace_back(each->copy());
}

tag_list_tag::tag_list_tag(const value_type& list, tag_id tid)
    : eid(tid) {
    value.reserve(list.size());
    for (const auto& each : list)
        value.emplace_back(each->copy());
}

tag_list_tag::tag_list_tag(value_type&& list, tag_id tid)
    : eid(tid)
    , value(std::move(list)) {
}

void tag_list_tag::write(std::ostream& output) const {
    tag_id aid = element_id();
    dump_list(output, aid, value, [&output, aid](const std::unique_ptr<tag>& tag, const context&) {
        if (aid != tag->id())
            throw std::runtime_error("wrong tag id");
        tag->write(output);
    });
}

std::unique_ptr<tag> tag_list_tag::copy() const {
    return std::make_unique<tag_list_tag>(*this);
}

tag_list_tag tag_list_tag::as_tags() {
    return std::move(*this);
}

std::unique_ptr<tag> end_list_tag::operator[](size_t) const {
    throw std::out_of_range("end list tag always empty");
}

std::unique_ptr<end_list_tag> end_list_tag::read_content(std::istream& input) {
    if (context::get(input).format != context::formats::mojangson) {
        char c = cheof(input);
        if (c != '\0')
            throw std::runtime_error("end list tag should be empty");
    }
    return std::make_unique<end_list_tag>();
}

void end_list_tag::write(std::ostream& output) const {
    if (context::get(output).format == context::formats::mojangson) {
        output << "[]";
    } else {
        output.put(static_cast<char>(eid));
        output.put('\0');
    }
}

std::unique_ptr<tag> end_list_tag::copy() const {
    return std::make_unique<end_list_tag>();
}

tag_list_tag end_list_tag::as_tags() {
    return tag_list_tag(tag_id::tag_end);
}

std::unique_ptr<tag> string_list_tag::operator[](size_t i) const {
    return std::make_unique<string_tag>(value.at(i));
}

string_list_tag::string_list_tag(const value_type& list)
    : value(list) {
}

string_list_tag::string_list_tag(value_type&& list)
    : value(std::move(list)) {
}

std::unique_ptr<string_list_tag> string_list_tag::read_content(std::istream& input) {
    return load_list<string_list_tag>(input, [&input](const context& ctxt) -> std::string {
        return read_string(input, ctxt);
    });
}

void string_list_tag::write(std::ostream& output) const {
    tag_id aid = element_id();
    dump_list(output, aid, value, [&output](const std::string& string, const context& ctxt) {
        write_string(output, string, ctxt);
    });
}

std::unique_ptr<tag> string_list_tag::copy() const {
    return std::make_unique<string_list_tag>(*this);
}

tag_list_tag string_list_tag::as_tags() {
    tag_list_tag result(eid);
    result.value.reserve(value.size());
    for (auto& each : value)
        result.value.push_back(std::make_unique<tag_type>(std::move(each)));
    value.clear();
    value.shrink_to_fit();
    return result;
}

std::unique_ptr<tag> list_list_tag::operator[](size_t i) const {
    return value.at(i)->copy();
}

list_list_tag::list_list_tag(const list_list_tag& other) {
    value.reserve(other.value.size());
    for (const auto& element : other.value)
        value.emplace_back(cast<list_tag>(element->copy()));
}

list_list_tag::list_list_tag(const value_type& list) {
    value.reserve(list.size());
    for (const auto& element : list)
        value.emplace_back(cast<list_tag>(element->copy()));
}

list_list_tag::list_list_tag(value_type&& list)
    : value(std::move(list)) {
}

std::unique_ptr<list_list_tag> list_list_tag::read_content(std::istream& input) {
    return load_list<list_list_tag>(input, [&input](const context&) -> element_type {
        return list_tag::read(input);
    });
}

void list_list_tag::write(std::ostream& output) const {
    dump_list(output, eid, value, [&output](const element_type& list, const context&) {
        list->write(output);
    });
}

std::unique_ptr<tag> list_list_tag::copy() const {
    return std::make_unique<list_list_tag>(*this);
}

tag_list_tag list_list_tag::as_tags() {
    tag_list_tag result(eid);
    result.value.reserve(value.size());
    for (auto& each : value)
        result.value.push_back(std::move(each));
    value.clear();
    value.shrink_to_fit();
    return result;
}

compound_tag::compound_tag(const compound_tag& other)
    : is_root(other.is_root) {
    for (const auto& pair : other.value)
        value.emplace(pair.first, pair.second->copy());
}

compound_tag::compound_tag(bool root)
    : is_root(root) {
}

compound_tag::compound_tag(const value_type& map, bool root)
    : is_root(root) {
    for (const auto& pair : map)
        value.emplace(pair.first, pair.second->copy());
}

compound_tag::compound_tag(value_type&& map, bool root)
    : is_root(root)
    , value(std::move(map)) {
}

std::unique_ptr<compound_tag> compound_tag::read(std::istream& input) {
    auto ptr = std::make_unique<compound_tag>();
    input >> *ptr;
    return ptr;
}

void compound_write_text(std::ostream& output, const compound_tag& compound, const context& ctxt) {
    const auto& value = compound.value;
    output << '{';
    auto iter = value.cbegin();
    auto end = value.cend();
    if (iter != end) {
        auto action = [&](const compound_tag::value_type::value_type& entry) {
            write_string(output, entry.first, ctxt);
            output << ':';
            entry.second->write(output);
        };
        action(*iter);
        for (++iter; iter != end; ++iter) {
            output << ',';
            action(*iter);
        }
    }
    output << '}';
}

void compound_write_bin(std::ostream& output, const compound_tag& compound, const context& ctxt) {
    const auto& value = compound.value;
    for (const auto& entry : value) {
        output.put(static_cast<char>(entry.second->id()));
        write_string(output, entry.first, ctxt);
        entry.second->write(output);
    }
    if (!compound.is_root)
        tags::end.write(output);
}

void compound_tag::write(std::ostream& output) const {
    const context& ctxt = context::get(output);
    if (ctxt.format == context::formats::mojangson)
        compound_write_text(output, *this, ctxt);
    else
        compound_write_bin(output, *this, ctxt);
}

std::unique_ptr<tag> compound_tag::copy() const {
    return std::make_unique<compound_tag>(*this);
}

compound_tag& compound_tag::operator=(const compound_tag& other) {
    is_root = other.is_root;
    for (const auto& pair : other.value)
        value.emplace(pair.first, pair.second->copy());
    return *this;
}

void compound_tag::make_heavy() {
    for (auto& pair : value) {
        tags::tag& each = *pair.second;
        if (each.id() == tag_id::tag_list) {
            list_tag& list = dynamic_cast<list_tag&>(each);
            if (!list.heavy())
                pair.second = std::make_unique<tag_list_tag>(list.as_tags());
        }
    }
}

std::unique_ptr<tag> compound_list_tag::operator[](size_t i) const {
    return value.at(i).copy();
}

compound_list_tag::compound_list_tag(const value_type& list)
    : value(list) {
}

compound_list_tag::compound_list_tag(value_type&& list)
    : value(std::move(list)) {
}

std::unique_ptr<compound_list_tag> compound_list_tag::read_content(std::istream& input) {
    return load_list<compound_list_tag>(input, [&input](const context&) -> compound_tag {
        compound_tag element;
        input >> element;
        return element;
    });
}

void compound_list_tag::write(std::ostream& output) const {
    dump_list(output, eid, value, [&output](const element_type& element, const context&) {
        element.write(output);
    });
}

std::unique_ptr<tag> compound_list_tag::copy() const {
    return std::make_unique<compound_list_tag>(*this);
}

tag_list_tag compound_list_tag::as_tags() {
    tag_list_tag result(eid);
    result.value.reserve(value.size());
    for (auto& each : value) {
        each.make_heavy();
        result.value.push_back(std::make_unique<tag_type>(std::move(each)));
    }
    value.clear();
    value.shrink_to_fit();
    return result;
}

} // namespace tags

void read_compound_text(std::istream& input, tags::compound_tag& compound, const context& ctxt) {
    skip_space(input);
    char a = cheof(input);
    if (a != '{')
        throw std::runtime_error("failed to open compound");
    for (;;) {
        tag_id key_type = deduce_tag(input);
        switch (key_type) {
            case tag_id::tag_end:
                skip_space(input);
                if (cheof(input) != '}')
                    throw std::runtime_error("failed to close compound tag");
                return;
            case tag_id::tag_string:
                break;
            default:
                throw std::runtime_error(
                    "invalid key tag (tag_string expected, got " + std::to_string(key_type) + ')');
        }
        std::string key = tags::read_string(input, ctxt);
        skip_space(input);
        char a = cheof(input);
        if (a != ':')
            throw std::runtime_error(std::string("key-value delimiter expected, got ") + a);
        tag_id value_type = deduce_tag(input);
        if (value_type == tag_id::tag_end)
            throw std::runtime_error(std::string("value expected"));
        compound.value.emplace(std::move(key), tags::read(value_type, input));
        skip_space(input);
        a = cheof(input);
        if (a == '}')
            return;
        if (a != ',' && a != ';')
            throw std::runtime_error(std::string("next tag or end expected, got ") + a);
    }
}

void read_compound_bin(std::istream& input, tags::compound_tag& compound, const context& ctxt) {
    for (;;) {
        auto id_numeric = input.get();
        if (!input) {
            compound.is_root = true;
            break;
        }
        auto id = static_cast<tag_id>(id_numeric);
        if (id > tag_id::tag_longarray)
            throw std::out_of_range("unknown tag id: " + std::to_string(id_numeric));
        if (id == tag_id::tag_end)
            break;
        std::string key = tags::read_string(input, ctxt);
        compound.value.emplace(std::move(key), tags::read(id, input));
    }
}

std::istream& operator>>(std::istream& input, tags::compound_tag& compound) {
    const context& ctxt = context::get(input);
    if (ctxt.format == context::formats::mojangson)
        read_compound_text(input, compound, ctxt);
    else
        read_compound_bin(input, compound, ctxt);
    return input;
}

std::ostream& operator<<(std::ostream& output, const tags::tag& tag) {
    tag.write(output);
    return output;
}

} // namespace nbt

namespace std {

string to_string(nbt::tag_id tid) {
#define TAG_ID_CASE(name) \
    case nbt::tag_id::name: return #name
    switch (tid) {
        TAG_ID_CASE(tag_end);
        TAG_ID_CASE(tag_byte);
        TAG_ID_CASE(tag_short);
        TAG_ID_CASE(tag_int);
        TAG_ID_CASE(tag_long);
        TAG_ID_CASE(tag_float);
        TAG_ID_CASE(tag_double);
        TAG_ID_CASE(tag_bytearray);
        TAG_ID_CASE(tag_string);
        TAG_ID_CASE(tag_list);
        TAG_ID_CASE(tag_compound);
        TAG_ID_CASE(tag_intarray);
        TAG_ID_CASE(tag_longarray);
        default:
            abort(); // unreachable
    }
#undef TAG_ID_CASE
}

string to_string(const nbt::tags::tag& tag) {
    using namespace nbt;
    std::stringstream result;
    tag.write(result << contexts::mojangson);
    return result.str();
}

} // namespace std
