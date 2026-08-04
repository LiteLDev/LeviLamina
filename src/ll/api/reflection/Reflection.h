#pragma once

#include <cctype>
#include <cstddef>
#include <optional>
#include <type_traits>
#include <utility>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Meta.h"
#include "ll/api/Expected.h"
#include "ll/api/reflection/Serializer.h"
#include "ll/api/reflection/TypeName.h"
#include "ll/api/utils/StringUtils.h"

#if defined(__clang__) && !defined(BOOST_PFR_CORE_NAME_PARSING)
#define BOOST_PFR_CORE_NAME_PARSING                                                                                    \
    (sizeof("auto boost::pfr::detail::name_of_field_impl() [MsvcWorkaround = ") - 1, sizeof("}]") - 1, backward("."))

#endif

#include "boost/pfr.hpp"

#include "magic_enum/magic_enum_all.hpp"

namespace ll::reflection {
template <class T>
constexpr bool is_reflectable_v =
    std::is_aggregate_v<std::remove_cvref_t<T>> && !traits::is_std_array_v<std::remove_cvref_t<T>>;

template <class T>
concept Reflectable = is_reflectable_v<T>;

namespace detail {
template <typename F>
constexpr bool is_key_formatter_v = requires(F f, std::string_view sv) {
    { f(sv) } -> std::convertible_to<std::string>;
} || requires(F f, std::string_view sv) {
    { f(sv) } -> std::convertible_to<std::string_view>;
};

template <typename T>
constexpr bool is_string_serializable_v = requires(T const& t, std::string_view sv) {
    { reflection::Serializer<T>::to_string(t) } -> std::convertible_to<std::string>;
    { reflection::Serializer<T>::from_string(sv) } -> std::convertible_to<ll::Expected<T>>;
};

template <typename T>
constexpr bool is_key_stringifiable_v =
    is_string_serializable_v<T> || traits::is_string_convertible_v<T> || std::is_enum_v<T>;

template <typename T, typename F>
constexpr bool has_custom_key_serializer_v = requires(T const& t, F const& f) {
    { Serializer<T>::to_string(t, f) } -> std::convertible_to<std::string>;
} || requires(T const& t) {
    { Serializer<T>::to_string(t) } -> std::convertible_to<std::string>;
};

template <typename T, typename F>
constexpr bool has_typed_key_formatter_v = requires(T const& t, F const& f) {
    { f.template operator()<std::remove_cvref_t<T>>(t) } -> std::convertible_to<std::string>;
};

template <typename T, typename F>
constexpr bool has_custom_key_deserializer_v = requires(std::string_view sv, F const& f) {
    { Serializer<T>::from_string(sv, f) } -> std::convertible_to<ll::Expected<T>>;
} || requires(std::string_view sv) {
    { Serializer<T>::from_string(sv) } -> std::convertible_to<ll::Expected<T>>;
};

template <typename T, typename J, typename F>
constexpr bool has_value_serializer_v = requires(T const& t, F const& f) {
    { Serializer<std::remove_cvref_t<T>, std::remove_cvref_t<J>>::serialize(t, f) };
} || requires(T const& t) {
    { Serializer<std::remove_cvref_t<T>, std::remove_cvref_t<J>>::serialize(t) };
} || requires(T const& t, F const& f) {
    { Serializer<std::remove_cvref_t<T>>::template serialize<std::remove_cvref_t<J>>(t, f) };
} || requires(T const& t) {
    { Serializer<std::remove_cvref_t<T>>::template serialize<std::remove_cvref_t<J>>(t) };
};

template <typename T, typename J, typename F>
constexpr bool has_value_deserializer_v = requires(std::remove_cvref_t<J> const& j, F const& f) {
    { Serializer<std::remove_cvref_t<T>, std::remove_cvref_t<J>>::deserialize(j, f) };
} || requires(std::remove_cvref_t<J> const& j) {
    { Serializer<std::remove_cvref_t<T>, std::remove_cvref_t<J>>::deserialize(j) };
} || requires(std::remove_cvref_t<J> const& j, F const& f) {
    { Serializer<std::remove_cvref_t<T>>::deserialize(j, f) };
} || requires(std::remove_cvref_t<J> const& j) {
    { Serializer<std::remove_cvref_t<T>>::deserialize(j) };
} || requires(std::remove_cvref_t<J> const& j, F const& f) {
    { Serializer<std::remove_cvref_t<T>>::template deserialize<std::remove_cvref_t<J>>(j, f) };
} || requires(std::remove_cvref_t<J> const& j) {
    { Serializer<std::remove_cvref_t<T>>::template deserialize<std::remove_cvref_t<J>>(j) };
};

template <typename T, typename J, typename F>
constexpr bool has_inplace_serializer_v = requires(
    T const& t,
    std::remove_cvref_t<J>& j,
    F const&                f
) {
    { Serializer<T>::serialize(t, j, f) } -> std::convertible_to<ll::Expected<>>;
} || requires(T const& t, std::remove_cvref_t<J>& j) {
    { Serializer<T>::serialize(t, j) } -> std::convertible_to<ll::Expected<>>;
};

template <typename T, typename J, typename F>
constexpr bool has_custom_serializer_v = has_value_serializer_v<T, J, F> || has_inplace_serializer_v<T, J, F>;

constexpr std::string_view trim_ascii_spaces(std::string_view sv) {
    while (!sv.empty() && std::isspace(static_cast<unsigned char>(sv.front()))) {
        sv.remove_prefix(1);
    }
    while (!sv.empty() && std::isspace(static_cast<unsigned char>(sv.back()))) {
        sv.remove_suffix(1);
    }
    return sv;
}

template <typename Enum, typename F>
    requires(is_key_formatter_v<std::remove_cvref_t<F>>)
constexpr std::optional<std::string> enum_name_to_string(Enum value, F const& keyFormatter) {
    using enum_type = std::remove_cvref_t<Enum>;

    if constexpr (!magic_enum::detail::supported<enum_type>::value) {
        return std::nullopt;
    } else if constexpr (magic_enum::detail::subtype_v<enum_type> == magic_enum::detail::enum_subtype::flags) {
        if (auto const name = magic_enum::enum_flags_name<enum_type>(value); !name.empty()) {
            if constexpr (has_typed_key_formatter_v<enum_type, F>) {
                std::string result;
                size_t      cursor{0};
                auto        nameSv = std::string_view{name};

                while (cursor < nameSv.size()) {
                    auto next = nameSv.find('|', cursor);
                    auto part = trim_ascii_spaces(
                        nameSv.substr(cursor, next == std::string_view::npos ? nameSv.size() - cursor : next - cursor)
                    );

                    auto partValue = [&]() -> std::optional<enum_type> {
                        if (auto parsed = magic_enum::enum_cast<enum_type>(part)) return *parsed;
                        if (auto parsed = magic_enum::enum_flags_cast<enum_type>(part)) return *parsed;
                        return std::nullopt;
                    }();
                    if (!partValue) return std::string{name};

                    if (!result.empty()) result += '|';
                    result += std::string{keyFormatter.template operator()<enum_type>(*partValue)};

                    if (next == std::string_view::npos) break;
                    cursor = next + 1;
                }

                return result;
            } else {
                return std::string{name};
            }
        }
    } else {
        if (auto name = magic_enum::enum_name<enum_type>(value); !name.empty()) {
            if constexpr (has_typed_key_formatter_v<enum_type, F>) {
                return std::string{keyFormatter.template operator()<enum_type>(value)};
            } else {
                return std::string{name};
            }
        }
    }

    return std::nullopt;
}

template <typename Enum, typename F>
    requires(is_key_formatter_v<std::remove_cvref_t<F>>)
constexpr std::optional<Enum> string_to_enum(std::string_view sv, F const& keyFormatter) {
    using enum_type       = std::remove_cvref_t<Enum>;
    using underlying_type = std::underlying_type_t<enum_type>;

    if (auto val = magic_enum::enum_cast<enum_type>(sv)) {
        return *val;
    }
    if (auto val = magic_enum::enum_flags_cast<enum_type>(sv)) {
        return *val;
    }

    if constexpr (
        magic_enum::detail::supported<enum_type>::value && has_typed_key_formatter_v<enum_type, F>
    ) {
        if constexpr (magic_enum::detail::subtype_v<enum_type> == magic_enum::detail::enum_subtype::flags) {
            underlying_type result{};
            bool            matchedAny = false;
            size_t          cursor     = 0;

            while (cursor < sv.size()) {
                auto const next  = sv.find('|', cursor);
                auto const token = trim_ascii_spaces(
                    sv.substr(cursor, next == std::string_view::npos ? sv.size() - cursor : next - cursor)
                );

                bool matched = false;
                for (auto const value : magic_enum::enum_values<enum_type>()) {
                    auto const formatted = enum_name_to_string(value, keyFormatter);
                    if (formatted && *formatted == token) {
                        result |= static_cast<underlying_type>(value);
                        matchedAny = true;
                        matched    = true;
                        break;
                    }
                }
                if (!matched) {
                    matchedAny = false;
                    break;
                }
                if (next == std::string_view::npos) {
                    break;
                }
                cursor = next + 1;
            }

            if (matchedAny) {
                return static_cast<enum_type>(result);
            }
        } else {
            for (auto const value : magic_enum::enum_values<enum_type>()) {
                auto const formatted = enum_name_to_string(value, keyFormatter);
                if (formatted && *formatted == sv) {
                    return value;
                }
            }
        }
    }

    if (auto num = string_utils::svtonum<underlying_type>(sv, nullptr, 10)) {
        return static_cast<enum_type>(*num);
    }

    return std::nullopt;
}
} // namespace detail

template <typename F>
concept IsKeyFormatter = detail::is_key_formatter_v<std::remove_cvref_t<F>>;

template <typename T>
concept IsLeastStringifiableType = detail::is_key_stringifiable_v<std::remove_cvref_t<T>>;

template <class T>
constexpr auto const member_name_array_v = boost::pfr::names_as_array<std::remove_cvref_t<T>>();

template <class T>
constexpr auto const member_count_v = boost::pfr::tuple_size_v<T>;

template <size_t I, class T>
using member_t = typename boost::pfr::tuple_element_t<I, T>;

namespace builtin_key_formatter {
constexpr auto default_key_formatter = [](std::string_view sv) -> std::string_view { return sv; };
}

template <class T>
struct OffsetGetter {
    template <size_t S, size_t A>
    struct AlignedStorage {
        alignas(A) char storage[S];
    };
    template <class... Ts>
    using AlignedTuple = boost::pfr::detail::sequence_tuple::tuple<AlignedStorage<sizeof(Ts), alignof(Ts)>...>;

    template <size_t I, size_t... Ns>
    static ptrdiff_t offset(std::index_sequence<Ns...>) noexcept {
        AlignedTuple<member_t<Ns, T>...> layout{};
        return static_cast<char const*>(&get<I>(layout).storage[0])
             - static_cast<char const*>(&get<0>(layout).storage[0]);
    }
};

template <size_t I, class T>
inline auto const member_offset_v = OffsetGetter<T>::template offset<I>(std::make_index_sequence<member_count_v<T>>());

template <Reflectable T, class F>
constexpr void forEachMember(T&& value, F&& func) {
    boost::pfr::for_each_field(std::forward<T>(value), [func = std::forward<F>(func)](auto&& field, std::size_t idx) {
        func(member_name_array_v<T>[idx], std::forward<decltype(field)>(field));
    });
}

template <typename T, IsKeyFormatter F>
constexpr std::string type_to_string(T const& t, F const& keyFormatter) {
    static_assert(
        detail::has_custom_key_serializer_v<T, F> || detail::has_typed_key_formatter_v<T, F>
            || detail::is_string_serializable_v<T> || traits::is_string_convertible_v<T> || std::is_enum_v<T>,
        "the key type must be serializable to a string"
    );
    if constexpr (std::is_enum_v<T>) {
        if (auto name = detail::enum_name_to_string(t, keyFormatter)) return *std::move(name);
        if constexpr (detail::has_typed_key_formatter_v<T, F>) {
            return keyFormatter.template operator()<std::remove_cvref_t<T>>(t);
        }
        return std::to_string(std::to_underlying(t));
    } else if constexpr (detail::has_typed_key_formatter_v<T, F>) {
        return keyFormatter.template operator()<std::remove_cvref_t<T>>(t);
    } else if constexpr (detail::has_custom_key_serializer_v<T, F>) {
        if constexpr (requires { Serializer<T>::to_string(t, keyFormatter); }) {
            return Serializer<T>::to_string(t, keyFormatter);
        } else {
            return Serializer<T>::to_string(t);
        }
    } else if constexpr (traits::is_string_convertible_v<T>) {
        return std::string{t};
    } else if constexpr (detail::is_string_serializable_v<T>) {
        return Serializer<T>::to_string(t);
    } else {
        static_assert(std::is_enum_v<T>, "unreachable");
    }
}

template <IsLeastStringifiableType T>
constexpr std::string type_to_string(T const& t) {
    return type_to_string(t, builtin_key_formatter::default_key_formatter);
}

template <IsLeastStringifiableType T, IsKeyFormatter F>
constexpr std::optional<T> string_to_type(std::string_view sv, F const& keyFormatter) {
    using RT = std::remove_cvref_t<T>;
    if constexpr (detail::has_custom_key_deserializer_v<T, F>) {
        if constexpr (requires { Serializer<RT>::from_string(sv, keyFormatter); }) {
            if (auto res = Serializer<RT>::from_string(sv, keyFormatter); res) {
                return *std::move(res);
            }
        } else {
            if (auto res = Serializer<RT>::from_string(sv); res) {
                return *std::move(res);
            }
        }
        return std::nullopt;
    } else if constexpr (detail::is_string_serializable_v<T>) {
        if (auto res = Serializer<RT>::from_string(sv); res) {
            return *std::move(res);
        }
        return std::nullopt;
    } else if constexpr (traits::is_string_convertible_v<T>) {
        return RT{sv};
    } else {
        return detail::string_to_enum<RT>(sv, keyFormatter);
    }
}

template <IsLeastStringifiableType T>
constexpr std::optional<T> string_to_type(std::string_view sv) {
    return string_to_type<T>(sv, builtin_key_formatter::default_key_formatter);
}

} // namespace ll::reflection
