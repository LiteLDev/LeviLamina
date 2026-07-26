#pragma once
#include "ll/api/base/FixedString.h"
#include "mc/deps/nbt/CompoundTagVariant.h"
#include "ll/api/reflection/Reflection.h"
#include "ll/api/reflection/Serializer.h"
#include "ll/api/reflection/ReflectionError.h"

// Priority:
// 11. Arithmetic
// 10. Custom Specialization
// 9.  Optional / Dispatcher
// 8.  IsVectorBase
// 7.  Enum
// 6.  Variant
// 5.  String
// 4.  TupleLike
// 3.  ArrayLike
// 2.  Associative
// 1.  Reflectable
// 0.  Convertible

namespace ll::reflection {

namespace {

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<11>)
    requires(std::is_arithmetic_v<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<10>)
    requires(detail::has_custom_deserializer_v<std::remove_cvref_t<T>, J, F>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsOptional<std::remove_cvref_t<T>>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsDispatcher<std::remove_cvref_t<T>>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<8>)
    requires(concepts::IsVectorBase<std::remove_cvref_t<T>>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<7>)
    requires(std::is_enum_v<std::remove_cvref_t<T>>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<6>)
    requires(concepts::IsVariant<std::remove_cvref_t<T>>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<5>)
    requires(
        concepts::IsString<std::remove_cvref_t<T>> && std::is_assignable_v<std::remove_cvref_t<T>&, std::string>
        && !std::same_as<std::remove_cvref_t<T>, std::string_view>
    );

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<5>)
    requires(std::same_as<std::remove_cvref_t<T>, std::string_view>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<4>)
    requires(concepts::TupleLike<std::remove_cvref_t<T>>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<3>)
    requires(concepts::ArrayLike<std::remove_cvref_t<T>>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<2>)
    requires(concepts::Associative<std::remove_cvref_t<T>>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<1>)
    requires(Reflectable<std::remove_cvref_t<T>>);

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<0>)
    requires(std::convertible_to<J, std::remove_cvref_t<T>>);

} // namespace

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize(T& t, J&& j, F const& keyFormatter) noexcept
#if !defined(__INTELLISENSE__)
    requires(requires(T& t, J&& j, F const& keyFormatter) {
        deserialize_impl<T>(t, std::forward<J>(j), keyFormatter, meta::PriorityTag<11>{});
    })
#endif
try {
    return deserialize_impl<T>(t, std::forward<J>(j), keyFormatter, meta::PriorityTag<11>{});
} catch (...) {
    return makeExceptionError();
}

template <class T, class J>
inline Expected<> deserialize(T& t, J&& j) noexcept {
    return deserialize<T>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <class T, class J, IsKeyFormatter F>
inline Expected<T> deserialize_to(J&& j, F const& keyFormatter) noexcept {
    Expected<T> res{};
    if (auto d = deserialize<T>(*res, std::forward<J>(j), keyFormatter); !d) {
        res = forwardError(d.error());
    }
    return res;
}

template <class T, class J>
inline Expected<T> deserialize_to(J&& j) noexcept {
    return deserialize_to<T>(std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

namespace {

template <typename Child, typename J>
[[nodiscard]] inline decltype(auto) array_child_at(J&& j, size_t index) {
    if constexpr (std::same_as<std::remove_cvref_t<J>, CompoundTagVariant>) {
        return CompoundTagVariant{j[index]};
    } else if constexpr (std::same_as<std::remove_cvref_t<J>, UniqueTagPtr>) {
        return CompoundTagVariant{j[index]};
    } else if constexpr (std::is_lvalue_reference_v<J&&>) {
        return static_cast<J&&>(j[index]);
    } else {
        return std::remove_cvref_t<J>(j[index]);
    }
}

template <typename J, typename K>
[[nodiscard]] inline decltype(auto) object_child_at(J&& j, K&& key) {
    if constexpr (std::same_as<std::remove_cvref_t<J>, CompoundTagVariant>) {
        return CompoundTagVariant{j[std::forward<K>(key)]};
    } else if constexpr (std::same_as<std::remove_cvref_t<J>, UniqueTagPtr>) {
        return CompoundTagVariant{j[std::forward<K>(key)]};
    } else if constexpr (std::is_lvalue_reference_v<J&&>) {
        return static_cast<J&&>(j[std::forward<K>(key)]);
    } else {
        return std::remove_cvref_t<J>(j[std::forward<K>(key)]);
    }
}

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member_deserialize_impl(T& t, J&& j, F const& keyFormatter) {
    static_assert(!typeNameStem(getRawName<MemberPtr>()).empty(), "member name is empty");
    if (!j.is_object()) return makeDeserObjectTypeError();
    auto key = keyFormatter(typeNameStem(getRawName<MemberPtr>()));
    if (!j.contains(key)) {
        using MemberT = decltype(t.*MemberPtr);
        if constexpr (concepts::IsOptional<std::remove_cvref_t<MemberT>>) {
            t.*MemberPtr = std::nullopt;
            return {};
        } else {
            return makeDeserMissingRequiredFieldError(std::string{key});
        }
    }
    decltype(auto) child = object_child_at(std::forward<J>(j), key);
    return deserialize<decltype(t.*MemberPtr)>(t.*MemberPtr, std::forward<decltype(child)>(child), keyFormatter);
}

template <ll::FixedString Key, bool AllowOptionalMissing, class T, class J, IsKeyFormatter F>
inline Expected<> field_deserialize_impl(T& t, J&& j, F const& keyFormatter) {
    static_assert(Key.size() != 0, "field name is empty");
    if (!j.is_object()) return makeDeserObjectTypeError();

    auto key = keyFormatter(Key.sv());
    if (!j.contains(key)) {
        if constexpr (AllowOptionalMissing && concepts::IsOptional<std::remove_cvref_t<T>>) {
            t = std::nullopt;
            return {};
        } else {
            return makeDeserMissingRequiredFieldError(std::string{key});
        }
    }

    decltype(auto) child = object_child_at(std::forward<J>(j), key);
    return deserialize<std::remove_cvref_t<T>>(t, std::forward<decltype(child)>(child), keyFormatter);
}

template <ll::FixedString Key, class T, class D, class J, IsKeyFormatter F>
inline Expected<> field_deserialize_or_impl(T& t, J&& j, D&& defaultValue, F const& keyFormatter) {
    static_assert(Key.size() != 0, "field name is empty");
    if (!j.is_object()) return makeDeserObjectTypeError();

    auto key = keyFormatter(Key.sv());
    if (!j.contains(key)) {
        t = std::forward<D>(defaultValue);
        return {};
    }

    decltype(auto) child = object_child_at(std::forward<J>(j), key);
    return deserialize<std::remove_cvref_t<T>>(t, std::forward<decltype(child)>(child), keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> field_deserialize_default_impl(T& t, J&& j, F const& keyFormatter) {
    static_assert(Key.size() != 0, "field name is empty");
    if (!j.is_object()) return makeDeserObjectTypeError();

    auto key = keyFormatter(Key.sv());
    if (!j.contains(key)) {
        return {};
    }

    decltype(auto) child = object_child_at(std::forward<J>(j), key);
    return deserialize<std::remove_cvref_t<T>>(t, std::forward<decltype(child)>(child), keyFormatter);
}

} // namespace

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member_deserialize(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return member_deserialize_impl<MemberPtr>(t, std::forward<J>(j), keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> field_deserialize(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return field_deserialize_impl<Key, true>(t, std::forward<J>(j), keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> field_deserialize_required(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return field_deserialize_impl<Key, false>(t, std::forward<J>(j), keyFormatter);
}

template <ll::FixedString Key, class T, class D, class J, IsKeyFormatter F>
inline Expected<> field_deserialize_or(T& t, J&& j, D&& defaultValue, F const& keyFormatter) noexcept
    requires(
        !IsKeyFormatter<std::remove_cvref_t<D>>
        && (!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
    )
{
    return field_deserialize_or_impl<Key>(t, std::forward<J>(j), std::forward<D>(defaultValue), keyFormatter);
}

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member_deserialize(T& t, J const& j, F const& keyFormatter) noexcept {
    return member_deserialize_impl<MemberPtr>(t, j, keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> field_deserialize(T& t, J const& j, F const& keyFormatter) noexcept {
    return field_deserialize_impl<Key, true>(t, j, keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> field_deserialize_required(T& t, J const& j, F const& keyFormatter) noexcept {
    return field_deserialize_impl<Key, false>(t, j, keyFormatter);
}

template <ll::FixedString Key, class T, class D, class J, IsKeyFormatter F>
inline Expected<> field_deserialize_or(T& t, J const& j, D&& defaultValue, F const& keyFormatter) noexcept
    requires(!IsKeyFormatter<std::remove_cvref_t<D>>)
{
    return field_deserialize_or_impl<Key>(t, j, std::forward<D>(defaultValue), keyFormatter);
}

template <auto MemberPtr, class T, class J>
inline Expected<> member_deserialize(T& t, J&& j) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return member_deserialize<MemberPtr>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class J>
inline Expected<> field_deserialize(T& t, J&& j) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return field_deserialize<Key>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class J>
inline Expected<> field_deserialize_required(T& t, J&& j) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return field_deserialize_required<Key>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class D, class J>
inline Expected<> field_deserialize_or(T& t, J&& j, D&& defaultValue) noexcept
    requires(
        !IsKeyFormatter<std::remove_cvref_t<D>>
        && (!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
    )
{
    return field_deserialize_or<Key>(
        t,
        std::forward<J>(j),
        std::forward<D>(defaultValue),
        builtin_key_formatter::default_key_formatter
    );
}

template <auto MemberPtr, class T, class J>
inline Expected<> member_deserialize(T& t, J const& j) noexcept {
    return member_deserialize_impl<MemberPtr>(t, j, builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class J>
inline Expected<> field_deserialize(T& t, J const& j) noexcept {
    return field_deserialize_impl<Key, true>(t, j, builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class J>
inline Expected<> field_deserialize_required(T& t, J const& j) noexcept {
    return field_deserialize_impl<Key, false>(t, j, builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class D, class J>
inline Expected<> field_deserialize_or(T& t, J const& j, D&& defaultValue) noexcept
    requires(!IsKeyFormatter<std::remove_cvref_t<D>>)
{
    return field_deserialize_or_impl<Key>(
        t,
        j,
        std::forward<D>(defaultValue),
        builtin_key_formatter::default_key_formatter
    );
}

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return member_deserialize<MemberPtr>(t, std::forward<J>(j), keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> field(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return field_deserialize<Key>(t, std::forward<J>(j), keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> required_field(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return field_deserialize_required<Key>(t, std::forward<J>(j), keyFormatter);
}

template <ll::FixedString Key, class T, class D, class J, IsKeyFormatter F>
inline Expected<> default_field(T& t, J&& j, D&& defaultValue, F const& keyFormatter) noexcept
    requires(
        !IsKeyFormatter<std::remove_cvref_t<D>>
        && (!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
    )
{
    return field_deserialize_or<Key>(t, std::forward<J>(j), std::forward<D>(defaultValue), keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> default_field(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return field_deserialize_default_impl<Key>(t, std::forward<J>(j), keyFormatter);
}

template <auto MemberPtr, class T, class J>
inline Expected<> member(T& t, J&& j) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return member<MemberPtr>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class J>
inline Expected<> field(T& t, J&& j) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return field<Key>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class J>
inline Expected<> required_field(T& t, J&& j) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return required_field<Key>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class D, class J>
inline Expected<> default_field(T& t, J&& j, D&& defaultValue) noexcept
    requires(
        !IsKeyFormatter<std::remove_cvref_t<D>>
        && (!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
    )
{
    return default_field<Key>(
        t,
        std::forward<J>(j),
        std::forward<D>(defaultValue),
        builtin_key_formatter::default_key_formatter
    );
}

template <ll::FixedString Key, class T, class J>
inline Expected<> default_field(T& t, J&& j) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return field_deserialize_default_impl<Key>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member(T& t, J const& j, F const& keyFormatter) noexcept {
    return member_deserialize<MemberPtr>(t, j, keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> field(T& t, J const& j, F const& keyFormatter) noexcept {
    return field_deserialize<Key>(t, j, keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> required_field(T& t, J const& j, F const& keyFormatter) noexcept {
    return field_deserialize_required<Key>(t, j, keyFormatter);
}

template <ll::FixedString Key, class T, class D, class J, IsKeyFormatter F>
inline Expected<> default_field(T& t, J const& j, D&& defaultValue, F const& keyFormatter) noexcept
    requires(!IsKeyFormatter<std::remove_cvref_t<D>>)
{
    return field_deserialize_or<Key>(t, j, std::forward<D>(defaultValue), keyFormatter);
}

template <ll::FixedString Key, class T, class J, IsKeyFormatter F>
inline Expected<> default_field(T& t, J const& j, F const& keyFormatter) noexcept {
    return field_deserialize_default_impl<Key>(t, j, keyFormatter);
}

template <auto MemberPtr, class T, class J>
inline Expected<> member(T& t, J const& j) noexcept {
    return member<MemberPtr>(t, j, builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class J>
inline Expected<> field(T& t, J const& j) noexcept {
    return field<Key>(t, j, builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class J>
inline Expected<> required_field(T& t, J const& j) noexcept {
    return required_field<Key>(t, j, builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class D, class J>
inline Expected<> default_field(T& t, J const& j, D&& defaultValue) noexcept
    requires(!IsKeyFormatter<std::remove_cvref_t<D>>)
{
    return default_field<Key>(t, j, std::forward<D>(defaultValue), builtin_key_formatter::default_key_formatter);
}

template <ll::FixedString Key, class T, class J>
inline Expected<> default_field(T& t, J const& j) noexcept {
    return field_deserialize_default_impl<Key>(t, j, builtin_key_formatter::default_key_formatter);
}

namespace {

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const&, meta::PriorityTag<11>)
    requires(std::is_arithmetic_v<std::remove_cvref_t<T>>)
{
    if (!j.is_number() && !j.is_boolean()) return makeDeserArithmeticTypeError();
    t = static_cast<std::remove_cvref_t<T>>(j);
    return {};
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<10>)
    requires(detail::has_custom_deserializer_v<std::remove_cvref_t<T>, J, F>)
{
    using RT = std::remove_cvref_t<T>;
    using JT = std::remove_cvref_t<J>;
    if constexpr (detail::has_value_deserializer_v<RT, J, F>) {
        decltype(auto) result = [&]() -> decltype(auto) {
            if constexpr (requires { Serializer<RT, JT>::deserialize(std::forward<J>(j), keyFormatter); }) {
                return Serializer<RT, JT>::deserialize(std::forward<J>(j), keyFormatter);
            } else if constexpr (requires { Serializer<RT, JT>::deserialize(std::forward<J>(j)); }) {
                return Serializer<RT, JT>::deserialize(std::forward<J>(j));
            } else if constexpr (requires { Serializer<RT>::template deserialize<JT>(std::forward<J>(j), keyFormatter); }) {
                return Serializer<RT>::template deserialize<JT>(std::forward<J>(j), keyFormatter);
            } else {
                return Serializer<RT>::template deserialize<JT>(std::forward<J>(j));
            }
        }();
        using Result = std::remove_cvref_t<decltype(result)>;
        if constexpr (concepts::IsLeviExpected<Result>) {
            if (!result) {
                return forwardError(result.error());
            }
            t = *std::forward<decltype(result)>(result);
        } else {
            t = std::forward<decltype(result)>(result);
        }
        return {};
    } else {
        if constexpr (requires { Serializer<RT>::deserialize(t, std::forward<J>(j), keyFormatter); }) {
            return Serializer<RT>::deserialize(t, std::forward<J>(j), keyFormatter);
        } else {
            return Serializer<RT>::deserialize(t, std::forward<J>(j));
        }
    }
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsOptional<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    if (j.is_null()) {
        t = std::nullopt;
        return {};
    }
    if (!t.has_value()) t.emplace();
    return deserialize<typename RT::value_type>(*t, std::forward<J>(j), keyFormatter);
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsDispatcher<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    auto res = deserialize<typename RT::storage_type>(t.storage, std::forward<J>(j), keyFormatter);
    if (!res) return res;
    t.call();
    return {};
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<8>)
    requires(concepts::IsVectorBase<std::remove_cvref_t<T>>)
{
    if (!j.is_array()) return makeDeserArrayTypeError();
    Expected<> res;
    T::forEachComponent([&]<typename axis_type, size_t iter> {
        if (res) {
            auto child = array_child_at<axis_type>(std::forward<J>(j), iter);
            res        = deserialize<axis_type>(t.template get<axis_type, iter>(), child, keyFormatter);
            if (!res) res = makeDeserIndexError(iter, res.error());
        }
    });
    return res;
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<7>)
    requires(std::is_enum_v<std::remove_cvref_t<T>>)
{
    using enum_type = std::remove_cvref_t<T>;
    if (j.is_string()) {
        std::string s = std::string{std::forward<J>(j)};
        if (auto res = detail::string_to_enum<enum_type>(s, keyFormatter)) {
            t = *res;
        } else if constexpr (magic_enum::detail::subtype_v<enum_type> == magic_enum::detail::enum_subtype::flags) {
            return makeDeserEnumFlagsValueError(s);
        } else {
            return makeDeserEnumValueError(s);
        }
    } else if (j.is_number()) {
        t = static_cast<enum_type>(static_cast<std::underlying_type_t<enum_type>>(j));
    } else {
        return makeDeserEnumTypeError();
    }
    return {};
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<6>)
    requires(concepts::IsVariant<std::remove_cvref_t<T>>)
{
    bool matched = false;

    constexpr static auto deserialize_arithmetic_force_match = [](auto& t, auto&& j) noexcept -> Expected<> {
        using RT = std::remove_cvref_t<decltype(t)>;
        if constexpr (std::same_as<RT, bool>) {
            if (j.is_boolean()) {
                t = j.template get<bool>();
                return {};
            }
        } else if constexpr (std::is_floating_point_v<RT>) {
            if (j.is_number_float()) {
                t = static_cast<RT>(j.template get<double>());
                return {};
            }
        } else if constexpr (std::is_signed_v<RT>) {
            if (j.is_number_integer() && !j.is_number_unsigned()) {
                t = static_cast<RT>(j.template get<std::int64_t>());
                return {};
            }
        } else {
            if (j.is_number_unsigned()) {
                t = static_cast<RT>(j.template get<std::uint64_t>());
                return {};
            }
        }
        return makeDeserNumberTypeError(j.type_name());
    };

    // First pass: try arithmetic types with exact match
    [&]<typename... Ts>(std::type_identity<std::variant<Ts...>>) {
        ([&] {
            if (!matched) {
                if constexpr (std::is_arithmetic_v<Ts>) {
                    Ts temp{};
                    if (auto result = deserialize_arithmetic_force_match(temp, std::forward<J>(j)); result) {
                        t       = std::move(temp);
                        matched = true;
                    }
                }
            }
        }(), ...);
    }(std::type_identity<std::remove_cvref_t<T>>{});

    // Second pass: try normal deserialization for all types
    [&]<typename... Ts>(std::type_identity<std::variant<Ts...>>) {
        ([&] {
            if (!matched) {
                Ts temp{};
                if (auto result = deserialize_impl(temp, std::forward<J>(j), keyFormatter, meta::PriorityTag<11>{});
                    result) {
                    t       = std::move(temp);
                    matched = true;
                }
            }
        }(), ...);
    }(std::type_identity<std::remove_cvref_t<T>>{});

    if (!matched) {
        return makeDeserVariantCastError(j.type_name(), j.dump());
    }
    return {};
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const&, meta::PriorityTag<5>)
    requires(
        concepts::IsString<std::remove_cvref_t<T>> && std::is_assignable_v<std::remove_cvref_t<T>&, std::string>
        && !std::same_as<std::remove_cvref_t<T>, std::string_view>
    )
{
    if (!j.is_string()) return makeDeserStringTypeError();
    t = std::string{std::forward<J>(j)};
    return {};
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const&, meta::PriorityTag<5>)
    requires(std::same_as<std::remove_cvref_t<T>, std::string_view>)
{
    if (!j.is_string()) return makeDeserStringTypeError();
    if constexpr (std::is_lvalue_reference_v<J&&> && concepts::BorrowableStringSource<J>) {
        auto const& text = std::as_const(j).template get_ref<typename std::remove_cvref_t<J>::string_t const&>();
        t                = std::string_view{text};
        return {};
    } else {
        return makeDeserStringViewLifetimeError();
    }
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<4>)
    requires(concepts::TupleLike<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    if (!j.is_array()) return makeDeserArrayTypeError();
    if (j.size() != std::tuple_size_v<RT>) return makeDeserArraySizeError(std::tuple_size_v<RT>);
    Expected<> res;
    std::apply([&](auto&... args) {
        size_t iter = 0;
        (([&](auto& arg) {
            if (res) {
                using ArgType = std::remove_cvref_t<decltype(arg)>;
                auto child = array_child_at<ArgType>(std::forward<J>(j), iter);
                res        = deserialize<ArgType>(arg, child, keyFormatter);
                if (!res) res = makeDeserIndexError(iter, res.error());
                ++iter;
            }
        }(args)), ...);
    }, t);
    return res;
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<3>)
    requires(concepts::ArrayLike<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    if (!j.is_array()) return makeDeserArrayTypeError();
    using value_type = typename RT::value_type;
    if constexpr (requires(T a) { a.clear(); }) {
        t.clear();
    }
    if constexpr (requires(T a) { { a.emplace_back() } -> std::same_as<value_type&>; }) {
        for (size_t i = 0; i < j.size(); ++i) {
            auto& val = t.emplace_back();
            auto  child = array_child_at<value_type>(std::forward<J>(j), i);
            if (auto res = deserialize<value_type>(val, child, keyFormatter); !res) {
                return makeDeserIndexError(i, res.error());
            }
        }
    } else if constexpr (requires(T a, value_type v) { a.insert(v); }) {
        for (size_t i = 0; i < j.size(); ++i) {
            value_type tmp{};
            auto       child = array_child_at<value_type>(std::forward<J>(j), i);
            if (auto res = deserialize<value_type>(tmp, child, keyFormatter); !res) {
                return makeDeserIndexError(i, res.error());
            }
            t.insert(std::move(tmp));
        }
    } else {
        static_assert(
            requires(T a) { { a.emplace_back() } -> std::same_as<value_type&>; }
                || requires(T a, value_type v) { a.insert(v); },
            "array-like type must support emplace_back() or insert() for deserialization"
        );
    }
    return {};
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<2>)
    requires(concepts::Associative<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    static_assert(
        detail::is_key_stringifiable_v<typename RT::key_type>,
        "the key type of the associative container must be convertible from a string"
    );
    J const& jConst = j;
    if (!jConst.is_object()) return makeDeserObjectTypeError();
    t.clear();
    for (auto&& [k, v] : jConst.items()) {
        std::string keyString{k};
        auto        keyOpt = string_to_type<typename RT::key_type>(keyString, keyFormatter);
        if (!keyOpt.has_value()) {
            auto error = makeDeserInvalidKeyError(keyString);
            return makeDeserKeyError(keyString, error.error());
        }
        if (auto res = deserialize<typename RT::mapped_type>(
                t[*keyOpt],
                std::forward<decltype(v)>(v),
                keyFormatter);
            !res) {
            return makeDeserKeyError(keyString, res.error());
        }
    }
    return {};
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const& keyFormatter, meta::PriorityTag<1>)
    requires(Reflectable<std::remove_cvref_t<T>>)
{
    J const& jConst = j;
    if (!jConst.is_object()) return makeDeserObjectTypeError();
    Expected<> res;
    forEachMember(t, [&](std::string_view name, auto& member) {
        if (name.starts_with('$') || !res) return;
        using member_type = std::remove_cvref_t<decltype((member))>;
        auto key = keyFormatter(name);
        std::string sname{key};
        if (jConst.contains(sname)) {
            decltype(auto) child = object_child_at(std::forward<J>(j), sname);
            res                  = deserialize<member_type>(member, std::forward<decltype(child)>(child), keyFormatter);
            if (!res) res = makeDeserMemberError(sname, res.error());
        } else {
            if constexpr (concepts::IsOptional<member_type>) {
                member = std::nullopt;
            } else {
                res = makeDeserMissingRequiredFieldError(sname);
            }
        }
    });
    return res;
}

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize_impl(T& t, J&& j, F const&, meta::PriorityTag<0>)
    requires(std::convertible_to<J, std::remove_cvref_t<T>>)
{
    t = static_cast<std::remove_cvref_t<T>>(j);
    return {};
}

} // namespace

} // namespace ll::reflection
