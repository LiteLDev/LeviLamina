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
template <concepts::IsVectorBase T, class J>
inline Expected<> deserialize_impl(T& vec, J&& j, meta::PriorityTag<5>);
template <concepts::IsDispatcher T, class J>
inline Expected<> deserialize_impl(T& d, J&& j, meta::PriorityTag<5>);
template <concepts::IsOptional T, class J>
inline Expected<> deserialize_impl(T& opt, J&& j, meta::PriorityTag<5>);
template <concepts::IsString T, class J>
inline Expected<> deserialize_impl(T& str, J&& j, meta::PriorityTag<4>);
template <concepts::TupleLike T, class J>
inline Expected<> deserialize_impl(T& tuple, J&& j, meta::PriorityTag<3>);
template <concepts::ArrayLike T, class J>
inline Expected<> deserialize_impl(T& arr, J&& j, meta::PriorityTag<2>);
template <concepts::Associative T, class J>
inline Expected<> deserialize_impl(T& map, J const& j, meta::PriorityTag<2>);
template <Reflectable T, class J>
inline Expected<> deserialize_impl(T& obj, J const& j, meta::PriorityTag<1>);
template <concepts::Require<std::is_enum> T, class J>
inline Expected<> deserialize_impl(T& e, J const& j, meta::PriorityTag<1>);
template <class T, class J>
inline Expected<> deserialize_impl(T& obj, J const& j, meta::PriorityTag<0>)
    requires(std::convertible_to<J, T>);

template <class T, class J>
[[nodiscard]] inline Expected<> deserialize(T& t, J&& j) noexcept
#if !defined(__INTELLISENSE__)
    requires(requires(T& t, J&& j) { deserialize_impl<T>(t, std::forward<J>(j), meta::PriorityTag<5>{}); })
#endif
try {
    return deserialize_impl<T>(t, std::forward<J>(j), meta::PriorityTag<5>{});
} catch (...) {
    return makeExceptionError();
}

template <class T, class J>
[[nodiscard]] inline Expected<T> deserialize_to(J&& j) noexcept {
    Expected<T> res{};
    if (auto d = deserialize<T>(*res, std::forward<J>(j)); !d) {
        res = forwardError(d.error());
    }
    return res;
}

template <concepts::IsVectorBase T, class J>
inline Expected<> deserialize_impl(T& vec, J&& j, meta::PriorityTag<5>) {
    Expected<> res{};
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        if (res) {
            res = deserialize<axis_type>(vec.template get<axis_type>(iter), static_cast<J&&>(j[iter]));
            if (!res) res = makeSerIndexError(iter, res.error());
        }
    });
    return res;
}
template <concepts::IsDispatcher T, class J>
inline Expected<> deserialize_impl(T& d, J&& j, meta::PriorityTag<5>) {
    auto res{deserialize<typename T::storage_type>(d.storage, std::forward<J>(j))};
    if (res) d.call();
    return res;
}
template <concepts::IsOptional T, class J>
inline Expected<> deserialize_impl(T& opt, J&& j, meta::PriorityTag<5>) {
    Expected<> res;
    if (j.is_null()) {
        opt = std::nullopt;
    } else {
        if (!opt) opt.emplace();
        res = deserialize<typename T::value_type>(*opt, std::forward<J>(j));
    }
    return res;
}
template <concepts::IsString T, class J>
inline Expected<> deserialize_impl(T& str, J&& j, meta::PriorityTag<4>) {
    if (!j.is_string()) return makeStringError("field must be a string");
    str = std::string{std::forward<J>(j)};
    return {};
}
template <concepts::TupleLike T, class J>
inline Expected<> deserialize_impl(T& tuple, J&& j, meta::PriorityTag<3>) {
    if (!j.is_array()) return makeStringError("field must be an array");
    if (j.size() != std::tuple_size_v<T>)
        return makeStringError(fmt::format("array size must be {}", std::tuple_size_v<T>));
    Expected<> res{};
    std::apply(
        [&](auto&... args) {
            size_t iter{0};
            (([&](auto& arg) {
                 if (res) {
                     res = deserialize<std::remove_cvref_t<decltype(arg)>>(arg, static_cast<J&&>(j[iter]));
                     if (!res) res = makeSerIndexError(iter, res.error());
                     iter++;
                 }
             }(args)),
             ...);
        },
        tuple
    );
    return res;
}
template <concepts::ArrayLike T, class J>
inline Expected<> deserialize_impl(T& arr, J&& j, meta::PriorityTag<2>) {
    if (!j.is_array()) return makeStringError("field must be an array");
    using value_type = typename T::value_type;
    if constexpr (requires(T a) { a.clear(); }) {
        arr.clear();
    }
    if constexpr (requires(T a, value_type v) { a.push_back(v); }) {
        for (size_t i = 0; i < j.size(); i++) {
            if (auto res = deserialize<value_type>(arr.emplace_back(), static_cast<J&&>(j[i])); !res) {
                res = makeSerIndexError(i, res.error());
                return res;
            }
        }
    } else if constexpr (requires(T a, value_type v) { a.insert(v); }) {
        for (size_t i = 0; i < j.size(); i++) {
            value_type tmp{};
            if (auto res = deserialize<value_type>(tmp, static_cast<J&&>(j[i])); !res) {
                res = makeSerIndexError(i, res.error());
                return res;
            }
            arr.insert(std::move(tmp));
        }
    }
    return {};
}
template <concepts::Associative T, class J>
inline Expected<> deserialize_impl(T& map, J const& j, meta::PriorityTag<2>) {
    static_assert(
        (concepts::IsString<typename T::key_type> || std::is_enum_v<typename T::key_type>),
        "the key type of the associative container must be convertible to a string"
    );
    if (!j.is_object()) return makeStringError("field must be an object");
    map.clear();
    for (auto&& [k, v] : j.items()) {
        if constexpr (std::is_enum_v<typename T::key_type>) {
            if (auto res = deserialize<typename T::mapped_type>(
                    map[magic_enum::enum_cast<typename T::key_type>(k).value()],
                    std::forward<decltype((v))>(v)
                );
                !res) {
                res = makeSerKeyError(magic_enum::enum_cast<typename T::key_type>(k).value(), res.error());
                return res;
            }
        } else {
            if (auto res = deserialize<typename T::mapped_type>(map[k], std::forward<decltype((v))>(v)); !res) {
                res = makeSerKeyError(k, res.error());
                return res;
            }
        }
    }
    return {};
}
template <Reflectable T, class J>
inline Expected<> deserialize_impl(T& obj, J const& j, meta::PriorityTag<1>) {
    Expected<> res;
    if (!j.is_object()) {
        res = makeStringError("field must be an object");
        return res;
    }
    forEachMember(obj, [&](std::string_view name, auto& member) {
        if (name.starts_with('$') || !res) {
            return;
        }
        using member_type = std::remove_cvref_t<decltype((member))>;
        auto sname        = std::string{name};
        if (j.contains(sname)) {
            if constexpr (requires(member_type& o, J const& s) { deserialize<member_type>(o, s); }) {
                res = deserialize<member_type>(member, j[sname]);
                if (!res) res = makeSerMemberError(sname, res.error());
            } else {
                static_assert(concepts::always_false<member_type>, "this type can't deserialize");
            }
        } else {
            if constexpr (!concepts::IsOptional<member_type>) {
                res = makeStringError(fmt::format("missing required field \"{}\" when deserializing", sname));
            } else {
                member = std::nullopt;
            }
        }
    });
    return res;
}
template <concepts::Require<std::is_enum> T, class J>
inline Expected<> deserialize_impl(T& e, J const& j, meta::PriorityTag<1>) {
    using enum_type = std::remove_cvref_t<T>;
    if (j.is_string()) {
        e = magic_enum::enum_cast<enum_type>(std::string{j}).value();
    } else {
        e = magic_enum::enum_cast<enum_type>(std::underlying_type_t<enum_type>{j}).value();
    }
    return {};
}
template <class T, class J>
inline Expected<> deserialize_impl(T& obj, J const& j, meta::PriorityTag<0>)
    requires(std::convertible_to<J, T>)
{
    obj = j;
    return {};
}
} // namespace ll::reflection
