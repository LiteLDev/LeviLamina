#pragma once

#include <type_traits>

#include "magic_enum.hpp"

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Meta.h"

#if defined(__clang__) && !defined(BOOST_PFR_CORE_NAME_PARSING)
#define BOOST_PFR_CORE_NAME_PARSING                                                                                    \
    (sizeof("auto boost::pfr::detail::name_of_field_impl() [MsvcWorkaround = ") - 1, sizeof("}]") - 1, backward("."))

#endif

#include "boost/pfr.hpp"

namespace ll::reflection {
template <class T>
inline constexpr bool is_reflectable_v =
    std::is_aggregate_v<std::remove_cvref_t<T>> && !requires { typename T::size_type; };

template <class T>
concept Reflectable = is_reflectable_v<T>;

template <Reflectable T, class F>
constexpr void forEachMember(T&& value, F&& func) {
    using Type                            = std::remove_cvref_t<T>;
    static constexpr auto const namearray = boost::pfr::names_as_array<Type>();
    boost::pfr::for_each_field(std::forward<T>(value), [&](auto&& field, std::size_t idx) {
        std::forward<F>(func)(namearray[idx], std::forward<decltype(field)>(field));
    });
}

template <auto f>
consteval std::string_view valueRawName() noexcept {
    constexpr std::string_view n{__FUNCSIG__};
#if defined(__clang__)
    constexpr std::string_view k{"[f = "};
    constexpr std::string_view l{"]"};
#else
    constexpr std::string_view k{"valueRawName<"};
    constexpr std::string_view l{">(void) noexcept"};
#endif
    constexpr auto s = l.size();
    constexpr auto p = n.find(k) + k.size();

    return n.substr(p, n.size() - p - s);
}

template <class f>
consteval std::string_view typeRawName() noexcept {
    constexpr std::string_view n{__FUNCSIG__};
#if defined(__clang__)
    constexpr std::string_view k{"[f = "};
    constexpr std::string_view l{"]"};
#else
    constexpr std::string_view k{"typeRawName<"};
    constexpr std::string_view l{">(void) noexcept"};
#endif
    constexpr auto s = l.size();
    constexpr auto p = n.find(k) + k.size();

    return n.substr(p, n.size() - p - s);
}

constexpr std::string_view removeTypePrefix(std::string_view s) noexcept {
    if (s.starts_with("enum ")) {
        s.remove_prefix(sizeof("enum ") - 1);
    }
    if (s.starts_with("class ")) {
        s.remove_prefix(sizeof("class ") - 1);
    }
    if (s.starts_with("union ")) {
        s.remove_prefix(sizeof("union ") - 1);
    }
    if (s.starts_with("struct ")) {
        s.remove_prefix(sizeof("struct ") - 1);
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
inline constexpr std::string_view type_raw_name_v = typeRawName<T>();

template <class T>
inline constexpr std::string_view type_unprefix_name_v = removeTypePrefix(type_raw_name_v<T>);

template <class T>
inline constexpr std::string_view type_name_v = removeTypeSuffix(type_unprefix_name_v<T>);

template <class T>
inline constexpr std::string_view type_stem_name_v = removeTypeNamespace(type_name_v<T>);

template <class T>
inline constexpr bool is_template_v = type_raw_name_v<T>.find("<") != std::string_view::npos;

template <class T>
inline constexpr bool is_class_v = std::is_class_v<T> && type_raw_name_v<T>.starts_with("class ");

template <class T>
inline constexpr bool is_struct_v = std::is_class_v<T> && type_raw_name_v<T>.starts_with("struct ");

} // namespace ll::reflection
