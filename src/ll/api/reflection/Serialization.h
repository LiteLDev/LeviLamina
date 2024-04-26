#pragma once

#include "ll/api/reflection/Reflection.h"
#include "ll/api/reflection/SerializationError.h"

// Priority:
// 0. convertible
// 1. Reflectable enum
// 2. Associative TupleLike ArrayLike
// 3. string
// 4. IsOptional IsDispatcher IsVectorBase

namespace ll::reflection {

template <class J, class T>
inline J serialize(T const&);

template <class J, std::convertible_to<J> T>
inline J serialize_impl(T const& obj, meta::PriorityTag<0>) {
    return obj;
}
template <class J, concepts::Require<std::is_enum> T>
inline J serialize_impl(T const& e, meta::PriorityTag<1>) {
    return magic_enum::enum_name(e);
}
template <class J, Reflectable T>
inline J serialize_impl(T const& obj, meta::PriorityTag<1>) {
    J res;
    forEachMember(obj, [&](std::string_view name, auto& member) {
        if (name.starts_with('$')) {
            return;
        }
        using member_type = std::remove_cvref_t<decltype(member)>;
        if constexpr (requires(member_type& m) { serialize<J>(m); }) {
            try {
                auto j = serialize<J>(member);
                if (!j.is_null()) res[std::string{name}] = j;
                else if (concepts::ArrayLike<member_type> || concepts::TupleLike<member_type> || concepts::IsVectorBase<member_type>)
                    res[std::string{name}] = J::array();
            } catch (SerializationError const& e) {
                throw SerializationError{name, e};
            } catch (std::exception const& e) {
                throw SerializationError{name, e};
            } catch (...) {
                throw SerializationError{name};
            }
        } else {
            static_assert(concepts::always_false<member_type>, "this type can't serialize");
        }
    });
    return res;
}
template <class J, concepts::Associative T>
inline J serialize_impl(T const& map, meta::PriorityTag<2>) {
    static_assert(
        (concepts::IsString<typename T::key_type> || std::is_enum_v<typename T::key_type>),
        "the key type of the associative container must be convertible to a string"
    );
    J res;
    for (auto& [k, v] : map) {
        auto sv = serialize<J>(v);
        if constexpr (std::is_enum_v<typename T::key_type>) {
            res[magic_enum::enum_name(k)] = sv;
        } else {
            res[std::string{k}] = sv;
        }
    }
    return res;
}
template <class J, concepts::TupleLike T>
inline J serialize_impl(T const& tuple, meta::PriorityTag<2>) {
    J res;
    std::apply([&](auto&&... args) { ((res.push_back(serialize<J>(args))), ...); }, tuple);
    return res;
}
template <class J, concepts::ArrayLike T>
inline J serialize_impl(T const& arr, meta::PriorityTag<2>) {
    J res;
    for (auto& val : arr) {
        res.push_back(serialize<J>(val));
    }
    return res;
}
template <class J, concepts::IsString T>
inline J serialize_impl(T const& str, meta::PriorityTag<3>) {
    return std::string{str};
}
template <class J, concepts::IsOptional T>
inline J serialize_impl(T const& opt, meta::PriorityTag<4>) {
    if (!opt) {
        return nullptr;
    }
    return serialize<J>(*opt);
}
template <class J, concepts::IsDispatcher T>
inline J serialize_impl(T const& d, meta::PriorityTag<4>) {
    return serialize<J>(d.storage);
}
template <class J, concepts::IsVectorBase T>
inline J serialize_impl(T const& vec, meta::PriorityTag<4>) {
    J res;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        res.push_back(serialize<J>(vec.template get<axis_type>(iter)));
    });
    return res;
}
template <class J, class T>
inline J serialize(T const& t) {
    return serialize_impl<J>(t, meta::PriorityTag<4>{});
}
} // namespace ll::reflection
