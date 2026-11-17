#pragma once
#include "ll/api/reflection/ReflectionError.h"
#include "ll/api/utils/StringUtils.h"

#include <concepts>
#include <string>
#include <string_view>
#include <type_traits>

namespace ll::reflection {

namespace detail {

template <typename F>
constexpr bool is_key_formatter_v = requires(F f, std::string_view sv) {
    { f(sv) } -> std::convertible_to<std::string>;
} || requires(F f, std::string_view sv) {
    { f(sv) } -> std::convertible_to<std::string_view>;
};

inline constexpr auto default_key_formatter = [](std::string_view sv) -> std::string_view { return sv; };

} // namespace detail

template <typename F>
concept IsKeyFormatter = detail::is_key_formatter_v<std::remove_cvref_t<F>>;

template <typename T, typename J = void>
struct Serializer {};

template <>
struct Serializer<bool> {
    static std::string        to_string(bool t) { return t ? "true" : "false"; }
    static ll::Expected<bool> from_string(std::string_view s) { return ll::string_utils::svtobool(s); }
};

template <typename T>
    requires(std::is_arithmetic_v<T> && !std::is_same_v<T, bool> && !traits::is_char_v<T>)
struct Serializer<T> {
    static std::string     to_string(T t) { return fmt::to_string(t); }
    static ll::Expected<T> from_string(std::string_view s) { return ll::string_utils::svtonum<T>(s); }
};

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member(T&& t, J& j, F const& keyFormatter) noexcept
    requires(!std::is_const_v<std::remove_reference_t<J>>);

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J &&> || std::is_const_v<std::remove_reference_t<J>>);

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member(T& t, J const& j, F const& keyFormatter) noexcept;

template <class T, auto... Member>
struct MemberSerializer {
    template <typename J, typename F>
    static ll::Expected<J> serialize(T const& value, F const& keyFormatter) {
        J              object = J::object();
        ll::Expected<> status;
        ((status && (status = member<Member>(value, object, keyFormatter))), ...);
        if (!status) return forwardError(status.error());
        return object;
    }

    template <typename J, typename F>
    static ll::Expected<T> deserialize(J const& json, F const& keyFormatter) {
        T              object{};
        ll::Expected<> status;
        ((status && (status = member<Member>(object, json, keyFormatter))), ...);
        if (!status) return forwardError(status.error());
        return object;
    }
};

} // namespace ll::reflection
