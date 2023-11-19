#pragma once

#include "ll/api/reflection/Reflection.h"

namespace ll::reflection {

template <class J, Reflectable T>
inline J serialize(T const&)
    requires(!std::convertible_to<T, J>);
template <class J, Reflectable T, class F>
inline J serialize(T const&, F&&)
    requires(!std::convertible_to<T, J>);
template <class J, Reflectable T>
inline void deserialize(T&, J const&);

template <class J, class T>
inline J serialize(T const&)
    requires(std::is_enum_v<T>);
template <class J, class T>
inline void deserialize(T&, J const&)
    requires(std::is_enum_v<T>);

template <class J, std::convertible_to<J> T>
inline J serialize(T const&)
    requires(!std::is_enum_v<T>);
template <class J, class T>
inline void deserialize(T&, J const&)
    requires(
        !std::is_enum_v<T>
        && (std::is_convertible_v<T, std::string_view> || std::is_floating_point_v<T> || std::is_integral_v<T>)
    );

template <class J, ll::concepts::Associative T>
inline J serialize(T const&)
    requires(std::is_convertible_v<typename T::key_type, std::string_view> && !std::convertible_to<T, J>);
template <class J, ll::concepts::Associative T>
inline void deserialize(T&, J const&)
    requires(std::is_convertible_v<typename T::key_type, std::string_view>);

template <class J, ll::concepts::TupleLike T>
inline J serialize(T const&)
    requires(!std::convertible_to<T, J>);
template <class J, ll::concepts::TupleLike T>
inline void deserialize(T&, J const&);

template <class J, ll::concepts::ArrayLike T>
inline J serialize(T const&)
    requires(!std::convertible_to<T, J>);
template <class J, ll::concepts::ArrayLike T>
inline void deserialize(T&, J const&)
    requires(!std::is_convertible_v<T, std::string_view>);

template <class J, ll::concepts::IsOptional T>
inline J serialize(T const&);
template <class J, ll::concepts::IsOptional T>
inline void deserialize(T&, J const&);


template <class J, Reflectable T>
inline J serialize(T const& obj)
    requires(!std::convertible_to<T, J>)
{
    J res;
    forEachMember(obj, [&](std::string_view name, auto& member) {
        using MemberType = std::remove_cvref_t<decltype(member)>;
        if constexpr (requires(MemberType& m) { serialize<J>(m); }) {
            auto j = serialize<J>(member);
            if (!j.is_null()) res[std::string{name}] = j;
        } else {
            static_assert(ll::concepts::always_false<MemberType>, "this type can't serialize");
        }
    });
    return res;
}
template <class J, Reflectable T, class F>
inline J serialize(T const& obj, F&& f)
    requires(!std::convertible_to<T, J>)
{
    J res;
    forEachMember(obj, [&](std::string_view name, auto& member) {
        if (!std::forward<F>(f)(name, std::forward<decltype(member)>(member))) { return; }
        using MemberType = std::remove_cvref_t<decltype(member)>;
        if constexpr (requires(MemberType& m) { serialize<J>(m); }) {
            auto j = serialize<J>(member);
            if (!j.is_null()) res[std::string{name}] = j;
        } else {
            static_assert(ll::concepts::always_false<MemberType>, "this type can't serialize");
        }
    });
    return res;
}
template <class J, Reflectable T>
inline void deserialize(T& obj, J const& j) {
    forEachMember(obj, [&](std::string_view name, auto& member) {
        if (auto sname = std::string{name}; j.contains(sname)) {
            using MemberType = std::remove_cvref_t<decltype(member)>;
            if constexpr (requires(MemberType& o, J const& s) { deserialize<J>(o, s); }) {
                deserialize<J>(member, j[sname]);
            } else {
                static_assert(ll::concepts::always_false<MemberType>, "this type can't deserialize");
            }
        }
    });
}

template <class J, class T>
inline J serialize(T const& e)
    requires(std::is_enum_v<T>)
{
    return magic_enum::enum_name(e);
}
template <class J, class T>
inline void deserialize(T& e, J const& j)
    requires(std::is_enum_v<T>)
{
    using ENUM = std::remove_cvref_t<T>;
    if (j.is_string()) {
        e = magic_enum::enum_cast<ENUM>((std::string)j).value_or(ENUM{});
    } else {
        e = magic_enum::enum_cast<ENUM>((std::underlying_type_t<ENUM>)j).value_or(ENUM{});
    }
}

template <class J, std::convertible_to<J> T>
inline J serialize(T const& obj)
    requires(!std::is_enum_v<T>)
{
    return obj;
}
template <class J, class T>
inline void deserialize(T& obj, J const& j) // TODO: improve this
    requires(
        !std::is_enum_v<T>
        && (std::is_convertible_v<T, std::string_view> || std::is_floating_point_v<T> || std::is_integral_v<T>)
    )
{
    if (!j.empty()) obj = j;
}

template <class J, ll::concepts::Associative T>
inline J serialize(T const& map)
    requires(std::is_convertible_v<typename T::key_type, std::string_view> && !std::convertible_to<T, J>)
{
    J res;
    for (auto& [k, v] : map) { res[std::string{k}] = serialize<J>(v); }
    return res;
}
template <class J, ll::concepts::Associative T>
inline void deserialize(T& map, J const& j)
    requires(std::is_convertible_v<typename T::key_type, std::string_view>)
{
    if (!j.is_object()) return;
    map.clear();
    for (auto& [k, v] : j.items()) { deserialize<J>(map[k], v); }
}

template <class J, ll::concepts::TupleLike T>
inline J serialize(T const& tuple)
    requires(!std::convertible_to<T, J>)
{
    J res;
    std::apply([&](auto&&... args) { ((res.push_back(serialize<J>(args))), ...); }, tuple);
    return res;
}
template <class J, ll::concepts::TupleLike T>
inline void deserialize(T& tuple, J const& j) {
    if (!j.is_array()) return;
    size_t i = 0;
    std::apply([&](auto&... args) { (((i < j.size()) ? deserialize<J>(args, j[i++]) : void()), ...); }, tuple);
}

template <class J, ll::concepts::ArrayLike T>
inline J serialize(T const& arr)
    requires(!std::convertible_to<T, J>)
{
    J res;
    for (auto& val : arr) { res.push_back(serialize<J>(val)); }
    return res;
}
template <class J, ll::concepts::ArrayLike T>
inline void deserialize(T& arr, J const& j)
    requires(!std::is_convertible_v<T, std::string_view>)
{
    using ValueType = typename T::value_type;
    if (!j.is_array()) return;
    if constexpr (requires(T a) { a.clear(); }) { arr.clear(); }

    if constexpr (requires(T a, ValueType v) { a.push_back(v); }) {

        arr.resize(j.size());
        for (size_t i = 0; i < j.size(); i++) { deserialize<J>(arr[i], j[i]); }

    } else if constexpr (requires(T a, ValueType v) { a.insert(ValueType{}); }) {

        for (size_t i = 0; i < j.size(); i++) {
            ValueType tmp{};
            deserialize<J>(tmp, j[i]);
            arr.insert(tmp);
        }

    } else if constexpr (requires(T a, size_t v) { a.at(v); }) {
        for (size_t i = 0; i < arr.size(); i++) { deserialize<J>(arr.at(i), j[i]); }
    }
}

template <class J, ll::concepts::IsOptional T>
inline J serialize(T const& opt) {
    if (!opt) { return nullptr; }
    return serialize<J>(opt.value());
}
template <class J, ll::concepts::IsOptional T>
inline void deserialize(T& opt, J const& j) {
    if (j.is_null()) {
        opt = std::nullopt;
    } else {
        deserialize<J>(opt.value(), j);
    }
}
} // namespace ll::reflection