#pragma once
#include "ll/api/base/TypeTraits.h"
#include <ll/api/reflection/Reflection.h>
#include <ll/api/reflection/Serializer.h>
#include <ll/api/reflection/ReflectionError.h>

// Priority:
// 11. Arithmetic
// 10. Custom Specialization
// 9. Optional
// 9. Dispatcher
// 8. IsVectorBase
// 7. Enum
// 6. Variant
// 5. String Convertible
// 4. TupleLike
// 3. ArrayLike
// 2. Associative
// 1. Aggregate
// 0. Not Reflectable

namespace ll::reflection {

namespace {

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<11>)
    requires(std::is_arithmetic_v<std::remove_cvref_t<T>>);
template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<10>)
    requires(detail::has_custom_serializer_v<std::remove_cvref_t<T>, J, F>);
template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsOptional<std::remove_cvref_t<T>>);
template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsDispatcher<std::remove_cvref_t<T>>);
template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<8>)
    requires(concepts::IsVectorBase<std::remove_cvref_t<T>>);
template <class J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<7>)
    requires(std::is_enum_v<std::remove_cvref_t<T>>);
template <class J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<6>)
    requires(concepts::IsVariant<std::remove_cvref_t<T>>);
template <class J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<5>)
    requires(concepts::IsStringConvertible<std::remove_cvref_t<T>>);
template <class J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<4>)
    requires(concepts::TupleLike<std::remove_cvref_t<T>>);
template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<3>)
    requires(concepts::ArrayLike<std::remove_cvref_t<T>>);
template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<2>)
    requires(concepts::Associative<std::remove_cvref_t<T>>);
template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<1>)
    requires(Reflectable<std::remove_cvref_t<T>>);
template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<0>);

} // namespace

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize(T&& t, F const& keyFormatter) noexcept
#if !defined(__INTELLISENSE__)
    requires(requires(T&& t, F const& keyFormatter) {
        serialize_impl<J>(std::forward<T>(t), keyFormatter, meta::PriorityTag<11>{});
    })
#endif
try {
    return serialize_impl<J>(std::forward<T>(t), keyFormatter, meta::PriorityTag<11>{});
} catch (...) {
    return makeExceptionError();
}

template <typename J, typename T>
inline Expected<J> serialize(T&& t) noexcept{
    return serialize<J>(std::forward<T>(t), builtin_key_formatter::default_key_formatter);
}

template <class J, class T, IsKeyFormatter F>
inline Expected<> serialize_to(J& j, T&& t, F const& keyFormatter) noexcept {
    if (auto res = serialize<J>(std::forward<T>(t), keyFormatter); res) {
        j = std::move(*res);
    } else {
        return forwardError(res.error());
    }
    return {};
}

template <class J, class T>
inline Expected<> serialize_to(J& j, T&& t) noexcept {
    return serialize_to<J>(j, std::forward<T>(t), builtin_key_formatter::default_key_formatter);
}

template <auto MemberPtr, class J, class T, IsKeyFormatter F>
inline Expected<> member_serialize(J& j, T&& t, F const& keyFormatter) noexcept
    requires(!std::is_const_v<std::remove_reference_t<J>>)
{
    static_assert(!typeNameStem(getRawName<MemberPtr>()).empty(), "member name is empty");
    if (!j.is_object()) return makeSerObjectTypeError();
    auto result = serialize<J>(t.*MemberPtr, keyFormatter);
    if (!result) return ll::forwardError(result.error());
    j[keyFormatter(typeNameStem(getRawName<MemberPtr>()))] = *std::move(result);
    return {};
}

template <auto MemberPtr, class J, class T>
inline Expected<> member_serialize(J& j, T&& t) noexcept
    requires(!std::is_const_v<std::remove_reference_t<J>>)
{
    return member_serialize<MemberPtr>(j, std::forward<T>(t), builtin_key_formatter::default_key_formatter);
}

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member(T&& t, J& j, F const& keyFormatter) noexcept
    requires(!std::is_const_v<std::remove_reference_t<J>>)
{
    return member_serialize<MemberPtr>(j, std::forward<T>(t), keyFormatter);
}

template <auto MemberPtr, class T, class J>
inline Expected<> member(T&& t, J& j) noexcept
    requires(!std::is_const_v<std::remove_reference_t<J>>)
{
    return member<MemberPtr>(std::forward<T>(t), j, builtin_key_formatter::default_key_formatter);
}

namespace {

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const&, meta::PriorityTag<11>)
    requires(std::is_arithmetic_v<std::remove_cvref_t<T>>)
{
    return t;
}

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<10>)
    requires(detail::has_custom_serializer_v<std::remove_cvref_t<T>, J, F>)
{
    using RT = std::remove_cvref_t<T>;
    if constexpr (detail::has_value_serializer_v<RT, J, F>) {
        using JT = std::remove_cvref_t<J>;
        auto result = [&]() -> decltype(auto) {
            if constexpr (requires { Serializer<RT, JT>::serialize(std::forward<T>(t), keyFormatter); }) {
                return Serializer<RT, JT>::serialize(std::forward<T>(t), keyFormatter);
            } else if constexpr (requires { Serializer<RT, JT>::serialize(std::forward<T>(t)); }) {
                return Serializer<RT, JT>::serialize(std::forward<T>(t));
            } else if constexpr (requires { Serializer<RT>::template serialize<JT>(std::forward<T>(t), keyFormatter); }) {
                return Serializer<RT>::template serialize<JT>(std::forward<T>(t), keyFormatter);
            } else {
                return Serializer<RT>::template serialize<JT>(std::forward<T>(t));
            }
        }();
        using Result = std::remove_cvref_t<decltype(result)>;
        if constexpr (concepts::IsLeviExpected<Result>) {
            if (!result) {
                return forwardError(result.error());
            }
            if constexpr (std::same_as<std::remove_cvref_t<decltype(*result)>, J>) {
                return *std::move(result);
            } else {
                return J(*std::move(result));
            }
        } else {
            if constexpr (std::same_as<Result, J>) {
                return std::move(result);
            } else {
                return J(std::move(result));
            }
        }
    } else {
        J result{};
        if constexpr (requires { Serializer<RT>::serialize(std::forward<T>(t), result, keyFormatter); }) {
            if (auto res = Serializer<RT>::serialize(std::forward<T>(t), result, keyFormatter); !res) {
                return forwardError(res.error());
            }
        } else {
            if (auto res = Serializer<RT>::serialize(std::forward<T>(t), result); !res) {
                return forwardError(res.error());
            }
        }
        return result;
    }
}

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<9>) 
    requires(concepts::IsOptional<std::remove_cvref_t<T>>)
{
    return t ? serialize_impl<J>(*std::forward<T>(t), keyFormatter, meta::PriorityTag<11>{}) : nullptr;
}

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsDispatcher<std::remove_cvref_t<T>>)
{
    return serialize_impl<J>(
        std::forward<T>(t).storage,
        keyFormatter,
        meta::PriorityTag<11>{}
    );
}

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const&, meta::PriorityTag<8>)
    requires(concepts::IsVectorBase<std::remove_cvref_t<T>>)
{
    Expected<J> res{J::array()};
    std::remove_cvref_t<T>::forEachComponent([&]<typename axis_type, size_t iter> {
        if (res) {
            if (auto v = serialize<J>(std::forward<T>(t).template get<axis_type, iter>()); v) {
                res->push_back(*std::move(v));
            } else {
                res = makeSerIndexError(iter, v.error());
            }
        }
    });
    return res;
}

template <class J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<7>)
    requires(std::is_enum_v<std::remove_cvref_t<T>>)
{
    using enum_type = std::remove_cvref_t<T>;
    if (auto name = detail::enum_name_to_string<enum_type>(t, keyFormatter)) {
        return *std::move(name);
    }
    return std::to_underlying(t);
}

template <class J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<6>)
    requires(concepts::IsVariant<std::remove_cvref_t<T>>)
{
    return std::visit(
        [&](auto const& value) { return serialize_impl<J>(value, keyFormatter, meta::PriorityTag<11>{}); },
        t
    );
}

template <class J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const&, meta::PriorityTag<5>)
    requires(concepts::IsStringConvertible<std::remove_cvref_t<T>>)
{
    return J(std::string{std::forward<T>(t)});
}

template <class J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<4>)
    requires(concepts::TupleLike<std::remove_cvref_t<T>>)
{
    Expected<J> res{J::array()};
    std::apply(
        [&](auto&&... args) {
            size_t iter{0};
            (([&](auto&& arg) {
                 if (res) {
                     if (auto v =
                             serialize_impl<J>(std::forward<decltype(arg)>(arg), keyFormatter, meta::PriorityTag<11>{});
                         v) {
                         res->push_back(*std::move(v));
                         iter++;
                     } else {
                         res = makeSerIndexError(iter, v.error());
                     }
                 }
             }(std::forward<decltype(args)>(args))),
             ...);
        },
        std::forward<decltype(t)>(t)
    );
    return res;
}

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<3>)
    requires(concepts::ArrayLike<std::remove_cvref_t<T>>)
{
    Expected<J> res{J::array()};
    size_t      iter{0};
    for (auto&& val : std::forward<T>(t)) {
        if (auto v = serialize_impl<J>(std::forward<decltype(val)>(val), keyFormatter, meta::PriorityTag<11>{}); v) {
            res->push_back(*std::move(v));
            iter++;
        } else {
            res = makeSerIndexError(iter, v.error());
            break;
        }
    }
    return res;
}

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<2>)
    requires(concepts::Associative<std::remove_cvref_t<T>>)
{
    static_assert(
        detail::is_key_stringifiable_v<typename std::remove_cvref_t<T>::key_type>,
        "the key type of the associative container must be convertible to a string"
    );
    Expected<J> res{J::object()};
    for (auto&& [k, v] : t) {
        auto key = type_to_string(k, keyFormatter);
        if (auto sv = serialize_impl<J>(std::forward<decltype(v)>(v), keyFormatter, meta::PriorityTag<11>{}); sv) {
            (*res)[key] = *std::move(sv);
        } else {
            res = makeSerKeyError(key, sv.error());
            break;
        }
    }
    return res;
}

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&& t, F const& keyFormatter, meta::PriorityTag<1>)
    requires(Reflectable<std::remove_cvref_t<T>>)
{
    Expected<J> res{J::object()};
    forEachMember(t, [&](std::string_view name, auto&& member) {
        if (name.starts_with('$') || !res) return;
        auto key = keyFormatter(name);
        auto v   = serialize_impl<J>(std::forward<decltype((member))>(member), keyFormatter, meta::PriorityTag<11>{});
        if (v) {
            if (!v->is_null()) (*res)[key] = *std::move(v);
        } else {
            res = makeSerMemberError(key, v.error());
        }
    });
    return res;
}

template <typename J, typename T, IsKeyFormatter F>
inline Expected<J> serialize_impl(T&&, F const&, meta::PriorityTag<0>) {
    static_assert(traits::always_false<T>, "this type can't serialize");
}

} // namespace

} // namespace ll::reflection
