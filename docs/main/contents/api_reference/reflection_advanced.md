`ll/api/reflection/` · **Common** · Advanced

## Who This Page Is For

If you only want to store a plain struct as JSON, or give a type a string form, read [Reflection (Basics)](reflection.md) first. This page is for when you need to:

- write specializations that control field names, required fields, and output shape;
- understand how the framework picks a specialization, and why one you wrote appears to do nothing;
- look things up while writing code: the full signature table, the return-type rules, and the compile-time error table.

Every complex example below is taken from the test suite, `src-test/server/ReflectionTest.cpp`, and carries the name of the gtest case it came from, so you can grep for it and run it.

## Dispatch Model and Terminology

### Priority Tags

Dispatch is not a chain of nested `if constexpr`. It is **compile-time priority dispatch** through tag inheritance plus overload resolution: every candidate is named `serialize_impl` / `deserialize_impl`, and they differ only in their last parameter, `meta::PriorityTag<N>` (`PriorityTag<N>` derives from `PriorityTag<N-1>`, so higher numbers are "more specialized"). Passing `PriorityTag<11>` makes overload resolution pick the highest-priority branch the type satisfies.

| Priority | Matches (deserialization direction) |
| --- | --- |
| 11 | arithmetic types |
| 10 | a custom `Serializer<T>` specialization (value or in-place) |
| 9 | `std::optional`, `Dispatcher` |
| 8 | `VectorBase` (vector types) |
| 7 | enums |
| 6 | `std::variant` |
| 5 | string types, `std::string_view` |
| 4 | tuple-like (`std::pair` / `std::tuple` / `std::array`) |
| 3 | array-like (`std::vector` / `std::set` …) |
| 2 | associative (`std::map` …) |
| 1 | reflectable aggregates |
| 0 | fallback: a convertible target is converted, otherwise `cannot deserialize this type` |

All of this happens at **compile time**, independent of runtime values: change the type in one place and a completely different branch can be selected.

### Trait Probes

"Does a specialization of this shape exist?" is answered by a set of variable templates in `ll::reflection::detail`:

| Trait | What it detects |
| --- | --- |
| `has_value_serializer_v<T, J, F>` | a value `serialize` on `Serializer<T>` (or `Serializer<T, J>`) |
| `has_inplace_serializer_v<T, J, F>` | an in-place `serialize(T const&, J&[, F const&])` returning `ll::Expected<>` |
| `has_custom_serializer_v` | either of the two above |
| `has_value_deserializer_v<T, J, F>` | a value `deserialize` |
| `has_inplace_deserializer_v<T, J, F>` | an in-place `deserialize(T&, J const&[, F const&])` |
| `has_custom_key_serializer_v<T, F>` | `Serializer<T>::to_string(t[, f])` |
| `has_custom_key_deserializer_v<T, F>` | `Serializer<T>::from_string(sv[, f])` |
| `has_typed_key_formatter_v<T, F>` | a formatter with a per-type `operator()<T>(value)` overload |
| `is_key_stringifiable_v<T>` | usable as an associative key (string / enum / `to_string` + `from_string`) |

One detail that is easy to miss: the value forms are probed with a compound requirement that carries **no return-type constraint** (`{ expr };`). That is what lets you return `J` instead of `Expected<J>`, and the side effect is that `void` satisfies the probe too. A value specialization returning `void` is therefore selected and then fails to compile inside the framework. `void` is never a valid return type.

### The Three Kinds of Specialization

| Kind | Lives in | Semantics |
| --- | --- | --- |
| String conversion | `to_string` / `from_string` | associative keys and `type_to_string` / `string_to_type` only, **object serialization is unaffected** |
| Value | `serialize` / `deserialize` returning a value | the whole type is one value |
| In-place | `serialize` / `deserialize` taking `J&` / `T&` | field-by-field, can reuse the `field` / `member` helpers |

### Resolution Order

1. a custom specialization that matches the value type and the current target type (priority 10);
2. built-in handling: optional / dispatcher / enum / variant / containers (priorities 9 to 2);
3. default aggregate reflection (priority 1);
4. the fallback conversion (priority 0).

The two directions differ in internal order, so a type that implements both kinds hits different ones:

- **Serialization** prefers the value specialization and only then looks for an in-place one;
- **Deserialization** prefers the in-place specialization and only then falls back to the value one / built-in handling.

## Signatures and Return Types

Specializations are identified by signature, so **a signature that does not match is a specialization that does not exist**. The accepted shapes:

| Kind | Signature | Allowed return types |
| --- | --- | --- |
| String conversion | `static std::string to_string(T const&)` / `static ll::Expected<T> from_string(std::string_view)` | `std::string` (or anything convertible to `std::string_view`); `ll::Expected<T>` |
| Value, with formatter | `template <typename J, typename F> static ll::Expected<J> serialize(T const&, F const&)` | `J`, anything implicitly convertible to `J`, `ll::Expected<J>` |
| Value, without formatter | `template <typename J> static ll::Expected<J> serialize(T const&)` | same, but the framework never passes the key formatter in |
| In-place | `template <typename J, typename F> static ll::Expected<> serialize(T const&, J& out, F const&)` | must be `ll::Expected<>` |

`deserialize` mirrors this: the value form takes the input and returns `T` or `ll::Expected<T>`, the in-place form takes a `T&` and returns `ll::Expected<>`.

### Signature Checklist

1. **Match the table character for character**: an extra `const`, a missing `typename F`, or swapped parameters are all silently ignored.
2. **On an aggregate there is no diagnostic**: an ignored specialization falls back to default aggregate reflection — it compiles, it just does not do what you wrote.
3. **Only non-aggregates complain**: they end up at `cannot serialize this type` / `cannot deserialize this type`.
4. **Never return `void`**: the probe passes, then the implementation fails to compile or the specialization is ignored.
5. **Use `Serializer<T, J>` when the behavior should only apply to one target type** (see the NBT / JSON example below).

## Key Stringification

Associative containers, enums, and explicit calls all go through this layer:

```cpp
template <typename T, typename F>
std::string type_to_string(T const& value, F const& keyFormatter);

template <typename T, typename F>
std::optional<T> string_to_type(std::string_view text, F const& keyFormatter);
```

The matching concept is `IsLeastStringifiableType`: string types, enums, and types providing `to_string` + `from_string`.

### Per-Type Key Formatting

Besides handling key names (`operator()(std::string_view)`), a formatter may provide a per-type overload `operator()<T>(value)`. It only affects writing, never parsing:

```cpp
struct UuidKeyFormatter {
    std::string operator()(std::string_view key) const { return std::string{key}; }

    template <typename T>
        requires std::same_as<T, mce::UUID>
    std::string operator()(T const& value) const {
        auto text = value.asString();
        std::ranges::transform(text, text.begin(), [](unsigned char ch) {
            return static_cast<char>(std::toupper(ch));
        });
        return text;
    }
};
```

A `std::map<mce::UUID, int>` therefore writes uppercase UUID keys while still parsing ordinary UUID strings on the way in. Test: `AssociativeKeysCanCustomizeSerializationStyleWithoutAffectingParsing`.

### Where a Formatter Propagates

A formatter reaches member key names and associative keys, but **never leaks into a value specialization**: when a value specialization has no formatter parameter, the framework does not pass one, so a `to_string` used inside it keeps its own style. Test: `MemberHelperDoesNotPropagateOuterKeyFormatterIntoValueSerializer`.

## Member and Field Helpers

These helpers are shorthands meant for the inside of a `Serializer<T>` specialization. The direction of `member` / `field` is decided by the constness of the json argument — **a mutable lvalue writes out, a const lvalue or an rvalue reads in** — so outside a specialization call `serialize` / `deserialize` directly, or use one of the directional names.

| Semantics | Member pointer form | Fixed key form |
| --- | --- | --- |
| missing field resets an optional member to `nullopt` | `member<&T::m>(t, j, f)` | `field<"m">(t, j, f)` |
| field must exist, even for an optional member | `required_member<&T::m>(t, j, f)` | `required_field<"m">(t, j, f)` |
| missing field keeps the current value | `default_member<&T::m>(t, j, f)` | `default_field<"m">(t, j, f)` |
| missing field writes the provided fallback | `default_member<&T::m>(t, j, d, f)` | `default_field<"m">(t, j, d, f)` |
| serialize a single member / field | `member_serialize<&T::m>(j, t, f)` | `field_serialize<"m">(j, t, f)` |
| deserialize a single member / field | `member_deserialize<&T::m>(t, j, f)` | `field_deserialize<"m">(t, j, f)` |

Additional semantics:

- writing: an empty `std::optional<T>` member omits the key instead of writing `null`;
- argument order differs: serialization is "json first, value second", deserialization is the other way round;
- the member pointer form derives the field name from the reflected member name; use the fixed key form when the two differ.

## Complex Examples (From the Tests)

### 1. A Discriminator Deciding Which Fields Are Required

`ItemInfo` uses its `type` field to decide whether `name` or `snbt` is required. Only the in-place form can "read the discriminator first, then decide about the rest":

```cpp
template <>
struct ll::reflection::Serializer<ItemInfo> {
    template <typename J, typename F>
    static ll::Expected<> deserialize(ItemInfo& out, J const& j, F const& keyFormatter) {
        using ll::reflection::field;
        using ll::reflection::required_field;

        if (!j.is_object()) return ll::reflection::makeDeserObjectTypeError();
        if (auto res = field<"type">(out.type, j, keyFormatter); !res) return ll::forwardError(res.error());

        using enum ItemInfoType;
        switch (out.type) {
        case Name:
            if (auto res = required_field<"name">(out.name, j, keyFormatter); !res) return ll::forwardError(res.error());
            if (auto res = field<"aux">(out.aux, j, keyFormatter); !res) return ll::forwardError(res.error());
            out.snbt.reset();
            return {};

        case Snbt:
            if (auto res = required_field<"snbt">(out.snbt, j, keyFormatter); !res) return ll::forwardError(res.error());
            out.name.reset();
            out.aux.reset();
            return {};
        }
        return {};
    }
};
```

Tests: `ItemInfoUsesTypeFieldToSelectRequiredFields`, `ItemInfoReportsMissingFieldsRequiredByType`.

### 2. Flattening Several Sub-Objects into One Object

A type that derives from `std::tuple` and specializes `std::tuple_size` / `std::tuple_element` / `std::get` takes the tuple-like branch; a value serializer then merges the keys of every section into a single object:

```cpp
template <typename... Types>
struct FlatReflection : std::tuple<Types...> {
    using Base = std::tuple<Types...>;
    using Base::Base;
    constexpr FlatReflection() = default;
    constexpr FlatReflection(Types... values) : Base(std::move(values)...) {}
};

template <typename... Types>
struct ll::reflection::Serializer<FlatReflection<Types...>> {
    template <typename J, typename F, size_t... I>
    static ll::Expected<J> serializeElements(FlatReflection<Types...> const& input, F const& keyFormatter,
                                             std::index_sequence<I...>) {
        ll::Expected<J> output{J::object()};
        auto            append = [&]<size_t Index>() {
            if (!output) return;
            auto value = ll::reflection::serialize<J>(std::get<Index>(input), keyFormatter);
            if (!value) {
                output = ll::forwardError(value.error());
                return;
            }
            for (auto const& [key, child] : value->items()) (*output)[key] = child;
        };
        (append.template operator()<I>(), ...);
        return output;
    }
};
```

Test: `FlatReflectionMergesObjectSerializersAndRoundTrips`.

### 3. Types That Cannot Be Default Constructed

Those need the value form: `deserialize` returns a `T` that the specialization constructs itself. It also works inside containers, `std::optional` and `std::variant` (the framework routes through `deserialize_construct`):

```cpp
template <>
struct ll::reflection::Serializer<NonDefaultConstructibleItem> {
    template <typename J, typename F>
    static ll::Expected<NonDefaultConstructibleItem> deserialize(J const& j, F const& keyFormatter) {
        using ll::reflection::required_field;
        if (!j.is_object()) return ll::reflection::makeDeserObjectTypeError();

        int         id = 0;
        std::string name;
        if (auto res = required_field<"id">(id, j, keyFormatter); !res) return ll::forwardError(res.error());
        if (auto res = required_field<"name">(name, j, keyFormatter); !res) return ll::forwardError(res.error());
        return NonDefaultConstructibleItem{id, std::move(name)};
    }
};
```

Tests: `DeserializeToSupportsNonDefaultConstructibleTypesWithValueDeserializer`, `ContainersSupportNonDefaultConstructibleValuesWithValueDeserializer`.

### 4. Variants with an Explicit Discriminator

A plain `std::variant` can only guess an alternative from the value's shape. For an explicit discriminator, wrap the variant and specialize the wrapper:

```cpp
template <typename Enum, typename Variant>
struct VariantWithEnumIndex : Variant {
    static constexpr std::string_view typeKey = "type";
};

template <typename Enum, typename Variant>
struct ll::reflection::Serializer<VariantWithEnumIndex<Enum, Variant>> {
    // serialize:   write {"type": <enum name>, "value": <current alternative>}
    // deserialize: read `type` first, then dispatch to the matching alternative
};
```

Test: `VariantWithEnumIndexSerializesAndDeserializesUsingEnumDiscriminator`.

### 5. ABI Wrapper Types

Wrappers such as `ll::TypedStorage<Align, Size, T>` are not seen through by default reflection and have to be opted in explicitly:

```cpp
template <size_t Align, size_t Size, typename T>
struct ll::reflection::Serializer<ll::TypedStorageImpl<Align, Size, T>> {
    using storage_type = ll::TypedStorageImpl<Align, Size, T>;

    template <typename J, typename F>
    static ll::Expected<J> serialize(storage_type const& value, F const& keyFormatter) {
        return ll::reflection::serialize<J>(value.get(), keyFormatter);
    }

    template <typename J, typename F>
    static ll::Expected<storage_type> deserialize(J&& j, F const& keyFormatter) {
        auto value = ll::reflection::deserialize_to<T>(std::forward<J>(j), keyFormatter);
        if (!value) return ll::forwardError(value.error());
        return storage_type{std::move(*value)};
    }
};
```

Test: `SerializedSkinImplSpecializationSupportsTypedStorageFields`.

### 6. One Type, Different Output for JSON and NBT

Branch on `J` with `if constexpr`. The test specializes `CompoundTagVariant`: it writes SNBT text for a JSON target and returns the node itself for an NBT target.

```cpp
template <>
struct ll::reflection::Serializer<CompoundTagVariant> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(CompoundTagVariant const& value, F const&) {
        if constexpr (std::same_as<std::remove_cvref_t<J>, CompoundTagVariant>) {
            return value;
        } else {
            return value.toSnbt(SnbtFormat::Minimize, 0);
        }
    }
};
```

Test: `NbtValueSpecializationCanSerializeDifferentlyForJsonAndNbt`.

### 7. Deserialize Only, Never Serialize (Compatibility)

Wrap the type so that serialization writes an empty object while deserialization keeps working:

```cpp
template <typename T>
struct OnlyDeserialize : T {
    using Base = T;
    using Base::Base;
    OnlyDeserialize() = default;
    explicit OnlyDeserialize(T value) : T(std::move(value)) {}
};
```

Test: `CustomDeserializerCanHideATypeDuringSerialization`.

### 8. Other Cases Worth Reading

| Scenario | Test name |
| --- | --- |
| one type supporting both a string form and a value form | `ValueSerializerAndStringSerializerCanCoexistOnSameType` |
| value specializations for paths / durations / `ordered_json` | `OrderedJsonAndFilesystemPathUseValueSpecializations`, `DurationSpecializationSerializesTheUnderlyingCount` |
| `string_view` only accepts a borrowable lvalue source | `StringViewDeserializationRequiresBorrowableLvalueSource` |
| exact-match behavior of a plain variant, and its failure path | `PlainVariantPrefersExactArithmeticAlternativeMatches`, `PlainVariantReportsCastFailureWhenNoAlternativeMatches` |
| out-of-range and fractional numbers | `NumericDeserializationRejectsOutOfRangeAndFractionalValues` |
| an in-place specialization used by every entry point | `InPlaceDeserializerIsUsedByDeserializeAndDeserializeTo` |

## Custom Target Types

The framework is fully generic over its target type `J`: there is no base class, no trait and no adapter interface — the only contract is that `J` happens to have the members the framework calls when you write `serialize<J>` / `deserialize_to<T>(J)`. Supporting another data structure (a script engine object, `Json::Value`, your own `Value` type) therefore means satisfying this contract.

### The Contract

| Category | Members | Needed when |
| --- | --- | --- |
| Construction | `static J object()`, `static J array()` | any object / array serialization |
| Construction | constructible from `nullptr_t` | serializing an empty `std::optional` (the framework writes `return t ? … : nullptr;`) |
| Construction | scalars and strings constructible directly (see the two-step pitfall below) | serializing arithmetic types, strings, enums |
| Construction | default constructible and assignable | only the in-place specialization branch and `serialize_to` |
| Queries | `is_object` / `is_array` / `is_string` / `is_null` / `is_boolean` / `is_number` / `is_number_float` / `is_number_integer` / `is_number_unsigned`, `type_name()`, `size()` | trim to the branches you actually use |
| Objects | `contains(key)`, `operator[](key)`, `items()` (usable as `for (auto&& [k, v] : …)`) | reading and writing objects |
| Arrays | `operator[](index)`, `push_back(value)` | reading and writing arrays and tuples |
| Scalars | `static_cast`-able to arithmetic types, implicitly convertible to `std::string` and `std::string_view` | reading scalars; the latter is what LL's built-in stringified specializations (`mce::UUID`, `ll::data::Version`, ...) use |
| Variant only | `get<bool>()` / `get<double>()` / `get<int64>()` / `get<uint64>()`, `dump()` | only when `std::variant` appears |
| string_view only | a `using string_t = ...;` member alias plus `template <class T> T const& get_ref() const` (the `BorrowableStringSource` concept) | only when `std::string_view` appears, see Borrowing Strings below |

### Three Hard Constraints

1. **`operator[]` has to hand out the same `J`.** For an ordinary `J` the framework does `return static_cast<J&&>(j[key]);` (see `object_child_at` / `array_child_at`); only `CompoundTagVariant` / `UniqueTagPtr` get a dedicated branch that rewraps the child. A type whose `operator[]` returns a raw handle (`JSValue`, `lua_State*`) therefore cannot be used as `J` directly — wrap it in a node type whose children are nodes of the same type.
2. **An lvalue source needs references, an rvalue source gets copied.** In the same function, an lvalue `J` requires `j[key]` to yield a real reference, while an rvalue goes through `std::remove_cvref_t<J>(j[key])`. An adapter whose `operator[]` returns temporaries can therefore only be passed as an rvalue (`deserialize_to<T>(makeNode())`); otherwise it either fails to compile or dangles.
3. **The write entry points use fixed names**: `(*res)[key] = value` for objects and `res->push_back(value)` for arrays, so `operator[]` must return an assignable reference and `push_back` must exist.

### Three Pitfalls We Hit

- **Do not offer only "constructible from the intermediate type".** The framework writes implicit conversions such as `return t;` (an `int` becoming an `Expected<J>`), and `int → Json::Value → J` is a **two-step user-defined conversion**, which does not exist in an implicit context. Provide direct constructors for scalars and strings (a template constrained on `is_arithmetic_v<T>`, plus `std::string` and `char const*`).
- **An arithmetic conversion operator fights the built-in subscript.** An adapter needs `template <class T> operator T()` to read numbers, and then `node["a"]` is read as "convert the node to `__ptrdiff_t` and use the built-in `operator[](__ptrdiff_t, const char*)`", which is ambiguous with your `operator[](std::string_view)`. Adding `operator[](char const* key)` makes string literals an exact match and resolves it.
- **Do not offer a conversion to the character types.** `std::string{j}` is braced initialization: as soon as the adapter has an implicit conversion to `char`, it takes the `initializer_list<char>` constructor and turns `static_cast<char>(j)` into a one-byte string (which reads back as `\0` — string members silently become garbage, and only an enum member reports `invalid enum value`). Constrain the conversion operator with `std::is_arithmetic_v<T> && !ll::traits::is_char_v<T>`, which is what `CompoundTagVariant` has always done.

### Borrowing Strings (`string_t` + `get_ref`)

When the target type has a `std::string_view` member, the framework needs two things: a `string_t` member alias plus

```cpp
// Returns a reference to the string the implementation owns; its lifetime is the implementation's
// responsibility. The framework only ever calls this with T = string_t const&.
template <class T>
[[nodiscard]] T const& get_ref() const;
```

The framework then **builds whatever type it needs from that reference**, `std::string_view` here. `CompoundTagVariant` (`string_t = std::string`) and `nlohmann::json` both satisfy it.

An adapter whose storage is not a `std::string` can satisfy it too: `Json::Value` only hands out strings by value (`asString()`), so `JsonValueNode` declares `using string_t = std::string;`, caches that text in a `mutable` member and returns a reference to it from `get_ref`.

Two semantics to remember:

- the returned reference / view points at **the string the source owns** (the internal storage for `CompoundTagVariant` and `nlohmann::json`, a cached copy for the `Json::Value` adapter), so that string has to outlive the view;
- the framework **only borrows from an lvalue source**. A temporary (rvalue) node still reports `field cannot be safely deserialized into string_view from a temporary or non-borrowing source` — name the node and pass it in instead.

The reference `get_ref` returns has to point at **storage**: with a `T const&` return type, `return somePointerValue;` binds the reference to a temporary on the stack, which dangles as soon as the function returns.

### Implementation and Tests

`JsonValueNode` in `src-test/server/ReflectionTest.cpp` is that adapter for Bedrock's `Json::Value`, written against this contract. It is also a writable view: copying a node is shallow (both share one `Json::Value`), assigning to a node **writes through** into the underlying `Json::Value`, and element access returns references into a cache of child views — which is what makes the framework's lvalue path work. The tests:

| Test | Coverage |
| --- | --- |
| `JsonValueNodeSerializesAggregatesIntoJsonValue` | aggregate → `Json::Value`: arithmetic types, strings, booleans, an omitted empty optional, enums, `vector`, `map`, nested structs, variants and a custom `Serializer<T>`, plus a round-trip comparison |
| `JsonValueNodeDeserializesFromAConstJsonValue` | deserializing from a read-only `Json::Value`, including a missing optional key becoming `nullopt` |
| `JsonValueNodeReportsPathsRangesAndUnsupportedTargets` | nested error paths, missing required fields, fractional / out-of-range / negative-into-unsigned numbers, a boolean read as a number, a variant that matches nothing (the error carries `dump()`), and an rvalue source reporting the `string_view` lifetime error |
| `JsonValueNodeBorrowsStringViewsFromAnLvalueSource` | borrowing a `std::string_view` member from an lvalue source, asserting that repeated borrows from the same child node yield the same cached text |
| `JsonValueNodeSupportsTheBuiltInStringifiedTypes` | `mce::UUID` and `ll::data::Version` round-tripping through the adapter (their specializations use `std::string_view{j}`) |
| `JsonValueNodeFeedsEveryScalarAccessorOfAVariant` | all four scalar accessors of a variant (`bool` / `int64` / `uint64` / `double`) reading through the adapter |
| `PlainVariantDeserializesFromNbt` | deserializing a `std::variant` from NBT |
| `JsonValueNodeWritesThroughAndSharesItsValue` | write-through semantics, shallow sharing, `push_back`, and the `nullptr` construction used by empty optionals |

Three details are worth copying: keep the child cache behind a pointer (`std::map<Json::Value*, std::unique_ptr<Node>>`) instead of storing `std::deque<Node>` directly, or the self-referential type fails to compile as incomplete — and **deduplicate by slot address** (`Json::Value` heap-allocates its children, so those addresses are stable), otherwise every access stores another view; and declare the copy constructor as a shallow copy and the assignment operator as a write-through, since the asymmetry is deliberate.

### When Not To Do This

- Converting between two JSON representations once (Bedrock's `Json::Value` ↔ `nlohmann::json`): a value conversion specialization is less work — see `Serializer<Json::Value, nlohmann::json>` in the tests.
- The data lives in a script engine: `JSON.stringify` / `JSON.parse` plus `serialize<nlohmann::json>` / `deserialize_to<T>` is usually cheaper than an adapter layer.
- A single C++ type has to be written into a target in a specific shape: that is what `Serializer<T, J>` is for (it only changes how `T` itself becomes `J`; members still go through the built-in branches, so the underlying contract still applies).

## How Variants Match

`std::variant` deserialization runs in two passes:

1. **Exact match**: a boolean only matches a boolean, a float only a float, a signed value only a signed alternative, an unsigned value only an unsigned alternative, and the value has to fit the target type; the first declared candidate wins.
2. **Fallback match**: the alternatives are tried in declaration order by type, with arithmetic alternatives going through the strict numeric conversion (out-of-range and fractional values are reported here too).

When both passes fail, the error carries the input's type name and text, for example `could not cast target object ({"unexpected":true}) to any type in the variant`. For an explicit discriminator, write a specialization as in example 4 above.

## `std::string_view` Lifetime

Deserializing into `std::string_view` only works when the input can be borrowed safely:

- reading from a stable lvalue JSON / NBT object yields a view into its storage;
- reading from a temporary or a non-borrowing backend reports `field cannot be safely deserialized into string_view from a temporary or non-borrowing source`.

That guard exists to prevent dangling views; use `std::string` when the value has to outlive the input.

## `Dispatcher<T, Listener>`

A `Dispatcher` binds a value to a listener. Reflection's contract for it is: **serialization writes only `storage`, and deserialization reads `storage` back and then calls `call()` once**.

```cpp
struct LevelNotifier {
    void call(int const& storage) { /* refresh a view, invalidate a cache, fire an event, ... */ }
};

using LevelDispatcher = ll::reflection::Dispatcher<int, LevelNotifier>;

struct GameOptions {
    LevelDispatcher level{0};   // no call() on construction
    std::string     name{};
};
```

Notes:

- `Listener` has to be default constructible and movable, and provide `call(Storage const&)`;
- `call()` runs when the dispatcher is assigned (`disp = value`) and after deserialization; writing `disp.storage` directly does not trigger it;
- the third template parameter, `CallInit` (default `false`), also calls `call()` on construction when set to `true`;
- it converts back to `Storage`, so it can be used as the underlying value directly;
- the listener may own state, so a `Dispatcher` is movable but not copyable, and a move carries the listener along.

Test: `SerializeAndDeserializeRespectKeyFormatterAndDispatcher`.

## Diagnostics

### Compile-Time Failures

| Message fragment | Meaning | What to do |
| --- | --- | --- |
| `cannot serialize this type: ...` | no serialization path applies | add a `Serializer<T>` specialization, or make the type an aggregate / use supported member types |
| `cannot deserialize this type: ...` | same, deserialization direction | same |
| `an associative container key has to be a string, ...` | the key type cannot be turned into a string | give the key type `to_string` / `from_string`, or use a per-type formatter |
| `the key type has to be a string, ...` | `type_to_string` / `string_to_type` cannot handle that type | same |
| `Boost.PFR: ... Please report this issue ...` | Boost.PFR cannot count the fields of that aggregate (bases, a member with a deleted converting constructor, ...) | write a `Serializer<T>` instead of relying on default reflection |

### Finding the Cause

1. **Check whether the specialization is being ignored**: temporarily add `static_assert(ll::traits::always_false<std::remove_cvref_t<T>>, "");` to it — if the build still succeeds, the framework never selected it.
2. **Narrow it down to one member**: verify with `deserialize_to<MemberType>(json)` / `serialize<J>(member)` directly instead of iterating on the whole struct.
3. **Look at which layer complained**: an invalid enum value or a missing field means a built-in branch matched instead of your specialization; `cannot serialize` means no branch matched at all.
4. **An aggregate hitting a PFR assertion**: that is PFR's own field counting failing; only an explicit specialization gets around it.

## Implementation Notes

- **Numeric conversion is strict**: out-of-range values, fractional values, and negative values written into unsigned targets are reported, identically for the JSON and NBT backends. The range check is implemented inside `ll::reflection` because the MSVC STL rejects the plain character types in `std::in_range`.
- **Failure atomicity**: the value path constructs into a temporary and only then assigns to the target, leaving the target untouched on failure; the in-place path writes field by field, so a mid-way failure can leave a half-written object. Choose the value form when that matters.
- **Variant errors are lazy**: the error containing a full dump is only built once every alternative fails; a matching alternative never pays for serializing the whole subtree.
- **Entry points agree**: both `deserialize_to` and `deserialize` prefer an in-place specialization (`deserialize_to` default-constructs the target first), so an in-place-only type has to be default constructible. If it is not, use the value form.

## Related

- [Reflection (Basics)](reflection.md): first-time usage and the simplest specialization
- [Config](config.md): the config system, the main consumer of reflection
- [Base](base.md): the base utilities reflection builds on (concepts, containers, `Expected`)
