#pragma once

#include "ll/api/reflection/Reflection.h"
#include "ll/api/reflection/SerializationError.h"

// Priority:
// 4. IsVectorBase IsDispatcher IsOptional
// 3. string
// 2. ArrayLike TupleLike Associative
// 1. Reflectable enum
// 0. convertible

namespace ll::reflection {

template <class J, class T>
inline void deserialize(T& t, J const& j) {
    deserialize_impl<J>(t, j, meta::PriorityTag<4>{});
}

template <class J, concepts::IsVectorBase T>
inline void deserialize_impl(T& vec, J const& j, meta::PriorityTag<4>) {
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        deserialize<J>(vec.template get<axis_type>(iter), j[iter]);
    });
}
template <class J, concepts::IsDispatcher T>
inline void deserialize_impl(T& d, J const& j, meta::PriorityTag<4>) {
    deserialize<J>(d.storage, j);
    d.call();
}
template <class J, concepts::IsOptional T>
inline void deserialize_impl(T& opt, J const& j, meta::PriorityTag<4>) {
    if (j.is_null()) {
        opt = std::nullopt;
    } else {
        if (!opt) {
            opt = typename T::value_type{};
        }
        deserialize<J>(*opt, j);
    }
}
template <class J, concepts::IsString T>
inline void deserialize_impl(T& str, J const& j, meta::PriorityTag<3>) {
    if (!j.is_string()) throw std::runtime_error("field must be a string");
    str = (std::string)j;
}
template <class J, concepts::ArrayLike T>
inline void deserialize_impl(T& arr, J const& j, meta::PriorityTag<2>) {
    if (!j.is_array()) throw std::runtime_error("field must be an array");

    using value_type = typename T::value_type;

    if constexpr (requires(T a) { a.clear(); }) {
        arr.clear();
    }
    if constexpr (requires(T a, value_type v) { a.push_back(v); }) {

        for (size_t i = 0; i < j.size(); i++) {
            value_type tmp{};
            deserialize<J>(tmp, j[i]);
            arr.push_back(tmp);
        }
    } else if constexpr (requires(T a, value_type v) { a.insert(v); }) {

        for (size_t i = 0; i < j.size(); i++) {
            value_type tmp{};
            deserialize<J>(tmp, j[i]);
            arr.insert(tmp);
        }
    } else if constexpr (requires(T a, size_t v) { a.at(v); }) {
        for (size_t i = 0; i < arr.size(); i++) {
            deserialize<J>(arr.at(i), j[i]);
        }
    }
}
template <class J, concepts::TupleLike T>
inline void deserialize_impl(T& tuple, J const& j, meta::PriorityTag<2>) {
    if (!j.is_array()) throw std::runtime_error("field must be an array");
    size_t i = 0;
    std::apply([&](auto&... args) { (((i < j.size()) ? deserialize<J>(args, j[i++]) : void()), ...); }, tuple);
}
template <class J, concepts::Associative T>
inline void deserialize_impl(T& map, J const& j, meta::PriorityTag<2>) {
    static_assert(
        (concepts::IsString<typename T::key_type> || std::is_enum_v<typename T::key_type>),
        "the key type of the associative container must be convertible to a string"
    );
    if (!j.is_object()) throw std::runtime_error("field must be an object");
    map.clear();
    for (auto& [k, v] : j.items()) {
        if constexpr (std::is_enum_v<typename T::key_type>) {
            deserialize<J>(map[magic_enum::enum_cast<typename T::key_type>(k).value_or(typename T::key_type{})], v);
        } else {
            deserialize<J>(map[k], v);
        }
    }
}
template <class J, Reflectable T>
inline void deserialize_impl(T& obj, J const& j, meta::PriorityTag<1>) {
    forEachMember(obj, [&](std::string_view name, auto& member) {
        if (name.starts_with('$')) {
            return;
        }
        using member_type = std::remove_cvref_t<decltype(member)>;
        auto sname        = std::string{name};
        if (j.contains(sname)) {
            if constexpr (requires(member_type& o, J const& s) { deserialize<J>(o, s); }) {
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
                static_assert(concepts::always_false<member_type>, "this type can't deserialize");
            }
        } else {
            if constexpr (!concepts::IsOptional<member_type>) {
                throw SerializationError{sname, "missing required field when deserializing"};
            } else {
                member = std::nullopt;
            }
        }
    });
}
template <class J, concepts::Require<std::is_enum> T>
inline void deserialize_impl(T& e, J const& j, meta::PriorityTag<1>) {
    using enum_type = std::remove_cvref_t<T>;
    if (j.is_string()) {
        e = magic_enum::enum_cast<enum_type>((std::string)j).value();
    } else {
        e = magic_enum::enum_cast<enum_type>((std::underlying_type_t<enum_type>)j).value();
    }
}
template <class J, class T>
inline void deserialize_impl(T& obj, J const& j, meta::PriorityTag<0>)
    requires(std::convertible_to<J, T>)
{
    obj = j;
}
} // namespace ll::reflection
