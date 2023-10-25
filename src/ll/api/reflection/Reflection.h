#pragma once

#include "boost/pfr.hpp"
#include "ll/api/base/Concepts.h"
#include "ll/api/base/Meta.h"
#include "magic_enum.hpp"
#include "nlohmann/json.hpp"
#include <type_traits>

namespace ll::reflection {
template <typename T>
inline constexpr bool is_reflectable_v =
    std::is_aggregate_v<std::remove_cvref_t<T>> && !requires { typename T::size_type; };

template <typename T>
concept Reflectable = is_reflectable_v<T>;

template <Reflectable T, class F>
void forEachMember(T& value, F&& func) {
    using Type                      = std::remove_cvref_t<T>;
    static constexpr auto namearray = boost::pfr::names_as_array<Type>();
    boost::pfr::for_each_field(value, [&](auto&& field, std::size_t idx) {
        std::forward<F>(func)(namearray[idx], std::forward<decltype(field)>(field));
    });
}

template <typename T>
constexpr nlohmann::json toJson(T const&)
    requires(std::is_enum_v<T>);

template <std::convertible_to<nlohmann::json> T>
constexpr nlohmann::json toJson(T const&)
    requires(!std::is_enum_v<T>);

template <ll::concepts::Associative T>
constexpr nlohmann::json toJson(T const&)
    requires(std::is_convertible_v<typename T::key_type, std::string_view> && !std::convertible_to<T, nlohmann::json>);

template <ll::concepts::TupleLike T>
constexpr nlohmann::json toJson(T const&)
    requires(!std::convertible_to<T, nlohmann::json>);

template <ll::concepts::ArrayLike T>
constexpr nlohmann::json toJson(T const&)
    requires(!std::convertible_to<T, nlohmann::json>);

template <Reflectable T>
constexpr nlohmann::json toJson(T const&)
    requires(!std::convertible_to<T, nlohmann::json>);


template <typename T>
constexpr nlohmann::json toJson(T const& e)
    requires(std::is_enum_v<T>)
{
    return magic_enum::enum_name(e);
}

template <std::convertible_to<nlohmann::json> T>
constexpr nlohmann::json toJson(T const& obj)
    requires(!std::is_enum_v<T>)
{
    return obj;
}
template <ll::concepts::Associative T>
constexpr nlohmann::json toJson(T const& map)
    requires(std::is_convertible_v<typename T::key_type, std::string_view> && !std::convertible_to<T, nlohmann::json>)
{
    nlohmann::json res;
    for (auto& [k, v] : map) { res[std::string{k}] = toJson<typename T::mapped_type>(v); }
    return res;
}
template <ll::concepts::TupleLike T>
constexpr nlohmann::json toJson(T const& tuple)
    requires(!std::convertible_to<T, nlohmann::json>)
{
    nlohmann::json res;
    std::apply(
        [&](auto&&... args) { ((res.push_back(toJson<std::remove_cvref_t<decltype(args)>>(args))), ...); },
        tuple
    );
    return res;
}
template <ll::concepts::ArrayLike T>
constexpr nlohmann::json toJson(T const& arr)
    requires(!std::convertible_to<T, nlohmann::json>)
{
    nlohmann::json res;
    for (auto& val : arr) { res.push_back(toJson<std::remove_cvref_t<decltype(val)>>(val)); }
    return res;
}
template <Reflectable T>
constexpr nlohmann::json toJson(T const& obj)
    requires(!std::convertible_to<T, nlohmann::json>)
{
    nlohmann::json res;
    forEachMember(obj, [&](std::string_view name, auto& member) {
        using MemberType       = std::remove_cvref_t<decltype(member)>;
        res[std::string{name}] = toJson<MemberType>(member);
    });
    return res;
}


template <typename T, typename J>
constexpr void fromJson(T&, J const&)
    requires(std::is_enum_v<T>);

template <typename T, typename J>
constexpr void fromJson(T&, J const& j)
    requires(
        !std::is_enum_v<T>
        && (std::is_convertible_v<T, std::string_view> || std::is_floating_point_v<T> || std::is_integral_v<T>)
    );

template <ll::concepts::Associative T, typename J>
constexpr void fromJson(T&, J const&)
    requires(std::is_convertible_v<typename T::key_type, std::string_view>);

template <ll::concepts::TupleLike T, typename J>
constexpr void fromJson(T&, J const&);

template <ll::concepts::ArrayLike T, typename J>
constexpr void fromJson(T&, J const& j)
    requires(!std::is_convertible_v<T, std::string_view>);

template <Reflectable T, typename J>
constexpr void fromJson(T&, J const&);


template <typename T, typename J>
constexpr void fromJson(T& e, J const& j)
    requires(std::is_enum_v<T>)
{
    using ENUM = std::remove_cvref_t<T>;
    if (j.is_string()) {
        e = magic_enum::enum_cast<ENUM>((std::string)j).value_or(ENUM{});
    } else {
        e = magic_enum::enum_cast<ENUM>((std::underlying_type_t<ENUM>)j).value_or(ENUM{});
    }
}

template <typename T, typename J>
constexpr void fromJson(T& obj, J const& j) // TODO: improve this
    requires(
        !std::is_enum_v<T>
        && (std::is_convertible_v<T, std::string_view> || std::is_floating_point_v<T> || std::is_integral_v<T>)
    )
{
    if (!j.empty()) obj = j;
}

template <ll::concepts::Associative T, typename J>
constexpr void fromJson(T& map, J const& j)
    requires(std::is_convertible_v<typename T::key_type, std::string_view>)
{
    if (j.is_object())
        for (auto& [k, v] : j.items()) { fromJson<typename T::mapped_type, J>(map[k], j); }
}

template <ll::concepts::TupleLike T, typename J>
constexpr void fromJson(T& tuple, J const& j) {
    if (!j.is_array()) return;
    size_t i = 0;
    std::apply(
        [&](auto&... args) {
            (((i < j.size()) ? fromJson<std::remove_cvref_t<decltype(args)>, J>(args, j[i++]) : void()), ...);
        },
        tuple
    );
}

template <ll::concepts::ArrayLike T, typename J>
constexpr void fromJson(T& arr, J const& j)
    requires(!std::is_convertible_v<T, std::string_view>)
{
    using ValueType = typename T::value_type;
    if (!j.is_array()) return;
    if constexpr (requires(T a, ValueType v) { a.push_back(v); }) {

        arr.resize(j.size());
        for (size_t i = 0; i < j.size(); i++) { fromJson<ValueType, J>(arr[i], j[i]); }

    } else if constexpr (requires(T a, ValueType v) { a.insert(ValueType{}); }) {

        for (size_t i = 0; i < j.size(); i++) {
            ValueType tmp{};
            fromJson<ValueType, J>(tmp, j[i]);
            arr.insert(tmp);
        }

    } else {
        for (size_t i = 0; i < arr.size(); i++) { fromJson<ValueType, J>(arr[i], j[i]); }
    }
}

template <Reflectable T, typename J>
constexpr void fromJson(T& obj, J const& j) {
    forEachMember(obj, [&](std::string_view name, auto& member) {
        if (j.contains(std::string{name})) {
            using MemberType = std::remove_cvref_t<decltype(member)>;
            // if constexpr (!!requires(MemberType& o, J const& s) { fromJson<MemberType, J>(o, s); }) {
            fromJson<MemberType, J>(member, j[std::string{name}]);
            // } else {
            //     std::cout << "this type can't fromJson: " << ll::meta::invocableName<MemberType>() << std::endl <<
            //     std::endl;
            // }
        }
    });
}

} // namespace ll::reflection
