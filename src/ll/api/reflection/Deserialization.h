#pragma once
#include "ll/api/base/FixedString.h"
#include "mc/deps/nbt/CompoundTagVariant.h"
#include "ll/api/reflection/Reflection.h"
#include "ll/api/reflection/Serializer.h"
#include "ll/api/reflection/ReflectionError.h"
#include <memory>

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

template <class T, class J, class F>
constexpr bool use_convertible_deserialize_fallback_v =
    !std::is_arithmetic_v<std::remove_cvref_t<T>> && !detail::has_value_deserializer_v<std::remove_cvref_t<T>, J, F>
    && !concepts::IsOptional<std::remove_cvref_t<T>> && !concepts::IsDispatcher<std::remove_cvref_t<T>>
    && !concepts::IsVectorBase<std::remove_cvref_t<T>> && !std::is_enum_v<std::remove_cvref_t<T>>
    && !concepts::IsVariant<std::remove_cvref_t<T>>
    && !(concepts::IsString<std::remove_cvref_t<T>> && std::is_assignable_v<std::remove_cvref_t<T>&, std::string>)
    && !std::same_as<std::remove_cvref_t<T>, std::string_view> && !concepts::TupleLike<std::remove_cvref_t<T>>
    && !concepts::ArrayLike<std::remove_cvref_t<T>> && !concepts::Associative<std::remove_cvref_t<T>>
    && !Reflectable<std::remove_cvref_t<T>> && std::convertible_to<J, std::remove_cvref_t<T>>;

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<11>)
    requires(std::is_arithmetic_v<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<10>)
    requires(
        detail::has_value_deserializer_v<std::remove_cvref_t<T>, J, F>
        || detail::is_string_serializable_v<std::remove_cvref_t<T>>
    );
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsOptional<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsDispatcher<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<8>)
    requires(concepts::IsVectorBase<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<7>)
    requires(std::is_enum_v<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<6>)
    requires(concepts::IsVariant<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<5>)
    requires(
        concepts::IsString<std::remove_cvref_t<T>> && std::is_assignable_v<std::remove_cvref_t<T>&, std::string>
        && !std::same_as<std::remove_cvref_t<T>, std::string_view>
    );
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<5>)
    requires(std::same_as<std::remove_cvref_t<T>, std::string_view>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<4>)
    requires(concepts::TupleLike<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<3>)
    requires(concepts::ArrayLike<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<2>)
    requires(concepts::Associative<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<1>)
    requires(Reflectable<std::remove_cvref_t<T>>);
template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<0>)
    requires(use_convertible_deserialize_fallback_v<T, J, F>);

template <class T, class V>
inline void replace_deserialized_value(T& target, V&& value);

} // namespace

template <class T, class J, IsKeyFormatter F>
inline Expected<> deserialize(T& t, J&& j, F const& keyFormatter) noexcept
try {
    using RT = std::remove_cvref_t<T>;
    auto value = deserialize_impl<RT>(std::forward<J>(j), keyFormatter, meta::PriorityTag<11>{});
    if (!value) return forwardError(value.error());
    replace_deserialized_value(t, std::move(*value));
    return {};
} catch (...) {
    return makeExceptionError();
}

template <class T, class J>
inline Expected<> deserialize(T& t, J&& j) noexcept {
    return deserialize<T>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <class T, class J, IsKeyFormatter F>
inline Expected<T> deserialize_to(J&& j, F const& keyFormatter) noexcept try {
    return deserialize_impl<T>(std::forward<J>(j), keyFormatter, meta::PriorityTag<11>{});
} catch (...) {
    return makeExceptionError();
}

template <class T, class J>
inline Expected<T> deserialize_to(J&& j) noexcept {
    return deserialize_to<T>(std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

namespace {

template <class T, class J, IsKeyFormatter F>
constexpr bool can_deserialize_to_v =
    requires(J&& j, F const& keyFormatter) {
        deserialize_impl<T>(std::forward<J>(j), keyFormatter, meta::PriorityTag<11>{});
    };

template <class T, class V>
inline void replace_deserialized_value(T& target, V&& value) {
    using target_type = std::remove_cvref_t<T>;
    using value_type  = std::remove_cvref_t<V>;

    static_assert(
        std::same_as<target_type, value_type>,
        "replace_deserialized_value requires the constructed value to match the target type"
    );

    if constexpr (std::is_assignable_v<T&, V&&>) {
        target = std::forward<V>(value);
    } else {
        static_assert(!std::is_const_v<target_type>, "deserialize target must not be const");
        static_assert(!std::is_reference_v<T>, "deserialize target must not be a reference");
        static_assert(
            std::is_constructible_v<target_type, V&&>,
            "deserialize target must be assignable or constructible from the deserialized value"
        );
        std::destroy_at(std::addressof(target));
        std::construct_at(std::addressof(target), std::forward<V>(value));
    }
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_construct(J&& j, F const& keyFormatter)
    requires(can_deserialize_to_v<T, J, F>)
{
    return deserialize_impl<T>(std::forward<J>(j), keyFormatter, meta::PriorityTag<11>{});
}

template <class T, class V>
inline void array_append_value(T& t, V&& value) {
    if constexpr (requires(T& a, std::remove_cvref_t<V> v) { a.emplace_back(std::move(v)); }) {
        t.emplace_back(std::forward<V>(value));
    } else if constexpr (requires(T& a, std::remove_cvref_t<V> v) { a.push_back(std::move(v)); }) {
        t.push_back(std::forward<V>(value));
    } else if constexpr (requires(T& a, std::remove_cvref_t<V> v) { a.insert(a.end(), std::move(v)); }) {
        t.insert(t.end(), std::forward<V>(value));
    } else if constexpr (requires(T& a, std::remove_cvref_t<V> v) { a.insert(std::move(v)); }) {
        t.insert(std::forward<V>(value));
    } else {
        static_assert(
            ll::traits::always_false<std::remove_cvref_t<T>>,
            "array-like type must support appending a constructed value for deserialization"
        );
    }
}

template <class T, class K, class V>
inline void associative_insert_value(T& t, K&& key, V&& value) {
    if constexpr (requires(T& a, std::remove_cvref_t<K> k, std::remove_cvref_t<V> v) {
                      a.try_emplace(std::move(k), std::move(v));
                  }) {
        t.try_emplace(std::forward<K>(key), std::forward<V>(value));
    } else if constexpr (requires(T& a, std::remove_cvref_t<K> k, std::remove_cvref_t<V> v) {
                             a.emplace(std::move(k), std::move(v));
                         }) {
        t.emplace(std::forward<K>(key), std::forward<V>(value));
    } else if constexpr (requires(T& a, std::remove_cvref_t<K> k, std::remove_cvref_t<V> v) {
                             a.insert_or_assign(std::move(k), std::move(v));
                         }) {
        t.insert_or_assign(std::forward<K>(key), std::forward<V>(value));
    } else {
        static_assert(
            ll::traits::always_false<std::remove_cvref_t<T>>,
            "associative type must support inserting a constructed mapped value for deserialization"
        );
    }
}

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

template <auto MemberPtr, bool AllowOptionalMissing, class T, class J, IsKeyFormatter F>
inline Expected<> member_deserialize_impl(T& t, J&& j, F const& keyFormatter) {
    static_assert(!typeNameStem(getRawName<MemberPtr>()).empty(), "member name is empty");
    if (!j.is_object()) return makeDeserObjectTypeError();
    auto key = keyFormatter(typeNameStem(getRawName<MemberPtr>()));
    if (!j.contains(key)) {
        using MemberT = decltype(t.*MemberPtr);
        if constexpr (AllowOptionalMissing && concepts::IsOptional<std::remove_cvref_t<MemberT>>) {
            t.*MemberPtr = std::nullopt;
            return {};
        } else {
            return makeDeserMissingRequiredFieldError(std::string{key});
        }
    }
    decltype(auto) child = object_child_at(std::forward<J>(j), key);
    auto value = deserialize_construct<std::remove_cvref_t<decltype(t.*MemberPtr)>>(
        std::forward<decltype(child)>(child),
        keyFormatter
    );
    if (!value) return forwardError(value.error());
    replace_deserialized_value(t.*MemberPtr, std::move(*value));
    return {};
}

template <auto MemberPtr, class T, class D, class J, IsKeyFormatter F>
inline Expected<> member_deserialize_or_impl(T& t, J&& j, D&& defaultValue, F const& keyFormatter) {
    static_assert(!typeNameStem(getRawName<MemberPtr>()).empty(), "member name is empty");
    if (!j.is_object()) return makeDeserObjectTypeError();

    auto key = keyFormatter(typeNameStem(getRawName<MemberPtr>()));
    if (!j.contains(key)) {
        t.*MemberPtr = std::forward<D>(defaultValue);
        return {};
    }

    decltype(auto) child = object_child_at(std::forward<J>(j), key);
    auto value = deserialize_construct<std::remove_cvref_t<decltype(t.*MemberPtr)>>(
        std::forward<decltype(child)>(child),
        keyFormatter
    );
    if (!value) return forwardError(value.error());
    replace_deserialized_value(t.*MemberPtr, std::move(*value));
    return {};
}

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member_deserialize_default_impl(T& t, J&& j, F const& keyFormatter) {
    static_assert(!typeNameStem(getRawName<MemberPtr>()).empty(), "member name is empty");
    if (!j.is_object()) return makeDeserObjectTypeError();

    auto key = keyFormatter(typeNameStem(getRawName<MemberPtr>()));
    if (!j.contains(key)) {
        return {};
    }

    decltype(auto) child = object_child_at(std::forward<J>(j), key);
    auto value = deserialize_construct<std::remove_cvref_t<decltype(t.*MemberPtr)>>(
        std::forward<decltype(child)>(child),
        keyFormatter
    );
    if (!value) return forwardError(value.error());
    replace_deserialized_value(t.*MemberPtr, std::move(*value));
    return {};
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
    auto value = deserialize_construct<std::remove_cvref_t<T>>(std::forward<decltype(child)>(child), keyFormatter);
    if (!value) return forwardError(value.error());
    replace_deserialized_value(t, std::move(*value));
    return {};
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
    auto value = deserialize_construct<std::remove_cvref_t<T>>(std::forward<decltype(child)>(child), keyFormatter);
    if (!value) return forwardError(value.error());
    replace_deserialized_value(t, std::move(*value));
    return {};
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
    auto value = deserialize_construct<std::remove_cvref_t<T>>(std::forward<decltype(child)>(child), keyFormatter);
    if (!value) return forwardError(value.error());
    replace_deserialized_value(t, std::move(*value));
    return {};
}

} // namespace

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member_deserialize(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return member_deserialize_impl<MemberPtr, true>(t, std::forward<J>(j), keyFormatter);
}

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member_deserialize_required(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return member_deserialize_impl<MemberPtr, false>(t, std::forward<J>(j), keyFormatter);
}

template <auto MemberPtr, class T, class D, class J, IsKeyFormatter F>
inline Expected<> member_deserialize_or(T& t, J&& j, D&& defaultValue, F const& keyFormatter) noexcept
    requires(
        !IsKeyFormatter<std::remove_cvref_t<D>>
        && (!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
    )
{
    return member_deserialize_or_impl<MemberPtr>(t, std::forward<J>(j), std::forward<D>(defaultValue), keyFormatter);
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
    return member_deserialize_impl<MemberPtr, true>(t, j, keyFormatter);
}

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> member_deserialize_required(T& t, J const& j, F const& keyFormatter) noexcept {
    return member_deserialize_impl<MemberPtr, false>(t, j, keyFormatter);
}

template <auto MemberPtr, class T, class D, class J, IsKeyFormatter F>
inline Expected<> member_deserialize_or(T& t, J const& j, D&& defaultValue, F const& keyFormatter) noexcept
    requires(!IsKeyFormatter<std::remove_cvref_t<D>>)
{
    return member_deserialize_or_impl<MemberPtr>(t, j, std::forward<D>(defaultValue), keyFormatter);
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

template <auto MemberPtr, class T, class J>
inline Expected<> member_deserialize_required(T& t, J&& j) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return member_deserialize_required<MemberPtr>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <auto MemberPtr, class T, class D, class J>
inline Expected<> member_deserialize_or(T& t, J&& j, D&& defaultValue) noexcept
    requires(
        !IsKeyFormatter<std::remove_cvref_t<D>>
        && (!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
    )
{
    return member_deserialize_or<MemberPtr>(
        t,
        std::forward<J>(j),
        std::forward<D>(defaultValue),
        builtin_key_formatter::default_key_formatter
    );
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
    return member_deserialize_impl<MemberPtr, true>(t, j, builtin_key_formatter::default_key_formatter);
}

template <auto MemberPtr, class T, class J>
inline Expected<> member_deserialize_required(T& t, J const& j) noexcept {
    return member_deserialize_impl<MemberPtr, false>(t, j, builtin_key_formatter::default_key_formatter);
}

template <auto MemberPtr, class T, class D, class J>
inline Expected<> member_deserialize_or(T& t, J const& j, D&& defaultValue) noexcept
    requires(!IsKeyFormatter<std::remove_cvref_t<D>>)
{
    return member_deserialize_or_impl<MemberPtr>(
        t,
        j,
        std::forward<D>(defaultValue),
        builtin_key_formatter::default_key_formatter
    );
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

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> required_member(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return member_deserialize_required<MemberPtr>(t, std::forward<J>(j), keyFormatter);
}

template <auto MemberPtr, class T, class D, class J, IsKeyFormatter F>
inline Expected<> default_member(T& t, J&& j, D&& defaultValue, F const& keyFormatter) noexcept
    requires(
        !IsKeyFormatter<std::remove_cvref_t<D>>
        && (!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
    )
{
    return member_deserialize_or<MemberPtr>(t, std::forward<J>(j), std::forward<D>(defaultValue), keyFormatter);
}

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> default_member(T& t, J&& j, F const& keyFormatter) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return member_deserialize_default_impl<MemberPtr>(t, std::forward<J>(j), keyFormatter);
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

template <auto MemberPtr, class T, class J>
inline Expected<> required_member(T& t, J&& j) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return required_member<MemberPtr>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
}

template <auto MemberPtr, class T, class D, class J>
inline Expected<> default_member(T& t, J&& j, D&& defaultValue) noexcept
    requires(
        !IsKeyFormatter<std::remove_cvref_t<D>>
        && (!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
    )
{
    return default_member<MemberPtr>(
        t,
        std::forward<J>(j),
        std::forward<D>(defaultValue),
        builtin_key_formatter::default_key_formatter
    );
}

template <auto MemberPtr, class T, class J>
inline Expected<> default_member(T& t, J&& j) noexcept
    requires(!std::is_lvalue_reference_v<J&&> || std::is_const_v<std::remove_reference_t<J>>)
{
    return member_deserialize_default_impl<MemberPtr>(t, std::forward<J>(j), builtin_key_formatter::default_key_formatter);
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

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> required_member(T& t, J const& j, F const& keyFormatter) noexcept {
    return member_deserialize_required<MemberPtr>(t, j, keyFormatter);
}

template <auto MemberPtr, class T, class D, class J, IsKeyFormatter F>
inline Expected<> default_member(T& t, J const& j, D&& defaultValue, F const& keyFormatter) noexcept
    requires(!IsKeyFormatter<std::remove_cvref_t<D>>)
{
    return member_deserialize_or<MemberPtr>(t, j, std::forward<D>(defaultValue), keyFormatter);
}

template <auto MemberPtr, class T, class J, IsKeyFormatter F>
inline Expected<> default_member(T& t, J const& j, F const& keyFormatter) noexcept {
    return member_deserialize_default_impl<MemberPtr>(t, j, keyFormatter);
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

template <auto MemberPtr, class T, class J>
inline Expected<> required_member(T& t, J const& j) noexcept {
    return required_member<MemberPtr>(t, j, builtin_key_formatter::default_key_formatter);
}

template <auto MemberPtr, class T, class D, class J>
inline Expected<> default_member(T& t, J const& j, D&& defaultValue) noexcept
    requires(!IsKeyFormatter<std::remove_cvref_t<D>>)
{
    return default_member<MemberPtr>(t, j, std::forward<D>(defaultValue), builtin_key_formatter::default_key_formatter);
}

template <auto MemberPtr, class T, class J>
inline Expected<> default_member(T& t, J const& j) noexcept {
    return member_deserialize_default_impl<MemberPtr>(t, j, builtin_key_formatter::default_key_formatter);
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

template <class T, class J, IsKeyFormatter F, size_t I = 0, class... Args>
inline Expected<std::remove_cvref_t<T>> tuple_deserialize_value(J&& j, F const& keyFormatter, Args&&... args) {
    using RT = std::remove_cvref_t<T>;
    if constexpr (I == std::tuple_size_v<RT>) {
        return RT{std::forward<Args>(args)...};
    } else {
        using element_type = std::remove_cvref_t<std::tuple_element_t<I, RT>>;
        auto child         = array_child_at<element_type>(std::forward<J>(j), I);
        auto value         = deserialize_construct<element_type>(std::forward<decltype(child)>(child), keyFormatter);
        if (!value) {
            return makeDeserIndexError(I, value.error());
        }
        return tuple_deserialize_value<RT, J, F, I + 1>(
            std::forward<J>(j),
            keyFormatter,
            std::forward<Args>(args)...,
            std::move(*value)
        );
    }
}

template <class T, class J, IsKeyFormatter F, size_t I = 0, class... Args>
inline Expected<std::remove_cvref_t<T>> reflectable_deserialize_value(J&& j, F const& keyFormatter, Args&&... args) {
    using RT = std::remove_cvref_t<T>;
    if constexpr (I == member_count_v<RT>) {
        return RT{std::forward<Args>(args)...};
    } else {
        using member_type = std::remove_cvref_t<member_t<I, RT>>;
        auto key          = keyFormatter(member_name_array_v<RT>[I]);
        std::string sname{key};
        if (!j.contains(sname)) {
            if constexpr (concepts::IsOptional<member_type>) {
                return reflectable_deserialize_value<RT, J, F, I + 1>(
                    std::forward<J>(j),
                    keyFormatter,
                    std::forward<Args>(args)...,
                    member_type{std::nullopt}
                );
            } else {
                return makeDeserMissingRequiredFieldError(sname);
            }
        }

        decltype(auto) child = object_child_at(std::forward<J>(j), sname);
        auto value           = deserialize_construct<member_type>(std::forward<decltype(child)>(child), keyFormatter);
        if (!value) {
            return makeDeserMemberError(sname, value.error());
        }
        return reflectable_deserialize_value<RT, J, F, I + 1>(
            std::forward<J>(j),
            keyFormatter,
            std::forward<Args>(args)...,
            std::move(*value)
        );
    }
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const&, meta::PriorityTag<11>)
    requires(std::is_arithmetic_v<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    if (!j.is_number() && !j.is_boolean()) return makeDeserArithmeticTypeError();
    return static_cast<RT>(j);
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<10>)
    requires(
        detail::has_value_deserializer_v<std::remove_cvref_t<T>, J, F>
        || detail::is_string_serializable_v<std::remove_cvref_t<T>>
    )
{
    using RT = std::remove_cvref_t<T>;
    if constexpr (detail::has_value_deserializer_v<RT, J, F>) {
        using JT = std::remove_cvref_t<J>;
        decltype(auto) result = [&]() -> decltype(auto) {
            if constexpr (requires { Serializer<RT, JT>::deserialize(std::forward<J>(j), keyFormatter); }) {
                return Serializer<RT, JT>::deserialize(std::forward<J>(j), keyFormatter);
            } else if constexpr (requires { Serializer<RT, JT>::deserialize(std::forward<J>(j)); }) {
                return Serializer<RT, JT>::deserialize(std::forward<J>(j));
            } else if constexpr (requires { Serializer<RT>::deserialize(std::forward<J>(j), keyFormatter); }) {
                return Serializer<RT>::deserialize(std::forward<J>(j), keyFormatter);
            } else if constexpr (requires { Serializer<RT>::deserialize(std::forward<J>(j)); }) {
                return Serializer<RT>::deserialize(std::forward<J>(j));
            } else if constexpr (requires {
                                     Serializer<RT>::template deserialize<JT>(std::forward<J>(j), keyFormatter);
                                 }) {
                return Serializer<RT>::template deserialize<JT>(std::forward<J>(j), keyFormatter);
            } else {
                return Serializer<RT>::template deserialize<JT>(std::forward<J>(j));
            }
        }();
        using Result = std::remove_cvref_t<decltype(result)>;
        if constexpr (concepts::IsLeviExpected<Result>) {
            if (!result) return forwardError(result.error());
            return std::move(*result);
        } else {
            return std::forward<decltype(result)>(result);
        }
    } else {
        if (!j.is_string()) return makeDeserStringTypeError();
        if constexpr (std::is_lvalue_reference_v<J&&> && concepts::BorrowableStringSource<J>) {
            auto const& text = std::as_const(j).template get_ref<typename std::remove_cvref_t<J>::string_t const&>();
            if (auto res = Serializer<RT>::from_string(std::string_view{text}); res) {
                return *std::move(res);
            } else {
                return forwardError(res.error());
            }
        } else {
            std::string text = std::string{std::forward<J>(j)};
            if (auto res = Serializer<RT>::from_string(text); res) {
                return *std::move(res);
            } else {
                return forwardError(res.error());
            }
        }
    }
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsOptional<std::remove_cvref_t<T>>)
{
    using RT         = std::remove_cvref_t<T>;
    using value_type = typename RT::value_type;
    if (j.is_null()) {
        return RT{std::nullopt};
    }
    auto value = deserialize_construct<value_type>(std::forward<J>(j), keyFormatter);
    if (!value) return forwardError(value.error());
    return RT{std::move(*value)};
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<9>)
    requires(concepts::IsDispatcher<std::remove_cvref_t<T>>)
{
    using RT           = std::remove_cvref_t<T>;
    using storage_type = typename RT::storage_type;
    auto storage       = deserialize_construct<storage_type>(std::forward<J>(j), keyFormatter);
    if (!storage) return forwardError(storage.error());
    RT result{std::move(*storage)};
    result.call();
    return result;
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<8>)
    requires(concepts::IsVectorBase<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    if (!j.is_array()) return makeDeserArrayTypeError();
    RT result{};
    Expected<> res;
    RT::forEachComponent([&]<typename axis_type, size_t iter> {
        if (res) {
            auto child  = array_child_at<axis_type>(std::forward<J>(j), iter);
            auto value  = deserialize_construct<axis_type>(std::forward<decltype(child)>(child), keyFormatter);
            if (!value) {
                res = makeDeserIndexError(iter, value.error());
            } else {
                result.template get<axis_type, iter>() = std::move(*value);
            }
        }
    });
    if (!res) return forwardError(res.error());
    return result;
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<7>)
    requires(std::is_enum_v<std::remove_cvref_t<T>>)
{
    using enum_type = std::remove_cvref_t<T>;
    if (j.is_string()) {
        std::string s = std::string{std::forward<J>(j)};
        if (auto res = detail::string_to_enum<enum_type>(s, keyFormatter)) {
            return *res;
        } else if constexpr (magic_enum::detail::subtype_v<enum_type> == magic_enum::detail::enum_subtype::flags) {
            return makeDeserEnumFlagsValueError(s);
        } else {
            return makeDeserEnumValueError(s);
        }
    } else if (j.is_number()) {
        return static_cast<enum_type>(static_cast<std::underlying_type_t<enum_type>>(j));
    } else {
        return makeDeserEnumTypeError();
    }
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<6>)
    requires(concepts::IsVariant<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    Expected<RT> matched = makeDeserVariantCastError(j.type_name(), j.dump());

    [&]<typename... Ts>(std::type_identity<std::variant<Ts...>>) {
        ([&] {
            if (matched.has_value()) return;
            if constexpr (std::is_arithmetic_v<Ts>) {
                Expected<Ts> value = [&]() -> Expected<Ts> {
                    if constexpr (std::same_as<Ts, bool>) {
                        if (j.is_boolean()) return j.template get<bool>();
                    } else if constexpr (std::is_floating_point_v<Ts>) {
                        if (j.is_number_float()) return static_cast<Ts>(j.template get<double>());
                    } else if constexpr (std::is_signed_v<Ts>) {
                        if (j.is_number_integer() && !j.is_number_unsigned()) {
                            return static_cast<Ts>(j.template get<std::int64_t>());
                        }
                    } else if constexpr (std::is_unsigned_v<Ts>) {
                        if (j.is_number_unsigned()) return static_cast<Ts>(j.template get<std::uint64_t>());
                    }
                    return makeDeserNumberTypeError(j.type_name());
                }();
                if (value) {
                    matched = RT{std::in_place_type<Ts>, std::move(*value)};
                }
            }
        }(), ...);
    }(std::type_identity<RT>{});

    [&]<typename... Ts>(std::type_identity<std::variant<Ts...>>) {
        ([&] {
            if (matched.has_value()) return;
            if (auto value = deserialize_construct<Ts>(std::forward<J>(j), keyFormatter); value) {
                matched = RT{std::in_place_type<Ts>, std::move(*value)};
            }
        }(), ...);
    }(std::type_identity<RT>{});

    return matched;
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const&, meta::PriorityTag<5>)
    requires(
        concepts::IsString<std::remove_cvref_t<T>> && std::is_assignable_v<std::remove_cvref_t<T>&, std::string>
        && !std::same_as<std::remove_cvref_t<T>, std::string_view>
    )
{
    using RT = std::remove_cvref_t<T>;
    if (!j.is_string()) return makeDeserStringTypeError();
    return RT{std::string{std::forward<J>(j)}};
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const&, meta::PriorityTag<5>)
    requires(std::same_as<std::remove_cvref_t<T>, std::string_view>)
{
    if (!j.is_string()) return makeDeserStringTypeError();
    if constexpr (std::is_lvalue_reference_v<J&&> && concepts::BorrowableStringSource<J>) {
        auto const& text = std::as_const(j).template get_ref<typename std::remove_cvref_t<J>::string_t const&>();
        return std::string_view{text};
    } else {
        return makeDeserStringViewLifetimeError();
    }
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<4>)
    requires(concepts::TupleLike<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    if (!j.is_array()) return makeDeserArrayTypeError();
    if (j.size() != std::tuple_size_v<RT>) return makeDeserArraySizeError(std::tuple_size_v<RT>);
    return tuple_deserialize_value<RT>(std::forward<J>(j), keyFormatter);
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<3>)
    requires(concepts::ArrayLike<std::remove_cvref_t<T>>)
{
    using RT         = std::remove_cvref_t<T>;
    using value_type = typename RT::value_type;
    if (!j.is_array()) return makeDeserArrayTypeError();
    RT result{};
    if constexpr (requires(RT& a) { a.clear(); }) {
        result.clear();
    }
    for (size_t i = 0; i < j.size(); ++i) {
        auto child = array_child_at<value_type>(std::forward<J>(j), i);
        auto value = deserialize_construct<value_type>(std::forward<decltype(child)>(child), keyFormatter);
        if (!value) return makeDeserIndexError(i, value.error());
        array_append_value(result, std::move(*value));
    }
    return result;
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<2>)
    requires(concepts::Associative<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    static_assert(
        detail::is_key_stringifiable_v<typename RT::key_type>,
        "the key type of the associative container must be convertible from a string"
    );
    J const& jConst = j;
    if (!jConst.is_object()) return makeDeserObjectTypeError();
    RT result{};
    if constexpr (requires(RT& a) { a.clear(); }) {
        result.clear();
    }
    for (auto&& [k, v] : jConst.items()) {
        std::string keyString{k};
        auto        keyOpt = string_to_type<typename RT::key_type>(keyString, keyFormatter);
        if (!keyOpt.has_value()) {
            auto error = makeDeserInvalidKeyError(keyString);
            return makeDeserKeyError(keyString, error.error());
        }
        using mapped_type = typename RT::mapped_type;
        auto value        = deserialize_construct<mapped_type>(std::forward<decltype(v)>(v), keyFormatter);
        if (!value) return makeDeserKeyError(keyString, value.error());
        associative_insert_value(result, std::move(*keyOpt), std::move(*value));
    }
    return result;
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const& keyFormatter, meta::PriorityTag<1>)
    requires(Reflectable<std::remove_cvref_t<T>>)
{
    using RT = std::remove_cvref_t<T>;
    J const& jConst = j;
    if (!jConst.is_object()) return makeDeserObjectTypeError();
    return reflectable_deserialize_value<RT>(std::forward<J>(j), keyFormatter);
}

template <class T, class J, IsKeyFormatter F>
inline Expected<std::remove_cvref_t<T>> deserialize_impl(J&& j, F const&, meta::PriorityTag<0>)
    requires(use_convertible_deserialize_fallback_v<T, J, F>)
{
    using RT = std::remove_cvref_t<T>;
    return static_cast<RT>(j);
}

} // namespace

} // namespace ll::reflection
