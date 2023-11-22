#pragma once

#include "ll/api/reflection/Reflection.h"

#include "fmt/format.h"

namespace ll::reflection {

class SerializationError : public std::exception {
    std::string           mField;
    std::string           mMsg;
    std::exception const* mErr{};

public:
    SerializationError(std::string_view field, std::exception const& err) : mField(field), mErr(&err) {
        mMsg = fmt::format("Serialization error in field '{}': {}", field, err.what());
    }

    SerializationError(std::string_view field, SerializationError const& other) {
        mField = fmt::format("{}.{}", field, other.mField);
        mErr   = other.mErr;
        mMsg   = fmt::format(
            "Serialization error in field '{}': {}",
            mField,
            other.mErr ? other.mErr->what() : "Unknown error"
        );
    }

    explicit SerializationError(std::string_view field) : mField(field) {
        mMsg = fmt::format("Serialization error in field '{}'", field);
    }

    [[nodiscard]] char const* what() const noexcept override { return mMsg.c_str(); }

    [[nodiscard]] std::string_view field() const noexcept { return mField; };

    [[nodiscard]] std::exception const* error() const noexcept { return mErr; };
};

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
            static_assert(ll::concepts::always_false<MemberType>, "this type can't serialize");
        }
    });
    return res;
}

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
                static_assert(ll::concepts::always_false<MemberType>, "this type can't deserialize");
            }
        } else {
            if constexpr (!ll::concepts::IsOptional<MemberType>) {
                throw SerializationError(sname, std::runtime_error("missing required field when deserializing"));
            } else {
                member = std::nullopt;
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
    if constexpr (std::is_convertible_v<T, std::string_view>) {
        if (!j.is_string()) throw std::runtime_error("field must be a string");
    } else {
        if (!j.is_number() && !j.is_boolean()) throw std::runtime_error("field must be a number");
    }
    obj = j;
}

template <class J, ll::concepts::Associative T>
inline J serialize(T const& map)
    requires(std::is_convertible_v<typename T::key_type, std::string_view> && !std::convertible_to<T, J>)
{
    J res;
    for (auto& [k, v] : map) {
        res[std::string{k}] = serialize<J>(v);
    }
    return res;
}

template <class J, ll::concepts::Associative T>
inline void deserialize(T& map, J const& j)
    requires(std::is_convertible_v<typename T::key_type, std::string_view>)
{
    if (!j.is_object()) throw std::runtime_error("field must be an object");
    map.clear();
    for (auto& [k, v] : j.items()) {
        deserialize<J>(map[k], v);
    }
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
    if (!j.is_array()) throw std::runtime_error("field must be an array");
    size_t i = 0;
    std::apply([&](auto&... args) { (((i < j.size()) ? deserialize<J>(args, j[i++]) : void()), ...); }, tuple);
}

template <class J, ll::concepts::ArrayLike T>
inline J serialize(T const& arr)
    requires(!std::convertible_to<T, J>)
{
    J res;
    for (auto& val : arr) {
        res.push_back(serialize<J>(val));
    }
    return res;
}

template <class J, ll::concepts::ArrayLike T>
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

template <class J, ll::concepts::IsOptional T>
inline J serialize(T const& opt) {
    if (!opt) {
        return nullptr;
    }
    return serialize<J>(*opt);
}

template <class J, ll::concepts::IsOptional T>
inline void deserialize(T& opt, J const& j) {
    if (j.is_null()) {
        opt = std::nullopt;
    } else {
        deserialize<J>(*opt, j);
    }
}

} // namespace ll::reflection
