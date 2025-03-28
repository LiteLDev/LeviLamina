#pragma once

#include <string_view>
#include <typeinfo>

namespace ll::reflection {

template <class T>
inline std::string_view getDynamicRawName(T const& value) noexcept {
    return typeid(value).name();
}

template <auto f>
consteval std::string_view getRawName() noexcept {
#if defined(_MSC_VER)
    constexpr std::string_view n{__FUNCSIG__};
    constexpr std::string_view k{"getRawName<"};
    constexpr std::string_view l{">(void) noexcept"};
#else
    constexpr std::string_view n{__PRETTY_FUNCTION__};
    constexpr std::string_view k{"[T = "};
    constexpr std::string_view l{"]"};
#endif
    constexpr auto p = n.find(k) + k.size();

    return n.substr(p, n.size() - p - l.size());
}

template <class f>
consteval std::string_view getRawName() noexcept {
#if defined(_MSC_VER)
    constexpr std::string_view n{__FUNCSIG__};
    constexpr std::string_view k{"getRawName<"};
    constexpr std::string_view l{">(void) noexcept"};
#else
    constexpr std::string_view n{__PRETTY_FUNCTION__};
    constexpr std::string_view k{"[T = "};
    constexpr std::string_view l{"]"};
#endif
    constexpr auto p = n.find(k) + k.size();

    return n.substr(p, n.size() - p - l.size());
}

constexpr std::string_view removeTypePrefix(std::string_view s) noexcept {
    if (s.starts_with("enum ")) {
        s.remove_prefix(sizeof("enum"));
    }
    if (s.starts_with("class ")) {
        s.remove_prefix(sizeof("class"));
    }
    if (s.starts_with("union ")) {
        s.remove_prefix(sizeof("union"));
    }
    if (s.starts_with("struct ")) {
        s.remove_prefix(sizeof("struct"));
    }
    return s;
}

constexpr std::string_view removeTypeSuffix(std::string_view s) noexcept {
    auto k = s.find('<');
    if (k != std::string_view::npos) {
        return s.substr(0, k);
    }
    return s;
}

constexpr std::string_view removeTypeNamespace(std::string_view s) noexcept {
    auto k = s.rfind("::", s.find('<'));
    if (k != std::string_view::npos) {
        return s.substr(k + 2);
    }
    return s;
}

constexpr std::string_view typeNameStem(std::string_view s) noexcept {
    return removeTypeNamespace(removeTypeSuffix(removeTypePrefix(s)));
}


template <class T>
constexpr std::string_view type_raw_name_v = getRawName<T>();

template <class T>
constexpr std::string_view type_unprefix_name_v = removeTypePrefix(type_raw_name_v<T>);

template <class T>
constexpr std::string_view type_name_v = removeTypeSuffix(type_unprefix_name_v<T>);

template <class T>
constexpr std::string_view type_stem_name_v = removeTypeNamespace(type_name_v<T>);

template <class T>
constexpr bool is_template_v = type_raw_name_v<T>.find("<") != std::string_view::npos;

template <class T>
constexpr bool is_class_v = std::is_class_v<T> && type_raw_name_v<T>.starts_with("class ");

template <class T>
constexpr bool is_struct_v = std::is_class_v<T> && type_raw_name_v<T>.starts_with("struct ");
} // namespace ll::reflection
