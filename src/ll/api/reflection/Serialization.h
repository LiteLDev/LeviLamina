#pragma once

#include "ll/api/reflection/Reflection.h"
#include "ll/api/reflection/SerializationError.h"

// Priority:
// 5. IsVectorBase IsDispatcher IsOptional
// 4. string
// 3. TupleLike
// 2. ArrayLike Associative
// 1. Reflectable enum
// 0. convertible

namespace ll::reflection {

template <class J, class T>
inline Expected<J> serialize_impl(T&& vec, meta::PriorityTag<5>)
    requires(concepts::IsVectorBase<std::remove_cvref_t<T>>);
template <class J, class T>
inline Expected<J> serialize_impl(T&& d, meta::PriorityTag<5>)
    requires(concepts::IsDispatcher<std::remove_cvref_t<T>>);
template <class J, class T>
inline Expected<J> serialize_impl(T&& opt, meta::PriorityTag<5>)
    requires(concepts::IsOptional<std::remove_cvref_t<T>>);
template <class J, class T>
inline Expected<J> serialize_impl(T&& str, meta::PriorityTag<4>)
    requires(concepts::IsString<std::remove_cvref_t<T>>);
template <class J, class T>
inline Expected<J> serialize_impl(T&& tuple, meta::PriorityTag<3>)
    requires(concepts::TupleLike<std::remove_cvref_t<T>>);
template <class J, class T>
inline Expected<J> serialize_impl(T&& arr, meta::PriorityTag<2>)
    requires(concepts::ArrayLike<std::remove_cvref_t<T>>);
template <class J, class T>
inline Expected<J> serialize_impl(T&& map, meta::PriorityTag<2>)
    requires(concepts::Associative<std::remove_cvref_t<T>>);
template <class J, class T>
inline Expected<J> serialize_impl(T&& obj, meta::PriorityTag<1>)
    requires(Reflectable<std::remove_cvref_t<T>>);
template <class J, class T>
inline Expected<J> serialize_impl(T&& e, meta::PriorityTag<1>)
    requires(concepts::Require<std::remove_cvref_t<T>, std::is_enum>);
template <class J, class T>
inline Expected<J> serialize_impl(T&& obj, meta::PriorityTag<0>)
    requires(std::convertible_to<std::remove_cvref_t<T>, J>);

template <class J, class T>
[[nodiscard]] inline Expected<J> serialize(T&& t) noexcept
#if !defined(__INTELLISENSE__)
    requires(requires(T&& t) { serialize_impl<J>(std::forward<T>(t), meta::PriorityTag<5>{}); })
#endif
try {
    return serialize_impl<J>(std::forward<T>(t), meta::PriorityTag<5>{});
} catch (...) {
    return makeExceptionError();
}

template <class J, class T>
[[nodiscard]] inline Expected<> serialize_to(J& j, T&& t) noexcept {
    if (auto res = serialize<J>(std::forward<T>(t)); res) {
        j = std::move(*res);
    } else {
        return forwardError(res.error());
    }
    return {};
}

template <class J, class T>
inline Expected<J> serialize_impl(T&& vec, meta::PriorityTag<5>)
    requires(concepts::IsVectorBase<std::remove_cvref_t<T>>)
{
    Expected<J> res{J::array()};
    std::remove_cvref_t<T>::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        if (res) {
            if (auto v = serialize<J>(std::forward<T>(vec).template get<axis_type>(iter)); v) {
                res->push_back(*std::move(v));
            } else {
                res = makeSerIndexError(iter, v.error());
            }
        }
    });
    return res;
}
template <class J, class T>
inline Expected<J> serialize_impl(T&& d, meta::PriorityTag<5>)
    requires(concepts::IsDispatcher<std::remove_cvref_t<T>>)
{
    return serialize<J>(std::forward<T>(d).storage);
}
template <class J, class T>
inline Expected<J> serialize_impl(T&& opt, meta::PriorityTag<5>)
    requires(concepts::IsOptional<std::remove_cvref_t<T>>)
{
    if (!opt) {
        return nullptr;
    }
    return serialize<J>(*std::forward<T>(opt));
}
template <class J, class T>
inline Expected<J> serialize_impl(T&& str, meta::PriorityTag<4>)
    requires(concepts::IsString<std::remove_cvref_t<T>>)
{
    return std::string{std::forward<T>(str)};
}
template <class J, class T>
inline Expected<J> serialize_impl(T&& tuple, meta::PriorityTag<3>)
    requires(concepts::TupleLike<std::remove_cvref_t<T>>)
{
    Expected<J> res{J::array()};
    std::apply(
        [&](auto&&... args) {
            size_t iter{0};
            (([&](auto&& arg) {
                 if (res) {
                     if (auto v = serialize<J>(std::forward<decltype((arg))>(arg)); v) {
                         res->push_back(*std::move(v));
                         iter++;
                     } else {
                         res = makeSerIndexError(iter, v.error());
                     }
                 }
             }(std::forward<decltype((args))>(args))),
             ...);
        },
        std::forward<decltype((tuple))>(tuple)
    );
    return res;
}
template <class J, class T>
inline Expected<J> serialize_impl(T&& arr, meta::PriorityTag<2>)
    requires(concepts::ArrayLike<std::remove_cvref_t<T>>)
{
    Expected<J> res{J::array()};
    size_t      iter{0};
    for (auto&& val : std::forward<T>(arr)) {
        if (auto v = serialize<J>(std::forward<decltype((val))>(val)); v) {
            res->push_back(*std::move(v));
            iter++;
        } else {
            res = makeSerIndexError(iter, v.error());
            break;
        }
    }
    return res;
}
template <class J, class T>
inline Expected<J> serialize_impl(T&& map, meta::PriorityTag<2>)
    requires(concepts::Associative<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    static_assert(
        (concepts::IsString<typename RT::key_type> || std::is_enum_v<typename RT::key_type>),
        "the key type of the associative container must be convertible to a string"
    );
    Expected<J> res{J::object()};
    for (auto&& [k, v] : map) {
        std::string key;
        if constexpr (std::is_enum_v<typename RT::key_type>) {
            key = magic_enum::enum_name(std::forward<decltype((k))>(k));
        } else {
            key = std::string{std::forward<decltype((k))>(k)};
        }
        if (auto sv = serialize<J>(std::forward<decltype((v))>(v)); sv) {
            (*res)[key] = *std::move(sv);
        } else {
            res = makeSerKeyError(key, sv.error());
            break;
        }
    }
    return res;
}
template <class J, class T>
inline Expected<J> serialize_impl(T&& obj, meta::PriorityTag<1>)
    requires(Reflectable<std::remove_cvref_t<T>>)
{
    Expected<J> res{J::object()};
    forEachMember(obj, [&](std::string_view name, auto&& member) {
        if (name.starts_with('$') || !res) {
            return;
        }
        using member_type = decltype((member));
        if constexpr (requires(member_type m) { serialize<J>(m); }) {
            auto v = serialize<J>(std::forward<member_type>(member));
            if (v) {
                if (!v->is_null()) (*res)[std::string{name}] = *std::move(v);
            } else {
                res = makeSerMemberError(std::string{name}, v.error());
            }
        } else {
            static_assert(concepts::always_false<member_type>, "this type can't serialize");
        }
    });
    return res;
}
template <class J, class T>
inline Expected<J> serialize_impl(T&& e, meta::PriorityTag<1>)
    requires(concepts::Require<std::remove_cvref_t<T>, std::is_enum>)
{
    return magic_enum::enum_name(std::forward<T>(e));
}
template <class J, class T>
inline Expected<J> serialize_impl(T&& obj, meta::PriorityTag<0>)
    requires(std::convertible_to<std::remove_cvref_t<T>, J>)
{
    return std::forward<T>(obj);
}
} // namespace ll::reflection
