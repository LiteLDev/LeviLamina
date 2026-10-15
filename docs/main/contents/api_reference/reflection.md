`ll/api/reflection/` · **Common**

## Overview

The reflection module maps C++ structs to and from JSON / NBT without hand-writing a reader and a writer for every type. Typical uses:

- mod configuration files ([Config](config.md) is built on top of it)
- the mod manifest, `manifest.json`
- persistence such as world or player data
- custom NBT data (`CompoundTagVariant`)
- network packets and other JSON-like / NBT-like structures

It is not JSON specific: `nlohmann::json` is only the most common target, and any type exposing queries such as `is_object` / `is_array` / `is_string` together with the `object()` / `array()` factories can be handled by the same code.

**How to read this page:**

1. Store a plain struct as JSON — read the Quick Start.
2. Give a type a string form (a version number, an id, a UUID) — read Specializing a Simple Type.
3. Control required fields, write advanced specializations, or debug a specialization that appears to do nothing — read [Reflection (Advanced)](reflection_advanced.md).

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/reflection/Reflection.h` | Core reflection utilities, member iteration, string conversion |
| `ll/api/reflection/Serialization.h` | Generic serialization |
| `ll/api/reflection/Deserialization.h` | Generic deserialization |
| `ll/api/reflection/Serializer.h` | Extension point for custom serializers |
| `ll/api/reflection/Dispatcher.h` | Dispatcher support |
| `ll/api/reflection/ReflectionError.h` | Common reflection errors |
| `ll/api/reflection/TypeName.h` | Compile-time type names and name trimming |

## Reflectable Types

An **aggregate** needs no specialization at all. That means: no user declared constructors, no private or protected non-static data members, and no private or protected bases. Typical examples:

- Plain structs with public data members
- Nested aggregate structs
- Containers and optionals inside aggregates

The default mapping is member-name to field-name, applied recursively. How each kind of type maps:

| C++ type | Output | Notes |
| --- | --- | --- |
| arithmetic `int` / `float` / `double` … | number | `bool` becomes a boolean; numeric conversion is strict, see below |
| `std::string` and other string types | string | |
| `std::string_view` | string | only deserializes from a safely borrowable lvalue source, see the advanced page |
| enums | string (the enum name) | falls back to the underlying integer when no name is available |
| `std::optional<T>` | whatever `T` maps to | an empty optional as an object member **omits the whole key** instead of writing `null` |
| `std::variant<...>` | whatever the current alternative maps to | |
| `std::pair` / `std::tuple` / `std::array` | array | the element count must match exactly on deserialization |
| `std::vector` / `std::list` / `std::set` … | array | |
| `std::map` / `std::unordered_map` … | object | the key type has to be string-convertible |
| nested aggregates | object | the same rules apply recursively |

Two things that regularly surprise people:

- **Default deserialization requires every non-optional member to be present.** Default member initializers (`int level = 0;`) are not used as a fallback — a missing field reports a missing-field error — and extra keys in the input are ignored.
- **Numeric conversion is strict**: out-of-range values (`300` into an `int8`), fractional values written into an integer type, and negative values written into an unsigned type are all reported instead of being truncated or wrapped. Booleans written into an arithmetic type become 0 / 1.

Types that are not a good fit (private members, user declared constructors, custom construction logic, a required string or discriminated representation, ...) need a `Serializer<T>` specialization, described below.

## Quick Start: Basic Aggregate Types

Three steps.

### 1. Define the struct

Public data members are all it takes:

```cpp
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/reflection/Serialization.h"

#include "nlohmann/json.hpp"

struct PlayerData {
    std::string name{};
    int         level{};
    double      health{};
};
```

### 2. Serialize

```cpp
ll::Expected<nlohmann::json> toJson() {
    PlayerData const player{
        .name   = "Steve",
        .level  = 10,
        .health = 20.0,
    };
    return ll::reflection::serialize<nlohmann::json>(player);
}
```

The result is an object keyed by member name:

```json
{
    "health": 20.0,
    "level": 10,
    "name": "Steve"
}
```

`nlohmann::json` sorts keys, so this order differs from the declaration order; switch to `nlohmann::ordered_json` to keep the declaration order (the config system does exactly that).

### 3. Deserialize

```cpp
ll::Expected<PlayerData> fromJson(nlohmann::json const& json) {
    return ll::reflection::deserialize_to<PlayerData>(json);
}
```

`deserialize_to<T>` reads a fresh `T`; when you need to fill an object that already exists (a config object owned by the caller, for example), call `deserialize(out, json)` instead.

The default rule is member-name to field-name, applied recursively; the table above shows how each type maps. It is **strict**: a missing non-optional member reports a missing-field error, while extra keys in the input are ignored.

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

`J` is the target type: `nlohmann::json`, `CompoundTagVariant`, or a type you support through `Serializer<T>` yourself.

### Deserialization

```cpp
template <class T, class J, IsKeyFormatter F>
Expected<> deserialize(T& out, J&& input, F const& keyFormatter) noexcept;

template <class T, class J>
Expected<> deserialize(T& out, J&& input) noexcept;

template <class T, class J, IsKeyFormatter F>
Expected<T> deserialize_to(J&& input, F const& keyFormatter) noexcept;
```

All public entry points return `ll::Expected`, used exactly like the rest of the API:

```cpp
auto json = ll::reflection::serialize<nlohmann::json>(value);
if (!json) {
    return ll::forwardError(json.error());   // failures carry the field path, see Error Model
}
use(*json);                                  // dereference on success
```

Most operations come in two flavors; pick by whether you already have a target object:

| What you want | Which entry point |
| --- | --- |
| Convert a value into a fresh target object | `serialize<J>(value)` / `deserialize_to<T>(input)` |
| Write into an object that already exists | `serialize_to<J>(out, value)` / `deserialize(out, input)` |

Every entry point also has a variant without a key formatter, which uses the default one (keys are passed through unchanged).

## Specializing a Simple Type

Some types are not naturally "a set of members": a UUID, a version number, a resource id. Their natural form is a string. Giving them one takes a `Serializer<T>` specialization with two layers — **the first makes the type usable as a key, the second makes it render as a string inside objects**.

Take a strongly typed id:

```cpp
struct PlayerId {
    uint64 value{};

    std::string                   toString() const;                  // e.g. "0000-0000-0001"
    static ll::Expected<PlayerId> tryParse(std::string_view text);    // returns an error on bad input
};

template <>
struct ll::reflection::Serializer<PlayerId> {
    // Layer 1: the string form, used by associative keys and type_to_string / string_to_type
    static std::string            to_string(PlayerId const& value) { return value.toString(); }
    static ll::Expected<PlayerId> from_string(std::string_view text) { return PlayerId::tryParse(text); }

    // Layer 2: render as a string inside objects as well
    template <typename J, typename F>
    static ll::Expected<J> serialize(PlayerId const& value, F const&) {
        return J{value.toString()};
    }

    template <typename J, typename F>
    static ll::Expected<PlayerId> deserialize(J const& j, F const&) {
        if (!j.is_string()) return ll::reflection::makeDeserStringTypeError();
        // Take string_t const&, then build the type you need from it.
        auto const& text = j.template get_ref<typename std::remove_cvref_t<J>::string_t const&>();
        return from_string(std::string_view{text});
    }
};
```

What changes:

```cpp
struct PlayerProfile {
    PlayerId    id{};
    std::string name{};
};

// serialize<nlohmann::json>(profile) now gives:
// {"id":"0000-0000-0001","name":"Steve"}
//
// a std::map<PlayerId, int> key becomes "0000-0000-0001" as well,
// and deserialize_to<PlayerId>(json) parses the string back
```

Notes:

- **Write both layers.** With only `to_string` / `from_string` the type works as a key, but as an ordinary member it is still expanded member by member (for an aggregate) or reported as unsupported (for a non-aggregate).
- **Match the signatures exactly and never return `void`**, or the specialization is silently ignored — the full checklist is in the [advanced page](reflection_advanced.md).
- This is exactly what LL does for `mce::UUID` and `ll::data::Version`; they pair an in-place `serialize(t, j)` that writes the string into the target with a value `deserialize`, and the framework accepts both spellings.
- To change only *how a key is spelled* (uppercase UUID keys, say) without making the type a string, use a key formatter, below.

## Optionals and Required Fields

Default deserialization is strict, and there are only three rules:

| Member declaration | When the key is missing from the input |
| --- | --- |
| `std::optional<T> m{};` | succeeds, `m` becomes `std::nullopt` |
| a plain member `T m{};` | reports `missing required field "m" when deserializing` |

Writing mirrors this: an empty `std::optional<T>` member **omits the whole key** instead of writing `null`. "Absent key" and `null` are therefore indistinguishable in the output, and consumers have to treat the field as optional.

When you need "keep the current value if the field is absent" or "use a fallback value", use `default_member` / `default_field` (see the member helpers section of the advanced page), or simply declare the member as `std::optional<T>`.

## Key Formatters

A key formatter controls how member names, enum names and keys are converted during serialization and deserialization — uppercasing everything, for instance:

```cpp
#include <algorithm>
#include <cctype>

std::string uppercaseAsciiKey(std::string_view key) {
    std::string result{key};
    std::ranges::transform(result, result.begin(), [](unsigned char ch) {
        return static_cast<char>(std::toupper(ch));
    });
    return result;
}

// Usage:
auto json = ll::reflection::serialize<nlohmann::json>(value, uppercaseAsciiKey);
auto obj  = ll::reflection::deserialize_to<MyType>(json, uppercaseAsciiKey);
```

A formatter can also customize only one key type (uppercase UUID keys while parsing stays unchanged); that usage lives in the [advanced page](reflection_advanced.md).

## Error Model

Every public entry point returns `ll::Expected`, and failures carry a readable path:

```text
Reflection error in field 'values[0].number':
field must be a number or boolean
```

Common failures:

| Message fragment | Meaning |
| --- | --- |
| `field must be a string` / `field must be an object` / `field must be an array` | type mismatch |
| `missing required field "x" when deserializing` | a required field is absent |
| `field must be a number or boolean` | a number or boolean was expected |
| `number 300 is out of range for signed char` | the number does not fit the target type |
| `number 1.5 is not an integer` | a fractional value was written into an integer type |
| `invalid enum value: x` | the enum value is unknown |
| `invalid key: x` | an associative key could not be parsed |
| `could not cast target object (...) to any type in the variant` | no alternative of the variant matched |

At compile time there are two main diagnostics, both naming the offending type:

- `cannot serialize this type: ...` / `cannot deserialize this type: ...` — the type has no usable path, so it needs a `Serializer<T>` specialization. The full table of compile-time failures and the way to track them down are in the [advanced page](reflection_advanced.md).

Numeric conversion is strict: out-of-range values, fractional values, and negative values written into unsigned targets are reported rather than truncated or wrapped, identically for the JSON and NBT backends; booleans written into an arithmetic type become 0 / 1.

## Common Mistakes

- Only implementing `to_string` / `from_string` and expecting the string form inside objects — the second layer is needed too.
- A specialization signature that differs from the documented one (an extra `const`, a missing `typename F`) — it is silently ignored, and on an aggregate there is not even a diagnostic.
- Returning `void` from a specialization — unsupported.
- Assuming default member initializers fill in missing fields — they do not; a missing non-optional member reports an error.
- Assuming an empty `std::optional` becomes `null` — as an object member the whole key is omitted.
- Relying on a silent numeric conversion — `1.5` into `int`, `300` into `int8`, or `-1` into an unsigned type are all reported.

## Next Steps

The [advanced page](reflection_advanced.md) covers:

- the full signature table, the return-type rules and the "specialization not being used" checklist;
- member helpers (`member` / `field` / `required_field` / `default_field` for conditional requirements and fallback values);
- complex examples taken from the test suite: a discriminator deciding required fields, flattened output, types that cannot be default constructed, discriminated variants, ABI wrappers, and one type rendering differently for JSON and NBT;
- plugging another data structure (a script engine object, `Json::Value`, your own `Value` type) into the framework: custom target types;
- the dispatch priorities, how `std::variant` matches, `Dispatcher`, `std::string_view` lifetime, and the compile-time error table.

## Related

- [Reflection (Advanced)](reflection_advanced.md)
- [Config](config.md): the config system, the main consumer of reflection
- [Base](base.md): the base utilities reflection builds on (concepts, containers, `Expected`)
