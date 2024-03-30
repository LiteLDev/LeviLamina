#pragma once

#include "ll/api/reflection/Reflection.h"
#include "ll/api/reflection/SerializationError.h"

namespace ll::reflection {

template <class J, Reflectable T>
inline J serialize(T const&)
    requires(!std::convertible_to<T, J>);

template <class J, class T>
inline J serialize(T const&)
    requires(std::is_enum_v<T>);

template <class J, std::convertible_to<J> T>
inline J serialize(T const&)
    requires(!std::is_enum_v<T>);

template <class J, concepts::Associative T>
inline J serialize(T const&)
    requires((concepts::IsString<typename T::key_type> || std::is_enum_v<typename T::key_type>) && !std::convertible_to<T, J>)
;

template <class J, concepts::TupleLike T>
inline J serialize(T const&)
    requires(!std::convertible_to<T, J>);

template <class J, concepts::ArrayLike T>
inline J serialize(T const&)
    requires(!std::convertible_to<T, J>);

template <class J, concepts::IsOptional T>
inline J serialize(T const&);

template <class J, concepts::IsDispatcher T>
inline J serialize(T const&);

template <class J, concepts::IsVectorBase T>
inline J serialize(T const&);


template <class J, Reflectable T>
inline J serialize(T const& obj)
    requires(!std::convertible_to<T, J>)
{
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

template <class J, class T>
inline J serialize(T const& e)
    requires(std::is_enum_v<T>)
{
    return magic_enum::enum_name(e);
}

template <class J, std::convertible_to<J> T>
inline J serialize(T const& obj)
    requires(!std::is_enum_v<T>)
{
    return obj;
}

template <class J, concepts::Associative T>
inline J serialize(T const& map)
    requires((concepts::IsString<typename T::key_type> || std::is_enum_v<typename T::key_type>) && !std::convertible_to<T, J>)
{
    J res;
    for (auto& [k, v] : map) {
        if constexpr (std::is_enum_v<typename T::key_type>) {
            res[magic_enum::enum_name(k)] = serialize<J>(v);
        } else {
            res[std::string{k}] = serialize<J>(v);
        }
    }
    return res;
}

template <class J, concepts::TupleLike T>
inline J serialize(T const& tuple)
    requires(!std::convertible_to<T, J>)
{
    J res;
    std::apply(
        [&](auto&&... args) { ((res.push_back(serialize<J>(std::forward<decltype(args)>(args)))), ...); },
        tuple
    );
    return res;
}

template <class J, concepts::ArrayLike T>
inline J serialize(T const& arr)
    requires(!std::convertible_to<T, J>)
{
    J res;
    for (auto& val : arr) {
        res.push_back(serialize<J>(val));
    }
    return res;
}

template <class J, concepts::IsOptional T>
inline J serialize(T const& opt) {
    if (!opt) {
        return nullptr;
    }
    return serialize<J>(*opt);
}

template <class J, concepts::IsDispatcher T>
inline J serialize(T const& d) {
    return serialize<J>(d.storage);
}

template <class J, concepts::IsVectorBase T>
inline J serialize(T const& vec) {
    J res;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        res.push_back(serialize<J>(vec.template get<axis_type>(iter)));
    });
    return res;
}

} // namespace ll::reflection
