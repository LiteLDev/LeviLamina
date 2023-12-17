#pragma once

#include "ll/api/reflection/Reflection.h"
#include "ll/api/reflection/SerializationError.h"

namespace ll::reflection {

template <class J, Reflectable T>
inline void deserialize(T&, J const&);

template <class J, class T>
inline void deserialize(T&, J const&)
    requires(std::is_enum_v<T>);

template <class J, class T>
inline void deserialize(T&, J const&)
    requires(
        !std::is_enum_v<T>
        && (std::is_convertible_v<T, std::string_view> || std::is_floating_point_v<T> || std::is_integral_v<T>)
    );

template <class J, concepts::Associative T>
inline void deserialize(T&, J const&)
    requires(std::is_convertible_v<typename T::key_type, std::string_view>);

template <class J, concepts::TupleLike T>
inline void deserialize(T&, J const&);

template <class J, concepts::ArrayLike T>
inline void deserialize(T&, J const&)
    requires(!std::is_convertible_v<T, std::string_view>);

template <class J, concepts::IsOptional T>
inline void deserialize(T&, J const&);

template <class J, concepts::IsDispatcher T>
inline void deserialize(T&, J const&);

template <class J, Reflectable T>
inline void deserialize(T& obj, J const& j) {
    forEachMember(obj, [&](std::string_view name, auto& member) {
        using MemberType = std::remove_cvref_t<decltype(member)>;
        auto sname       = std::string{name};
        if (j.contains(sname)) {
            if constexpr (requires(MemberType& o, J const& s) { deserialize<J>(o, s); }) {
                try {
                    deserialize<J>(member, j[sname]);
                } catch (SerializationError const& e) {
                    throw SerializationError{sname, e};
                } catch (std::exception const& e) {
                    throw SerializationError{sname, e};
                } catch (...) {
                    throw SerializationError{sname};
                }
            } else {
                static_assert(concepts::always_false<MemberType>, "this type can't deserialize");
            }
        } else {
            if constexpr (!concepts::IsOptional<MemberType>) {
                throw SerializationError{sname, "missing required field when deserializing"};
            } else {
                member = std::nullopt;
            }
        }
    });
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

template <class J, class T>
inline void deserialize(T& obj, J const& j) // TODO: improve this
    requires(
        !std::is_enum_v<T>
        && (std::is_convertible_v<T, std::string_view> || std::is_floating_point_v<T> || std::is_integral_v<T>)
    )
{
    if constexpr (std::is_convertible_v<T, std::string_view>) {
        if (!j.is_string()) throw std::runtime_error("field must be a string");
    } else {
        if (!j.is_number() && !j.is_boolean()) throw std::runtime_error("field must be a number");
    }
    obj = j;
}

template <class J, concepts::Associative T>
inline void deserialize(T& map, J const& j)
    requires(std::is_convertible_v<typename T::key_type, std::string_view>)
{
    if (!j.is_object()) throw std::runtime_error("field must be an object");
    map.clear();
    for (auto& [k, v] : j.items()) {
        deserialize<J>(map[k], v);
    }
}

template <class J, concepts::TupleLike T>
inline void deserialize(T& tuple, J const& j) {
    if (!j.is_array()) throw std::runtime_error("field must be an array");
    size_t i = 0;
    std::apply([&](auto&... args) { (((i < j.size()) ? deserialize<J>(args, j[i++]) : void()), ...); }, tuple);
}

template <class J, concepts::ArrayLike T>
inline void deserialize(T& arr, J const& j)
    requires(!std::is_convertible_v<T, std::string_view>)
{
    if (!j.is_array()) throw std::runtime_error("field must be an array");

    using ValueType = typename T::value_type;

    if constexpr (requires(T a) { a.clear(); }) {
        arr.clear();
    }

    if constexpr (requires(T a, ValueType v) { a.push_back(v); }) {

        arr.resize(j.size());
        for (size_t i = 0; i < j.size(); i++) {
            deserialize<J>(arr[i], j[i]);
        }

    } else if constexpr (requires(T a, ValueType v) { a.insert(ValueType{}); }) {

        for (size_t i = 0; i < j.size(); i++) {
            ValueType tmp{};
            deserialize<J>(tmp, j[i]);
            arr.insert(tmp);
        }

    } else if constexpr (requires(T a, size_t v) { a.at(v); }) {
        for (size_t i = 0; i < arr.size(); i++) {
            deserialize<J>(arr.at(i), j[i]);
        }
    }
}

template <class J, concepts::IsOptional T>
inline void deserialize(T& opt, J const& j) {
    if (j.is_null()) {
        opt = std::nullopt;
    } else {
        if (!opt) {
            opt = typename T::value_type{};
        }
        deserialize<J>(*opt, j);
    }
}

template <class J, concepts::IsDispatcher T>
inline void deserialize(T& d, J const& j) {
    deserialize<J>(d.storage, j);
    d.call();
}

} // namespace ll::reflection
