`ll/api/reflection/` path **Common**

## Overview

The reflection module provides compile-time reflection for aggregate types and a generic serialization framework built on top of it.

It is commonly used to:

- Serialize aggregate objects to `nlohmann::json`
- Serialize aggregate objects to NBT-like targets such as `CompoundTagVariant`
- Deserialize JSON/NBT-like data back into C++ objects
- Customize member names, enum names, associative keys, and per-type serialization behavior

The API is generic. `nlohmann::json` is only one possible target type.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/reflection/Reflection.h` | Core reflection utilities, member iteration, string conversion |
| `ll/api/reflection/Serialization.h` | Generic serialization |
| `ll/api/reflection/Deserialization.h` | Generic deserialization |
| `ll/api/reflection/Serializer.h` | Extension point for custom serializers |
| `ll/api/reflection/Dispatcher.h` | Dispatcher support |
| `ll/api/reflection/ReflectionError.h` | Common reflection errors |

## Reflectable Types

A type is reflectable when it is an aggregate type compatible with the reflection utilities.

Typical examples:

- Plain structs with public data members
- Nested aggregate structs
- Containers and optionals inside aggregates

Typical non-examples:

- Types that need custom construction logic
- Types that must serialize differently depending on output type
- Types that should serialize as strings or discriminated objects

For those, provide a `ll::reflection::Serializer<T>` specialization instead.

## Core API

### Serialization

```cpp
template <typename J, typename T, IsKeyFormatter F>
Expected<J> serialize(T&& value, F const& keyFormatter) noexcept;

template <typename J, typename T>
Expected<J> serialize(T&& value) noexcept;

template <class J, class T, IsKeyFormatter F>
Expected<> serialize_to(J& out, T&& value, F const& keyFormatter) noexcept;
```

`J` is the target type, for example:

- `nlohmann::json`
- `CompoundTagVariant`
- Any custom JSON-like / NBT-like type supported by your serializer specialization

### Deserialization

```cpp
template <class T, class J, IsKeyFormatter F>
Expected<> deserialize(T& out, J&& input, F const& keyFormatter) noexcept;

template <class T, class J>
Expected<> deserialize(T& out, J&& input) noexcept;

template <class T, class J, IsKeyFormatter F>
Expected<T> deserialize_to(J&& input, F const& keyFormatter) noexcept;
```

### Reflection Utilities

```cpp
template <class T, class F>
void forEachMember(T& value, F&& fn);

template <class T, class F>
void forEachMember(T const& value, F&& fn);
```

### String Conversion for Keys and Enums

```cpp
template <typename T, typename F>
std::string type_to_string(T const& value, F const& keyFormatter);

template <typename T, typename F>
std::optional<T> string_to_type(std::string_view text, F const& keyFormatter);
```

These are primarily used for:

- associative container keys
- enums
- custom key-stringifiable types

## Basic Aggregate Usage

```cpp
#include "ll/api/reflection/Serialization.h"
#include "ll/api/reflection/Deserialization.h"
#include "nlohmann/json.hpp"

struct PlayerData {
    std::string name;
    int         level;
    double      health;
};

auto json = ll::reflection::serialize<nlohmann::json>(PlayerData{
    .name   = "Steve",
    .level  = 10,
    .health = 20.0,
});

auto parsed = ll::reflection::deserialize_to<PlayerData>(*json);
```

The default mapping is member-name to field-name with recursive handling of:

- arithmetic types
- strings
- optionals
- variants
- arrays and array-like containers
- associative containers
- nested reflectable aggregates

## Key Formatters

A key formatter controls how reflected member names and enum names are converted during serialization and deserialization.

Example:

```cpp
std::string uppercaseAsciiKey(std::string_view key) {
    std::string result{key};
    std::transform(result.begin(), result.end(), result.begin(), [](unsigned char ch) {
        return static_cast<char>(std::toupper(ch));
    });
    return result;
}
```

Usage:

```cpp
auto json = ll::reflection::serialize<nlohmann::json>(value, uppercaseAsciiKey);
auto obj  = ll::reflection::deserialize_to<MyType>(*json, uppercaseAsciiKey);
```

### Typed Key Formatting for Associative Keys

For associative containers, the formatter can also customize how specific key types are serialized without changing how they are parsed.

Example pattern:

```cpp
struct UuidKeyFormatter {
    std::string operator()(std::string_view key) const {
        return std::string{key};
    }

    template <typename T>
        requires std::same_as<T, mce::UUID>
    std::string operator()(T const& value) const {
        auto text = value.asString();
        std::transform(text.begin(), text.end(), text.begin(), [](unsigned char ch) {
            return static_cast<char>(std::toupper(ch));
        });
        return text;
    }
};
```

This allows output like uppercase UUID keys while still accepting normal string parsing on input.

## Member Helpers

The module provides helpers for serializing or deserializing individual members and explicit fields.

### Member-Based Helpers

These use the real C++ member pointer and reflected member name:

```cpp
member<&Type::member>(object, outJson, formatter);
member_serialize<&Type::member>(outJson, object, formatter);
member_deserialize<&Type::member>(object, inJson, formatter);
```

Use these when the field name should come from the actual member name.

### Fixed-Key Helpers

These use an explicit compile-time string key:

```cpp
field<"name">(value, outJson, formatter);
field_serialize<"name">(outJson, value, formatter);

field<"name">(value, inJson, formatter);
field_deserialize<"name">(value, inJson, formatter);
required_field<"name">(value, inJson, formatter);
default_field<"name">(value, inJson, formatter);
default_field<"name">(value, inJson, defaultValue, formatter);
```

Use these when:

- the field name does not directly match a C++ member name
- you are writing a custom serializer
- some fields are conditionally required

### Optional vs Required Fields

`field_deserialize<"...">` treats missing `std::optional<T>` as success and resets it to `std::nullopt`.

`required_field<"...">` always requires the field to exist, even if the destination type is `std::optional<T>`.

`default_field<"...">` without a `defaultValue` keeps the current value unchanged when the field does not exist.

`default_field<"...">` uses the provided default value when the field does not exist, and does not report a missing-field error.

This is useful for conditional schemas such as:

```cpp
struct ItemInfo {
    ItemInfoType               type;
    std::optional<std::string> name;
    std::optional<int>         aux;
    std::optional<std::string> snbt;
};
```

If `type == Name`, `name` may be logically required.
If `type == Snbt`, `snbt` may be logically required.

## Custom Serializers

When aggregate reflection is not enough, provide a `Serializer<T>` specialization.

This is the most important extension point in the reflection system.

Before writing a specialization, first decide what shape your type should have externally:

- string form, such as `"1.20.5"` or `"0123-uuid-..."`  
- value form, such as a JSON object, JSON string, or NBT node  
- object-building form, where you want to manually control fields one by one

### Which Specialization Should You Write?

Use `to_string` / `from_string` when:

- the type should behave like a string key
- the type is often used as an associative container key
- you want `type_to_string` / `string_to_type` support

Use value-style `serialize` / `deserialize` when:

- the whole type should serialize as a single value
- the output may differ by target type
- the type is not naturally represented by reflected member names

Use in-place `serialize(value, out, formatter)` / `deserialize(out, in, formatter)` when:

- you need to manually control fields
- some fields are conditionally required
- you want to reuse `field`, `required_field`, `member`, or `member_deserialize`

### Resolution Order

At a high level, reflection prefers custom serializers over default aggregate reflection.

Common precedence looks like this:

1. custom serializer for the exact value/output combination
2. built-in optional / dispatcher / enum / variant / container handling
3. aggregate reflection
4. final fallback conversion

In practice, if `Serializer<T>` exists and matches the current call, it will normally win before aggregate reflection.

There are three major customization layers.

### 1. String Conversion

Used by:

- associative keys
- enums in some conversion paths
- explicit `type_to_string` / `string_to_type`

```cpp
template <>
struct ll::reflection::Serializer<MyType> {
    static std::string to_string(MyType const& value);
    static ll::Expected<MyType> from_string(std::string_view text);
};
```

This does not replace normal object serialization by itself.

It mainly affects:

- associative container keys
- `type_to_string(value)`
- `string_to_type<T>(text)`

Typical example:

```cpp
template <>
struct ll::reflection::Serializer<mce::UUID> {
    static std::string to_string(mce::UUID const& value) {
        return value.asString();
    }

    static ll::Expected<mce::UUID> from_string(std::string_view sv) {
        if (!mce::UUID::canParse(sv)) {
            return ll::makeI18nStringError<"invalid uuid">();
        }
        return mce::UUID::fromString(sv);
    }
};
```

Write this when the type has a canonical text form.

### 2. Value Serializer / Deserializer

Used when the entire value should serialize as another standalone representation.

```cpp
template <>
struct ll::reflection::Serializer<MyType> {
    template <typename J>
    static ll::Expected<J> serialize(MyType const& value);

    template <typename J>
    static ll::Expected<MyType> deserialize(J const& j);
};
```

This is the most flexible style.

Use it when the type should be treated as a single value rather than as a bag of reflected members.

Typical example:

```cpp
template <>
struct ll::reflection::Serializer<mce::UUID> {
    template <typename J>
    static J serialize(mce::UUID const& value) {
        return value.asString();
    }

    template <typename J>
    static ll::Expected<mce::UUID> deserialize(J const& j) {
        if (!j.is_string()) {
            return ll::reflection::makeDeserStringTypeError();
        }
        auto text = std::string{j};
        if (!mce::UUID::canParse(text)) {
            return ll::makeI18nStringError<"invalid uuid">();
        }
        return mce::UUID::fromString(text);
    }
};
```

This works well for:

- UUID-like types
- version-like types
- wrapper types
- types that should serialize differently for `json` and `nbt`

You can also make the behavior depend on the output type:

```cpp
template <>
struct ll::reflection::Serializer<MyType> {
    template <typename J>
    static ll::Expected<J> serialize(MyType const& value) {
        if constexpr (std::same_as<J, CompoundTagVariant>) {
            return /* NBT form */;
        } else {
            return /* JSON or string form */;
        }
    }
};
```

This is the preferred way to support different serialization results for different target types.

Example idea:

- `serialize<nlohmann::json>(value)` returns an SNBT string
- `serialize<CompoundTagVariant>(value)` returns the original NBT node unchanged

That pattern is useful when you want the same C++ type to expose different external representations depending on the output sink.

### 3. In-Place Serializer / Deserializer

Useful when the target object must be populated field by field.

```cpp
template <>
struct ll::reflection::Serializer<MyType> {
    template <typename J, typename F>
    static ll::Expected<> serialize(MyType const& value, J& out, F const& keyFormatter);

    template <typename J, typename F>
    static ll::Expected<> deserialize(MyType& out, J const& in, F const& keyFormatter);
};
```

This style is usually the best one for object schemas.

Inside it, prefer the helper APIs instead of manually repeating `contains` + `at` + `deserialize`:

```cpp
template <>
struct ll::reflection::Serializer<ItemInfo> {
    template <typename J, typename F>
    static ll::Expected<> deserialize(ItemInfo& out, J const& j, F const& keyFormatter) {
        using ll::reflection::field;
        using ll::reflection::required_field;

        if (!j.is_object()) {
            return ll::reflection::makeDeserObjectTypeError();
        }

        if (auto res = field<"type">(out.type, j, keyFormatter); !res) {
            return ll::forwardError(res.error());
        }

        switch (out.type) {
        case ItemInfoType::Name:
            if (auto res = required_field<"name">(out.name, j, keyFormatter); !res) {
                return ll::forwardError(res.error());
            }
            if (auto res = field<"aux">(out.aux, j, keyFormatter); !res) {
                return ll::forwardError(res.error());
            }
            out.snbt.reset();
            return {};

        case ItemInfoType::Snbt:
            if (auto res = required_field<"snbt">(out.snbt, j, keyFormatter); !res) {
                return ll::forwardError(res.error());
            }
            out.name.reset();
            out.aux.reset();
            return {};
        }

        return {};
    }
};
```

This pattern is ideal for:

- discriminator-based objects
- conditionally required fields
- partial compatibility layers
- hand-tuned output naming

### Recommendation

When you are unsure, start here:

1. If the type has a canonical text form, write `to_string` / `from_string`.
2. If the type should serialize as a single external value, write value-style `serialize` / `deserialize`.
3. If the type should serialize as an object with custom field logic, write in-place `serialize` / `deserialize`.

If one type needs both key-string support and normal value support, it is valid to implement both.

### Common Mistakes

- Only implementing `to_string` / `from_string` and expecting normal object serialization to change.
- Writing aggregate fields manually when `field` / `required_field` would be simpler and safer.
- Forgetting that different output targets may need different `serialize<J>` results.
- Treating `std::optional<T>` as required without using `required_field`.
- Pushing key-formatting logic into the type itself when it should be handled by the passed formatter.

This style is often the best choice for:

- discriminated objects
- conditionally required fields
- partially flattened output

## Example: String + Value Serializer on the Same Type

A type can support both:

- `to_string` / `from_string`
- full structured `serialize` / `deserialize`

This is useful for types like versions:

```cpp
struct TestVersion {
    int mMajor = 0;
    int mMinor = 0;
    int mPatch = 0;
};
```

Possible behavior:

- as an object field value: serialize as `{ "mMajor": 1, "mMinor": 20, "mPatch": 5 }`
- as an associative key: serialize as `"1.20.5"`

## Variants

Plain `std::variant` is supported.

Example:

```cpp
using Value = std::variant<int, std::string, NestedValue>;
```

Behavior:

- serialization writes the currently active alternative
- deserialization tries alternatives in priority order
- arithmetic alternatives use an exact-match pass first
- if no alternative matches, deserialization returns a unified variant cast error

For more complex variants, provide a custom serializer.

### Discriminator-Based Variants

If your variant needs a discriminator field such as:

```json
{
  "type": "transfer",
  "value": { ... }
}
```

write a `Serializer<YourVariant>` specialization that:

- writes the discriminator
- writes the payload
- selects the correct alternative during deserialization

This is also how enum-indexed variants can be implemented.

## Enums and Flag Enums

Enums support:

- string serialization using reflected enum names
- key formatter transformation on enum names
- numeric fallback when no string name is available

Flag enums are also supported. For example, a PascalCase flags enum can serialize to:

```text
read_permission|write_permission
```

when used with an appropriate key formatter.

## Associative Containers

Associative container keys must be string-convertible.

Supported key styles include:

- built-in string-like keys
- enums
- custom types with `Serializer<T>::to_string` / `from_string`

During deserialization:

- invalid key text reports a key-specific error
- value errors are wrapped with the failing key path

## String View Lifetime Rules

`std::string_view` deserialization is intentionally strict.

It succeeds only when the source can safely borrow storage from the input object.

This means:

- deserializing from a stable lvalue JSON/NBT source can succeed
- deserializing from a temporary source can fail with a lifetime error

This prevents dangling `string_view` values.

## Error Model

All public serialization and deserialization APIs return `ll::Expected`.

Common failures include:

- type mismatch such as "field must be a string"
- missing required field
- invalid associative key
- invalid enum value
- variant cast failure

Nested failures are wrapped with path information such as:

- member name
- array index
- associative key

This makes error messages useful even for deeply nested objects.

## Recommended Patterns

Use plain aggregate reflection when:

- the C++ layout already matches the serialized layout
- all required fields are structurally obvious

Use `field` / `required_field` helpers when:

- field names are explicit
- requiredness depends on another field
- you are inside a custom serializer

Use `Serializer<T>` when:

- the type should serialize as a string
- the type should serialize differently for JSON and NBT
- a variant needs a discriminator field
- the type is not a simple aggregate

## Related

- [Config](config.md) uses reflection for config serialization
- [Base](base.md) contains foundational type utilities used by reflection
