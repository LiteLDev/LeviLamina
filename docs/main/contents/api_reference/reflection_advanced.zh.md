`ll/api/reflection/` · **通用** · 进阶

## 这篇文档给谁看

如果你只是想把普通结构体存成 JSON、或者给一个类型写个"字符串形式"的特化，先看 [反射（基础篇）](reflection.zh.md)。这一篇面向需要：

- 精确控制字段名、必选规则、输出形态的自定义特化；
- 弄清框架到底按什么规则挑特化、为什么"明明写了却没生效"；
- 边写边查：完整签名表、返回值约束、编译期报错对照表。

文中所有复杂示例都来自测试 `src-test/server/ReflectionTest.cpp`，每个示例后面都标了对应的 gtest 用例名，可以直接搜来跑。

## 调度模型与术语

### 优先级标签

框架不靠嵌套 `if constexpr` 排查，而是用「标签继承 + 重载决议」做**编译期优先级派发**：所有候选函数都叫 `serialize_impl` / `deserialize_impl`，区别只在最后一个参数 `meta::PriorityTag<N>`（`PriorityTag<N>` 继承自 `PriorityTag<N-1>`，编号越大越"特化"）。传入 `PriorityTag<11>` 时，重载决议会挑当前类型能满足的最高优先级分支。

| 优先级 | 命中条件（以反序列化方向为例） |
| --- | --- |
| 11 | 算术类型 |
| 10 | 有 `Serializer<T>` 自定义特化（值式或原地式） |
| 9 | `std::optional`、`Dispatcher` |
| 8 | `VectorBase`（向量类型） |
| 7 | 枚举 |
| 6 | `std::variant` |
| 5 | 字符串类型、`std::string_view` |
| 4 | tuple-like（`std::pair` / `std::tuple` / `std::array`） |
| 3 | array-like（`std::vector` / `std::set` …） |
| 2 | associative（`std::map` …） |
| 1 | 可反射聚合体 |
| 0 | 兜底：能转换就转换，否则给出 `cannot deserialize this type` 断言 |

这一切都是**编译期**决定的，和运行时值无关；同一处换个类型，命中的分支就可能完全不同。

### 探测 trait

框架用一组变量模板判断"某种形态的特化到底存不存在"，它们都在 `ll::reflection::detail`：

| trait | 判断的内容 |
| --- | --- |
| `has_value_serializer_v<T, J, F>` | `Serializer<T>`（或 `Serializer<T, J>`）有没有值式 `serialize` |
| `has_inplace_serializer_v<T, J, F>` | 有没有原地式 `serialize(T const&, J&[, F const&])`，返回值必须是 `ll::Expected<>` |
| `has_custom_serializer_v` | 上面两者之一 |
| `has_value_deserializer_v<T, J, F>` | 有没有值式 `deserialize` |
| `has_inplace_deserializer_v<T, J, F>` | 有没有原地式 `deserialize(T&, J const&[, F const&])` |
| `has_custom_key_serializer_v<T, F>` | 有没有 `Serializer<T>::to_string(t[, f])` |
| `has_custom_key_deserializer_v<T, F>` | 有没有 `Serializer<T>::from_string(sv[, f])` |
| `has_typed_key_formatter_v<T, F>` | formatter 有没有 `operator()<T>(value)` 这种按类型定制的重载 |
| `is_key_stringifiable_v<T>` | 能不能当关联容器的键（字符串 / 枚举 / 有 `to_string` + `from_string`） |

一个容易忽略的细节：探测值式特化时用的是**不带返回类型约束**的复合要求 `{ expr };`——这样你就能直接返回 `J` 而不必包 `Expected<J>`，但副作用是 `void` 也算"满足"。所以返回 `void` 的值式特化会被选中，然后在框架内部编译失败。`void` 从来不是合法返回值。

### 三种特化形态

| 形态 | 位置 | 语义 |
| --- | --- | --- |
| 字符串转换 | `to_string` / `from_string` | 只影响关联容器键与 `type_to_string` / `string_to_type`，**不改变对象序列化** |
| 值式 | `serialize` / `deserialize` 返回值 | 整个类型当成一个值 |
| 原地式 | `serialize` / `deserialize` 收 `J&` / `T&` | 逐字段填充，可复用 `field` / `member` 系列 |

### 命中顺序

1. 当前值类型 + 当前目标类型能命中的自定义特化（优先级 10）；
2. 内建逻辑：optional / dispatcher / enum / variant / 容器（优先级 9 ~ 2）；
3. 默认聚合反射（优先级 1）；
4. 兜底转换（优先级 0）。

两个方向的内部次序略有不同，同时实现两种形态时会各自命中：

- **序列化**：优先值式特化，没有值式才看原地式；
- **反序列化**：优先原地式特化，没有才走值式 / 内建逻辑。

## 特化签名与返回值

框架按签名识别特化，**签名不匹配等于特化不存在**。各形态允许的写法：

| 形态 | 签名 | 允许的返回类型 |
| --- | --- | --- |
| 字符串转换 | `static std::string to_string(T const&)` / `static ll::Expected<T> from_string(std::string_view)` | `std::string`（或可转 `std::string_view`）；`ll::Expected<T>` |
| 值式（带 formatter） | `template <typename J, typename F> static ll::Expected<J> serialize(T const&, F const&)` | `J`、可隐式转成 `J` 的类型、`ll::Expected<J>` |
| 值式（不带 formatter） | `template <typename J> static ll::Expected<J> serialize(T const&)` | 同上，但框架不会把 key formatter 传进来 |
| 原地式 | `template <typename J, typename F> static ll::Expected<> serialize(T const&, J& out, F const&)` | 必须是 `ll::Expected<>` |

`deserialize` 与之对称：值式收输入、返回 `T` 或 `ll::Expected<T>`；原地式收 `T&`、返回 `ll::Expected<>`。

### 签名自查清单

1. **和上表逐字符对齐**：多一个 `const`、少一个 `typename F`、参数顺序写反，都会被静默忽略。
2. **聚合体下没有报错**：特化被忽略时会直接走默认聚合反射——编译通过，行为却不是你以为的。
3. **非聚合体才会报错**：这时才会落到 `cannot serialize this type` / `cannot deserialize this type`。
4. **不要返回 `void`**：探测会通过，实现会编译失败或被忽略。
5. **需要"只对某种目标生效"时用 `Serializer<T, J>`**（见下文 NBT / JSON 双形态示例）。

## 键的字符串化

关联容器、枚举、以及显式调用都会用到这一层：

```cpp
template <typename T, typename F>
std::string type_to_string(T const& value, F const& keyFormatter);

template <typename T, typename F>
std::optional<T> string_to_type(std::string_view text, F const& keyFormatter);
```

对应的概念是 `IsLeastStringifiableType`：字符串类、枚举、以及提供 `to_string` + `from_string` 的类型。

### 按类型定制的 key formatter

formatter 除了处理键名（`operator()(std::string_view)`），还可以提供按类型定制的重载 `operator()<T>(value)`；它只影响写出，不影响读入：

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

这样 `std::map<mce::UUID, int>` 会写出大写 UUID 键，而读入仍按普通 UUID 字符串解析。测试：`AssociativeKeysCanCustomizeSerializationStyleWithoutAffectingParsing`。

### formatter 的传播边界

formatter 会传给成员键名和关联键，但**不会漏进值式特化内部**：值式特化不带 formatter 形参时，框架不会把 formatter 传进去，特化里的 `to_string` 也就不受外部风格影响。测试：`MemberHelperDoesNotPropagateOuterKeyFormatterIntoValueSerializer`。

## 成员与字段辅助函数

这类 API 是给 `Serializer<T>` 特化内部用的简写。`member` / `field` 的方向由 json 实参的 const 性决定——**可变左值 = 写出，const 左值 / 右值 = 读入**；在特化之外请直接调用 `serialize` / `deserialize`，或使用方向明确的名字。

| 语义 | 成员指针版 | 固定键名版 |
| --- | --- | --- |
| 缺字段时重置为 `nullopt`（成员是 optional） | `member<&T::m>(t, j, f)` | `field<"m">(t, j, f)` |
| 字段必须存在，即使成员是 optional | `required_member<&T::m>(t, j, f)` | `required_field<"m">(t, j, f)` |
| 缺字段时保留目标对象当前值 | `default_member<&T::m>(t, j, f)` | `default_field<"m">(t, j, f)` |
| 缺字段时写入提供的默认值 | `default_member<&T::m>(t, j, d, f)` | `default_field<"m">(t, j, d, f)` |
| 序列化单个成员 / 字段 | `member_serialize<&T::m>(j, t, f)` | `field_serialize<"m">(j, t, f)` |
| 反序列化单个成员 / 字段 | `member_deserialize<&T::m>(t, j, f)` | `field_deserialize<"m">(t, j, f)` |

补充语义：

- 写出方向：成员是空的 `std::optional<T>` 时不会写出这个键，而不是写 `null`；
- 参数顺序：序列化是"先 json 后值"，反序列化是"先值后 json"，容易写反；
- 成员指针版自动取反射成员名，字段名与成员名不一致时用固定键名版。

## 复杂示例（摘自测试）

### 1. 判别字段决定必选字段

`ItemInfo` 用 `type` 字段决定 `name` / `snbt` 谁必选。只有原地式才能"先读判别字段、再决定后续字段"：

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

测试：`ItemInfoUsesTypeFieldToSelectRequiredFields`、`ItemInfoReportsMissingFieldsRequiredByType`。

### 2. 把多个子对象压平成同一个对象

类型继承 `std::tuple` 并特化 `std::tuple_size` / `std::tuple_element` / `std::get`，就能走 tuple-like 分支；再写值式序列化器把各段的键合并进同一个对象：

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

测试：`FlatReflectionMergesObjectSerializersAndRoundTrips`。

### 3. 不可默认构造的类型

只能写值式：`deserialize` 返回 `T`，由特化自己决定怎么构造。放进容器、`std::optional`、`std::variant` 里同样生效（框架内部走 `deserialize_construct`）：

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

测试：`DeserializeToSupportsNonDefaultConstructibleTypesWithValueDeserializer`、`ContainersSupportNonDefaultConstructibleValuesWithValueDeserializer`。

### 4. 带判别字段的变体

普通 `std::variant` 只能按值形状猜分支。要显式 discriminator，就包一层类型并给它写特化：

```cpp
template <typename Enum, typename Variant>
struct VariantWithEnumIndex : Variant {
    static constexpr std::string_view typeKey = "type";
};

template <typename Enum, typename Variant>
struct ll::reflection::Serializer<VariantWithEnumIndex<Enum, Variant>> {
    // serialize:   写 {"type": <枚举名>, "value": <当前分支>}
    // deserialize: 先读 type，再按枚举索引派发到对应分支
};
```

测试：`VariantWithEnumIndexSerializesAndDeserializesUsingEnumDiscriminator`。

### 5. ABI 包装类型

`ll::TypedStorage<Align, Size, T>` 这类包装不会被默认反射看穿，需要显式放行：

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

测试：`SerializedSkinImplSpecializationSupportsTypedStorageFields`。

### 6. 同一类型对 JSON / NBT 输出不同形态

对 `J` 做 `if constexpr` 判断即可。测试里给 `CompoundTagVariant` 写特化：JSON 目标输出 SNBT 字符串，NBT 目标原样返回节点。

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

测试：`NbtValueSpecializationCanSerializeDifferentlyForJsonAndNbt`。

### 7. 只反序列化、不序列化（向后兼容）

继承包一层，让序列化输出空对象、反序列化照常工作：

```cpp
template <typename T>
struct OnlyDeserialize : T {
    using Base = T;
    using Base::Base;
    OnlyDeserialize() = default;
    explicit OnlyDeserialize(T value) : T(std::move(value)) {}
};
```

测试：`CustomDeserializerCanHideATypeDuringSerialization`。

### 8. 其它值得一看的用例

| 场景 | 测试名 |
| --- | --- |
| 同一类型同时支持字符串形式与值式 | `ValueSerializerAndStringSerializerCanCoexistOnSameType` |
| 路径 / 时长 / `ordered_json` 的值式特化 | `OrderedJsonAndFilesystemPathUseValueSpecializations`、`DurationSpecializationSerializesTheUnderlyingCount` |
| `string_view` 只接受可借用的左值源 | `StringViewDeserializationRequiresBorrowableLvalueSource` |
| 普通 variant 的精确匹配与失败路径 | `PlainVariantPrefersExactArithmeticAlternativeMatches`、`PlainVariantReportsCastFailureWhenNoAlternativeMatches` |
| 数值越界 / 非整数的报错 | `NumericDeserializationRejectsOutOfRangeAndFractionalValues` |
| 原地特化被所有入口使用 | `InPlaceDeserializerIsUsedByDeserializeAndDeserializeTo` |

## 自定义目标类型（把新的数据结构接到反射上）

框架对目标类型 `J` 是完全泛型的：没有基类、没有 trait、也没有适配接口，唯一契约就是——你调 `serialize<J>` / `deserialize_to<T>(J)` 时，`J` 恰好有那些成员函数。所以"支持一种新的数据结构"（脚本引擎对象、`Json::Value`、自己的 `Value` 类型）就等于让那个类型满足下面这份契约。

### 契约

| 分类 | 需要的成员 | 什么时候需要 |
| --- | --- | --- |
| 构造 | `static J object()`、`static J array()` | 只要序列化对象 / 数组 |
| 构造 | 可由 `nullptr_t` 构造 | 序列化空 `std::optional`（框架会 `return t ? … : nullptr;`） |
| 构造 | 标量 / 字符串可直接构造（见下文"两步转换"） | 序列化算术类型、字符串、枚举 |
| 构造 | 可默认构造、可赋值 | 只在原地式特化分支和 `serialize_to` 用 |
| 查询 | `is_object` / `is_array` / `is_string` / `is_null` / `is_boolean` / `is_number` / `is_number_float` / `is_number_integer` / `is_number_unsigned`、`type_name()`、`size()` | 按实际用到的分支裁剪即可 |
| 对象 | `contains(key)`、`operator[](key)`、`items()`（能 `for (auto&& [k, v] : …)`） | 读 / 写对象 |
| 数组 | `operator[](index)`、`push_back(value)` | 读 / 写数组与 tuple |
| 标量 | 能 `static_cast` 成算术类型、能隐式转成 `std::string` 与 `std::string_view` | 读标量；后者是 LL 内置的字符串型特化（`mce::UUID`、`ll::data::Version` 等）会用的写法 |
| variant 专用 | `get<bool>()` / `get<double>()` / `get<int64>()` / `get<uint64>()`、`dump()` | 只有当类型里有 `std::variant` |
| string_view 专用 | 成员别名 `using string_t = ...;` + `template <class T> T const& get_ref() const`（即 `BorrowableStringSource`） | 只有当类型里有 `std::string_view`；见下文"借用字符串" |

### 三条硬约束

1. **`operator[]` 必须交出"同一个 J"**。框架对普通 `J` 直接 `return static_cast<J&&>(j[key]);`（见 `object_child_at` / `array_child_at`），只有 `CompoundTagVariant` / `UniqueTagPtr` 有专门分支把子节点包一层。所以"返回裸句柄"的类型（`JSValue`、`lua_State*` 之类）不能直接当 `J`，要包成"子节点也是自己"的节点类型。
2. **左值来源要求引用，右值来源走拷贝**。同一个函数里，`J` 是左值引用时要求 `j[key]` 给出真实引用；是右值时会 `std::remove_cvref_t<J>(j[key])` 拷贝一份。所以 `operator[]` 返回临时对象的适配类型，只能以右值形式传入（`deserialize_to<T>(makeNode())`），否则要么编译不过、要么悬垂。
3. **写入口的名字是固定的**：写对象是 `(*res)[key] = value`，写数组是 `res->push_back(value)`，因此 `operator[]` 要返回可赋值引用，并且要有 `push_back`。

### 三个实测会踩到的坑

- **不要只提供"从中间类型构造"的构造函数**。框架会写 `return t;` 这种隐式转换（例如序列化一个 `int` 得到 `Expected<J>`），而 `int → Json::Value → J` 属于**两步用户定义转换**，在隐式语境里不成立。要给标量和字符串提供直达构造函数（`is_arithmetic_v<T>` 的模板 + `std::string` + `char const*`）。
- **算术转换运算符会和内置下标运算符打架**。适配类型为了读数值通常带一个 `template <class T> operator T()`，于是 `node["a"]` 会被解释成"把 node 转成 `__ptrdiff_t` 再用内置 `operator[](__ptrdiff_t, const char*)`"，和你的 `operator[](std::string_view)` 形成歧义。补一个 `operator[](char const* key)` 让字符串字面量精确匹配即可消歧义。
- **别给字符类型提供转换**。`std::string{j}` 是花括号初始化：只要适配类型存在到 `char` 的隐式转换，就会走 `initializer_list<char>` 那条构造函数，把 `static_cast<char>(j)` 变成一个 1 字节的字符串（读出来就是 `\0`，字符串成员会静默变成垃圾，枚举成员才会报 `invalid enum value`）。转换运算符的约束要写成 `std::is_arithmetic_v<T> && !ll::traits::is_char_v<T>`——`CompoundTagVariant` 一直就是这么写的。

### 借用字符串（`string_t` + `get_ref`）

目标类型里有 `std::string_view` 成员时，框架需要两样东西：成员别名 `string_t`，以及

```cpp
// 返回指向自己存储里那个字符串的引用；引用有效期由实现者负责。
// 框架只会用 T = string_t const& 这一个类型调用它。
template <class T>
[[nodiscard]] T const& get_ref() const;
```

框架拿到 `string_t const&` 之后**自己构造成需要的类型**（这里是 `std::string_view`）。`CompoundTagVariant`（`string_t = std::string`）和 `nlohmann::json` 都满足。

底层不是 `std::string` 的适配类型也能满足它：`Json::Value` 只能按值交出字符串（`asString()`），于是 `JsonValueNode` 用 `using string_t = std::string;`，把这份文本缓存进一个 `mutable` 成员，再由 `get_ref` 返回它的引用。

两点语义要记住：

- 借出的引用 / 视图指向**源自己拥有的那份字符串**（`CompoundTagVariant`、`nlohmann::json` 是它们的内部存储；`Json::Value` 适配类型是节点缓存的副本），所以那份字符串必须活得比视图久；
- 框架**只在来源是左值时**借用。传临时节点（右值）依然会报 `field cannot be safely deserialized into string_view from a temporary or non-borrowing source`——命名一个 node 再传进去就能用。

`get_ref` 返回的引用必须指向**存储**，不能返回指向临时对象的引用：`T const&` 的返回类型下，`return somePointerValue;` 这种写法绑的是栈上的临时对象，函数一返回就悬空。

### 完整实现与测试

`src-test/server/ReflectionTest.cpp` 里的 `JsonValueNode` 就是照这份契约给 Bedrock 的 `Json::Value` 写的适配类型。它同时是个可写视图：拷贝节点是浅拷贝（共享同一份 `Json::Value`），给节点赋值会**写穿**到底层 `Json::Value`，元素访问返回子节点缓存里的引用——所以框架的左值路径也能走通。配套测试：

| 测试 | 覆盖 |
| --- | --- |
| `JsonValueNodeSerializesAggregatesIntoJsonValue` | 聚合体 → `Json::Value`：算术 / 字符串 / 布尔 / 空 optional 省略键 / 枚举 / `vector` / `map` / 嵌套结构 / variant / 自定义 `Serializer<T>`，并做往返比较 |
| `JsonValueNodeDeserializesFromAConstJsonValue` | 从只读 `Json::Value` 反序列化（含缺 optional 键 → `nullopt`） |
| `JsonValueNodeReportsPathsRangesAndUnsupportedTargets` | 嵌套路径错误、缺必选字段、带小数 / 越界 / 负数进无符号、布尔转数字、variant 无法匹配（错误里带 `dump()`）、`string_view` 的右值来源报生命周期错误 |
| `JsonValueNodeBorrowsStringViewsFromAnLvalueSource` | 左值来源下 `std::string_view` 成员成功借用，并断言同一个子节点重复借出拿到的是同一份缓存文本 |
| `JsonValueNodeSupportsTheBuiltInStringifiedTypes` | `mce::UUID` 与 `ll::data::Version` 经适配类型往返（它们的特化用 `std::string_view{j}`） |
| `JsonValueNodeFeedsEveryScalarAccessorOfAVariant` | variant 的四个标量访问器（`bool` / `int64` / `uint64` / `double`）都经适配类型取值 |
| `PlainVariantDeserializesFromNbt` | `std::variant` 从 NBT 反序列化 |
| `JsonValueNodeWritesThroughAndSharesItsValue` | 写穿语义、浅拷贝共享、`push_back`、空 optional 走的 `nullptr` 构造 |

自己实现时有三个细节值得照抄：子节点缓存要用**指针间接**（`std::map<Json::Value*, std::unique_ptr<Node>>`）而不是直接放 `std::deque<Node>`，否则类自引用会因为类型不完整而编译失败，并且**要按槽位地址去重**（`Json::Value` 的子节点是堆分配的，地址稳定），不然每访问一次就多存一份视图；拷贝构造显式写成浅拷贝、赋值运算符显式写成写穿（两者语义刻意不同）。

### 什么时候别这么做

- 只想在两个 JSON 表示之间转一次（例如 Bedrock 的 `Json::Value` ↔ `nlohmann::json`）：写值式互转特化更省事，测试里的 `Serializer<Json::Value, nlohmann::json>` 就是现成例子。
- 数据源是脚本引擎对象：`JSON.stringify` / `JSON.parse` 配 `serialize<nlohmann::json>` / `deserialize_to<T>` 通常比包一层适配便宜得多。
- 只想让某个 C++ 类型按特定形状写进某个目标：那是 `Serializer<T, J>` 的活（它只改变 `T` 自己怎么变成 `J`，成员仍然走内建分支，所以底层协议依旧要满足）。

## 变体的匹配规则

`std::variant` 的反序列化分两遍：

1. **精确匹配**：布尔只接受布尔，浮点只接受浮点，有符号只接受有符号整数，无符号只接受无符号整数，且值必须能放进目标类型；多个候选都精确匹配时取声明顺序靠前的。
2. **回退匹配**：按声明顺序逐个尝试各分支的类型，此时算术分支走严格的数值转换（越界、带小数同样报错）。

两遍都失败时，错误里会带上输入类型名和文本，例如 `could not cast target object ({"unexpected":true}) to any type in the variant`。需要显式判别字段请按示例 4 自己写特化。

## `std::string_view` 生命周期

反序列化到 `std::string_view` 只在输入可安全借用时成立：

- 从稳定的左值 JSON / NBT 对象读取，视图指向其内部存储；
- 从临时对象或非借用型后端读取，返回 `field cannot be safely deserialized into string_view from a temporary or non-borrowing source`。

这是为了避免悬垂视图；需要长期持有就改用 `std::string`。

## `Dispatcher<T, Listener>`

`Dispatcher` 把一份数据和它的监听者绑在一起。反射对它的约定是：**序列化只写 `storage`，反序列化读回 `storage` 之后再调用一次 `call()`**。

```cpp
struct LevelNotifier {
    void call(int const& storage) { /* 更新界面、重算缓存、发事件…… */ }
};

using LevelDispatcher = ll::reflection::Dispatcher<int, LevelNotifier>;

struct GameOptions {
    LevelDispatcher level{0};   // 构造时不会调用 call()
    std::string     name{};
};
```

要点：

- `Listener` 必须可默认构造、可移动，并提供 `call(Storage const&)`；
- 只有通过 `Dispatcher` 赋值（`disp = value`）或反序列化才会调用 `call()`，直接改 `disp.storage` 不会触发；
- 第三个模板参数 `CallInit`（默认 `false`）为 `true` 时，构造也会调用一次；
- 可隐式转换回 `Storage`，能直接当底层值使用；
- 监听者可能持有状态，因此只可移动、不可拷贝，移动时连同监听者一起搬走。

测试：`SerializeAndDeserializeRespectKeyFormatterAndDispatcher`。

## 诊断与自查

### 编译期报错对照表

| 报错信息（片段） | 含义 | 怎么办 |
| --- | --- | --- |
| `cannot serialize this type: ...` | 没有任何可用的序列化路径 | 写 `Serializer<T>` 特化；或把类型改成聚合体、改用受支持的成员类型 |
| `cannot deserialize this type: ...` | 同上，反序列化方向 | 同上 |
| `an associative container key has to be a string, ...` | 关联容器键类型不能转成字符串 | 给键类型补 `to_string` / `from_string`，或用按类型定制的 formatter |
| `the key type has to be a string, ...` | `type_to_string` / `string_to_type` 拿到的类型不支持 | 同上 |
| `Boost.PFR: ... Please report this issue ...` | Boost.PFR 数不清该聚合体的字段（带基类、成员的转换构造函数被删除等） | 给该类型写 `Serializer<T>`，不要指望默认反射 |

### 定位手法

1. **先确认是不是"被静默忽略"**：临时在特化里加一句 `static_assert(ll::traits::always_false<std::remove_cvref_t<T>>, "");`，如果编译仍然通过，说明框架根本没选中它。
2. **缩小到单个成员**：直接用 `deserialize_to<MemberType>(json)` / `serialize<J>(member)` 单独验证，比在大结构体里试错快得多。
3. **看报的是哪一层**：报枚举值非法、缺字段之类，说明命中的是内建分支而不是你的特化；报 `cannot serialize` 说明所有分支都没命中。
4. **聚合体却报 PFR 断言**：那是 PFR 自己的字段计数失败，只能显式写特化绕开。

## 实现注记

- **数值转换是严格的**：越界、带小数、负值写入无符号类型都会报错，JSON 与 NBT 行为一致；范围检查在 `ll::reflection` 内部实现（MSVC STL 的 `std::in_range` 不接受 `char` 系列类型）。
- **失败原子性**：值式路径先在临时对象里构造、成功后才写回目标，失败时目标保持不变；原地式路径逐个字段写入，中途失败会留下"半写"状态。需要强一致就选值式。
- **变体错误的构造是懒的**：只有所有分支都失败时才生成带完整 dump 的错误，命中分支不必为此序列化整棵子树。
- **入口一致性**：`deserialize_to` 与 `deserialize` 都会优先使用原地式特化（`deserialize_to` 会先把目标默认构造出来），所以"只写原地式"的类型必须可默认构造；不可默认构造就写值式。

## 相关文档

- [反射（基础篇）](reflection.zh.md)：第一次使用的用法与最简单的特化
- [Config](config.zh.md)：配置系统，反射最主要的消费者
- [Base](base.zh.md)：反射依赖的基础类型工具（概念、容器、`Expected`）
