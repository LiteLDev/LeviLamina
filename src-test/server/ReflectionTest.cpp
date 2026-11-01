#include "ll/api/base/Concepts.h"
#include "ll/api/data/Version.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/reflection/Dispatcher.h"
#include "ll/api/reflection/Serialization.h"
#include "ll/api/utils/Base64Utils.h"
#include "ll/api/utils/StringUtils.h"
#include "mc/deps/core/container/Blob.h"
#include "mc/deps/core/image/Image.h"
#include "mc/deps/core_graphics/helpers/TintMapColor.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/json/ValueConstIterator.h"
#include "mc/deps/json/ValueIterator.h"
#include "mc/deps/nbt/CompoundTagVariant.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/AnimatedImageData.h"
#include "mc/world/actor/player/SerializedPersonaPieceHandle.h"
#include "mc/world/actor/player/SerializedSkinImpl.h"
#include "mc/world/actor/player/SerializedSkinRef.h"
#include "nlohmann/json.hpp"
#include "gtest/gtest.h"
#include <algorithm>
#include <cctype>
#include <chrono>
#include <cstdint>
#include <filesystem>
#include <format>
#include <map>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>
#include <variant>
#include <vector>

#define LL_REFLECTION_TEST_TRY(EXPR)                                                                                   \
    do {                                                                                                               \
        if (auto _ll_reflection_test_result = (EXPR); !_ll_reflection_test_result) {                                   \
            return ll::forwardError(_ll_reflection_test_result.error());                                               \
        }                                                                                                              \
    } while (false)

AnimatedImageData::AnimatedImageData()                                                                     = default;
SerializedPersonaPieceHandle::SerializedPersonaPieceHandle()                                               = default;
SemVersion::SemVersion()                                                                                   = default;
Bedrock::StaticOptimizedString::StaticOptimizedString()                                                    = default;
SerializedPersonaPieceHandle& SerializedPersonaPieceHandle::operator=(SerializedPersonaPieceHandle const&) = default;
MinEngineVersion::MinEngineVersion()                                                                       = default;

namespace {

std::string uppercaseAsciiKey(std::string_view key) {
    std::string result{key};
    std::transform(result.begin(), result.end(), result.begin(), [](unsigned char ch) {
        return static_cast<char>(std::toupper(ch));
    });
    return result;
}

void expectErrorMessageContains(ll::Error const& error, std::string_view needle) {
    auto const message = error.message();
    EXPECT_NE(message.find(needle), std::string::npos) << message;
}

std::string camelToSnakeWithoutM(std::string_view input) {
    if (input.empty()) return std::string{input};

    std::string_view sv = input;
    if (sv.front() == 'm') sv.remove_prefix(1);

    std::string result;
    result.reserve(sv.size() * 2);

    for (size_t i = 0; i < sv.size(); ++i) {
        int8 c = sv[i];
        if (std::isupper(static_cast<uint8>(c))) {
            if (i != 0) {
                result += '_';
            }
            result += static_cast<int8>(std::tolower(static_cast<uint8>(c)));
        } else {
            result += c;
        }
    }
    return result;
}

struct SnakeCaseKeyAndEnumFormatter {
    std::string operator()(std::string_view key) const { return camelToSnakeWithoutM(key); }

    template <typename Enum>
        requires std::is_enum_v<Enum>
    std::string operator()(Enum value) const {
        return camelToSnakeWithoutM(magic_enum::enum_name(value));
    }
};

} // namespace

struct DispatchListener {
    inline static int calls     = 0;
    inline static int lastValue = 0;

    void call(int const& storage) {
        ++calls;
        lastValue = storage;
    }
};

using IntDispatcher = ll::reflection::Dispatcher<int, DispatchListener>;

void resetDispatchListenerState() {
    DispatchListener::calls     = 0;
    DispatchListener::lastValue = 0;
}

struct UppercaseUuidKeyFormatter {
    std::string operator()(std::string_view key) const { return uppercaseAsciiKey(key); }

    template <typename T>
        requires std::same_as<T, mce::UUID>
    std::string operator()(T const& value) const {
        return uppercaseAsciiKey(value.asString());
    }
};

struct NestedValue {
    int                        number = 0;
    std::optional<std::string> note;
};

struct ReflectionCase {
    NestedValue                                 nested;
    std::vector<std::variant<int, std::string>> values;
    std::map<std::string, int>                  named;
    IntDispatcher                               dispatched{0};
    std::optional<int>                          maybe;
};

struct CollectionRoot {
    std::vector<NestedValue> values;
};

struct KeyedRoot {
    std::map<bool, NestedValue> keyed;
};

struct UuidKeyedRoot {
    std::map<mce::UUID, int> keyed;
};

struct MemberOps {
    int                plain = 0;
    std::optional<int> maybe;
};

struct TestVersion {
    int mMajor = 0;
    int mMinor = 0;
    int mPatch = 0;

    auto operator<=>(TestVersion const&) const = default;
};

struct VersionHolder {
    TestVersion                version;
    std::map<TestVersion, int> byVersion;
};

struct StringViewRoot {
    std::string_view text;
};

using PlainVariant = std::variant<int, std::string, NestedValue, TestVersion>;

struct PlainVariantRoot {
    PlainVariant              value;
    std::vector<PlainVariant> values;
};

using ArithmeticVariant = std::variant<bool, int64, uint64, double>;

enum class ItemInfoType {
    Name,
    Snbt,
};

struct ItemInfo {
    ItemInfoType               type = ItemInfoType::Name;
    std::optional<std::string> name;
    std::optional<int>         aux;
    std::optional<std::string> snbt;

    auto operator<=>(ItemInfo const&) const = default;
};

struct NonDefaultConstructibleItem {
    int         id;
    std::string name;

    NonDefaultConstructibleItem() = delete;
    NonDefaultConstructibleItem(int id, std::string name) : id(id), name(std::move(name)) {}

    auto operator<=>(NonDefaultConstructibleItem const&) const = default;
};

// 刻意不是聚合体，而且文档里这个成员叫 "name"：默认反射产不出下面断言的值，只有走原地式特化
// 才可能通过。入口要是选错了特化，这里会直接编译不过。
struct InPlaceItem {
    int         id = 0;
    std::string label;
    bool        touched = false;

    InPlaceItem() = default;
};
static_assert(!std::is_aggregate_v<InPlaceItem>);

// 把 Bedrock 的 Json::Value 接到反射协议上的节点适配类型：框架对目标类型 J 完全泛型，想让别的
// 数据结构也能用，就要提供它真正调用的那些成员。这个类型同时是个可写视图——拷贝节点是浅拷贝
// （共享同一份 Json::Value），赋值会写穿到底层值，元素访问返回子节点缓存里的引用；每个子槽位
// 只缓存一份，反复遍历不会越攒越多。
class JsonValueNode {
public:
    JsonValueNode() : mValue(std::make_shared<::Json::Value>()) {}
    JsonValueNode(std::nullptr_t) : JsonValueNode() {}
    JsonValueNode(::Json::Value value) : mValue(std::make_shared<::Json::Value>(std::move(value))) {}
    JsonValueNode(JsonValueNode const& other) : mValue(other.mValue) {}
    JsonValueNode(JsonValueNode&& other) noexcept : mValue(std::move(other.mValue)) {}

    template <class T>
        requires(std::is_arithmetic_v<T>)
    JsonValueNode(T value) : JsonValueNode{::Json::Value{value}} {}
    JsonValueNode(std::string value) : JsonValueNode{::Json::Value{std::move(value)}} {}
    JsonValueNode(char const* value) : JsonValueNode{::Json::Value{value}} {}

    [[nodiscard]] static JsonValueNode object() { return JsonValueNode{::Json::Value{::Json::ValueType::ObjectValue}}; }
    [[nodiscard]] static JsonValueNode array() { return JsonValueNode{::Json::Value{::Json::ValueType::ArrayValue}}; }

    [[nodiscard]] ::Json::Value const& value() const { return *mValue; }
    [[nodiscard]] ::Json::Value&       value() { return *mValue; }

    [[nodiscard]] bool is_null() const { return mValue->isNull(); }
    [[nodiscard]] bool is_object() const { return mValue->isObject(); }
    [[nodiscard]] bool is_array() const { return mValue->isArray(); }
    [[nodiscard]] bool is_string() const { return mValue->isString(); }
    [[nodiscard]] bool is_boolean() const { return mValue->isBool(); }
    [[nodiscard]] bool is_number() const { return mValue->isNumeric(); }
    [[nodiscard]] bool is_number_float() const { return mValue->type() == ::Json::ValueType::RealValue; }
    [[nodiscard]] bool is_number_integer() const {
        auto const type = mValue->type();
        return type == ::Json::ValueType::IntValue || type == ::Json::ValueType::UintValue;
    }
    [[nodiscard]] bool is_number_unsigned() const { return mValue->type() == ::Json::ValueType::UintValue; }

    [[nodiscard]] std::size_t size() const { return mValue->size(); }

    [[nodiscard]] std::string_view type_name() const {
        switch (mValue->type()) {
        case ::Json::ValueType::NullValue:
            return "null";
        case ::Json::ValueType::ObjectValue:
            return "object";
        case ::Json::ValueType::ArrayValue:
            return "array";
        case ::Json::ValueType::StringValue:
            return "string";
        case ::Json::ValueType::BooleanValue:
            return "boolean";
        default:
            return "number";
        }
    }

    [[nodiscard]] std::string dump() const { return mValue->toStyledString(); }

    // 借出字符串：Json::Value 只能按值交出字符串，所以节点缓存一份，get_ref 返回它的引用，
    // 调用方再自己构造需要的类型（这里是 std::string_view）。文本随本节点存活。
    using string_t = std::string;

    template <class T>
        requires(std::same_as<T, string_t const&>)
    [[nodiscard]] T const& get_ref() const {
        mBorrowed = mValue->asString("");
        return mBorrowed;
    }

    [[nodiscard]] bool contains(std::string_view key) const { return mValue->isMember(std::string{key}); }

    JsonValueNode& operator[](std::string_view key) const {
        if (auto found = mKeyChildren.find(key); found != mKeyChildren.end()) {
            return *found->second;
        }
        auto           owned = std::string{key};
        ::Json::Value& slot  = (*mValue)[owned];
        auto           node  = std::unique_ptr<JsonValueNode>{
            new JsonValueNode{std::shared_ptr<::Json::Value>{mValue, std::addressof(slot)}}
        };
        return *mKeyChildren.emplace(std::move(owned), std::move(node)).first->second;
    }

    JsonValueNode& operator[](char const* key) const { return (*this)[std::string_view{key}]; }

    template <std::integral I>
    JsonValueNode& operator[](I index) const {
        auto const position = static_cast<std::size_t>(index);
        if (position >= mIndexChildren.size()) {
            mIndexChildren.resize(position + 1);
        }
        auto& node = mIndexChildren[position];
        if (!node) {
            ::Json::Value& slot = (*mValue)[static_cast<::Json::Value::ArrayIndex>(position)];
            node                = std::unique_ptr<JsonValueNode>{
                new JsonValueNode{std::shared_ptr<::Json::Value>{mValue, std::addressof(slot)}}
            };
        }
        return *node;
    }

    void push_back(JsonValueNode const& value) { mValue->append(*value.mValue); }
    void push_back(JsonValueNode&& value) { mValue->append(std::move(*value.mValue)); }

    [[nodiscard]] std::vector<std::pair<std::string, JsonValueNode>> items() const {
        std::vector<std::pair<std::string, JsonValueNode>> result;
        for (auto const& name : mValue->getMemberNames()) {
            result.emplace_back(name, (*this)[name]);
        }
        return result;
    }

    // 不要给字符类型提供转换：std::string{j} 是花括号初始化，一旦存在到 char 的隐式转换，
    // 它会走 initializer_list<char> 那条构造函数，造出一个 1 字节的字符串。
    template <class T>
        requires(std::is_arithmetic_v<T> && !ll::traits::is_char_v<T>)
    operator T() const {
        if constexpr (std::same_as<T, bool>) {
            return mValue->asBool(false);
        } else if constexpr (std::is_floating_point_v<T>) {
            return static_cast<T>(mValue->asDouble(0.0));
        } else if (mValue->type() == ::Json::ValueType::UintValue) {
            return static_cast<T>(mValue->asUInt64(0));
        } else {
            return static_cast<T>(mValue->asInt64(0));
        }
    }

    template <class T>
    [[nodiscard]] T get() const {
        return static_cast<T>(*this);
    }

    operator std::string() const { return mValue->asString({}); }

    [[nodiscard]] operator std::string_view() const { return get_ref<std::string const&>(); }

    JsonValueNode& operator=(JsonValueNode const& other) {
        *mValue = *other.mValue;
        return *this;
    }
    JsonValueNode& operator=(JsonValueNode&& other) {
        *mValue = std::move(*other.mValue);
        return *this;
    }

private:
    explicit JsonValueNode(std::shared_ptr<::Json::Value> value) : mValue(std::move(value)) {}

    std::shared_ptr<::Json::Value>                                             mValue;
    mutable std::map<std::string, std::unique_ptr<JsonValueNode>, std::less<>> mKeyChildren{};
    mutable std::vector<std::unique_ptr<JsonValueNode>>                        mIndexChildren{};
    mutable std::string                                                        mBorrowed{};
};

static_assert(ll::concepts::BorrowableStringSource<JsonValueNode>);
static_assert(ll::concepts::BorrowableStringSource<CompoundTagVariant>);
static_assert(ll::concepts::BorrowableStringSource<nlohmann::json>);

enum class NodeKind : uint8 { Basic, Advanced };

struct NodeChild {
    int         id = 0;
    std::string label;

    auto operator<=>(NodeChild const&) const = default;
};

struct NodeAggregate {
    std::string                    name{};
    int                            count{};
    double                         ratio{};
    bool                           enabled{};
    std::optional<std::string>     note{};
    NodeKind                       kind{NodeKind::Basic};
    std::vector<int>               values{};
    std::map<std::string, int>     named{};
    NodeChild                      child{};
    std::variant<int, std::string> either{};
    TestVersion                    version{};

    auto operator<=>(NodeAggregate const&) const = default;
};

struct NodeRangeTarget {
    int8  small{};
    uint8 positive{};
};

struct NodeStringViewTarget {
    std::string_view text;
};

// 两个 LL 内置的"字符串型"类型：它们的 Serializer 写的是 std::string_view{j}
struct NodeStringyTypes {
    mce::UUID         uuid{};
    ll::data::Version version{};
};

struct NonDefaultContainerRoot {
    std::optional<NonDefaultConstructibleItem>         maybe;
    std::vector<NonDefaultConstructibleItem>           items;
    std::map<std::string, NonDefaultConstructibleItem> named;
    std::variant<int, NonDefaultConstructibleItem>     value = 0;
};

// tuple-like 包装：可以把几个对象序列化器的结果合并成同一个扁平对象。
template <typename... Types>
struct FlatReflection : std::tuple<Types...> {
    using Base = std::tuple<Types...>;
    using Base::Base;

    constexpr FlatReflection() = default;
    constexpr FlatReflection(Types... values) : Base(std::move(values)...) {}
};

namespace std {
template <typename... Types>
struct tuple_size<FlatReflection<Types...>> : tuple_size<tuple<Types...>> {};

template <size_t Index, typename... Types>
struct tuple_element<Index, FlatReflection<Types...>> : tuple_element<Index, tuple<Types...>> {};

template <size_t Index, typename... Types>
constexpr decltype(auto) get(FlatReflection<Types...>& value) noexcept {
    return get<Index>(static_cast<tuple<Types...>&>(value));
}

template <size_t Index, typename... Types>
constexpr decltype(auto) get(FlatReflection<Types...> const& value) noexcept {
    return get<Index>(static_cast<tuple<Types...> const&>(value));
}

template <size_t Index, typename... Types>
constexpr decltype(auto) get(FlatReflection<Types...>&& value) noexcept {
    return get<Index>(static_cast<tuple<Types...>&&>(value));
}

template <size_t Index, typename... Types>
constexpr decltype(auto) get(FlatReflection<Types...> const&& value) noexcept {
    return get<Index>(static_cast<tuple<Types...> const&&>(value));
}
} // namespace std

struct FlatSection {
    int         limit = 0;
    std::string label;
};

struct FlatFlags {
    bool enabled = false;
};

using FlattenedConfig = FlatReflection<FlatSection, FlatFlags>;

template <typename T>
struct OnlyDeserialize : T {
    using Base = T;
    using Base::Base;

    OnlyDeserialize() = default;
    explicit OnlyDeserialize(T value) : T(std::move(value)) {}
};

using ReadOnlyFlatSection = OnlyDeserialize<FlatSection>;

// TypedStorage 是 ABI 包装，所以由使用者显式开启透明反射。
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

template <>
struct ll::reflection::Serializer<CompoundTagVariant> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(CompoundTagVariant const& value, F const&) {
        if constexpr (std::same_as<std::remove_cvref_t<J>, CompoundTagVariant>) {
            return value;
        } else {
            return J(value.toSnbt(SnbtFormat::Minimize, 0));
        }
    }
};

template <typename Enum, typename Variant>
    requires std::is_enum_v<Enum> && ll::concepts::IsVariant<std::remove_cvref_t<Variant>>
struct VariantWithEnumIndex : Variant {
    using enum_type    = Enum;
    using variant_type = Variant;

    static_assert(
        magic_enum::enum_count<Enum>() == std::variant_size_v<variant_type>,
        "enum value count must match variant alternative count"
    );
    static_assert(
        std::is_convertible_v<std::underlying_type_t<Enum>, size_t>,
        "enum underlying type must be convertible to size_t"
    );

    using Variant::Variant;

    template <Enum e>
    decltype(auto) get() & {
        return std::get<static_cast<size_t>(e)>(static_cast<variant_type&>(*this));
    }
    template <Enum e>
    decltype(auto) get() const& {
        return std::get<static_cast<size_t>(e)>(static_cast<variant_type const&>(*this));
    }
    template <Enum e>
    decltype(auto) get() && {
        return std::get<static_cast<size_t>(e)>(static_cast<variant_type&&>(*this));
    }
    template <Enum e>
    decltype(auto) get() const&& {
        return std::get<static_cast<size_t>(e)>(static_cast<variant_type const&&>(*this));
    }
    decltype(auto) get(Enum e) & { return std::get<static_cast<size_t>(e)>(static_cast<variant_type&>(*this)); }
    decltype(auto) get(Enum e) const& {
        return std::get<static_cast<size_t>(e)>(static_cast<variant_type const&>(*this));
    }
    decltype(auto) get(Enum e) && { return std::get<static_cast<size_t>(e)>(static_cast<variant_type&&>(*this)); }
    decltype(auto) get(Enum e) const&& {
        return std::get<static_cast<size_t>(e)>(static_cast<variant_type const&&>(*this));
    }
    Enum index() const { return magic_enum::enum_value<Enum>(static_cast<variant_type const*>(this)->index()); }
};

template <typename Enum, typename Variant>
struct ll::reflection::Serializer<VariantWithEnumIndex<Enum, Variant>> {
    using wrapped_type = VariantWithEnumIndex<Enum, Variant>;
    using variant_type = typename wrapped_type::variant_type;

    template <std::size_t I, typename J, typename F>
    static ll::Expected<wrapped_type> deserialize_alternative(J const& j, F const& keyFormatter) {
        using alternative_type = std::variant_alternative_t<I, variant_type>;
        auto value             = ll::reflection::deserialize_to<alternative_type>(j, keyFormatter);
        if (!value) {
            return ll::forwardError(value.error());
        }
        return wrapped_type{std::in_place_index<I>, std::move(*value)};
    }

    template <typename J, typename F, std::size_t... Is>
    static ll::Expected<wrapped_type>
    deserialize_by_index(std::size_t index, J const& j, F const& keyFormatter, std::index_sequence<Is...>) {
        ll::Expected<wrapped_type> result = ll::makeI18nStringError<"invalid variant">();
        bool const                 matched =
            ((index == Is ? (result = deserialize_alternative<Is>(j, keyFormatter), true) : false) || ...);
        if (!matched) {
            return ll::makeI18nStringError<"invalid variant">();
        }
        return result;
    }

    template <typename J, typename F>
    static ll::Expected<J> serialize(wrapped_type const& value, F const& keyFormatter) {
        using ll::reflection::serialize;

        J    result = J::object();
        auto type   = serialize<J>(value.index(), keyFormatter);
        if (!type) {
            return ll::forwardError(type.error());
        }
        result[keyFormatter("mType")] = *type;

        auto payload = std::visit(
            [&keyFormatter](auto const& arg) -> ll::Expected<J> { return serialize<J>(arg, keyFormatter); },
            static_cast<variant_type const&>(value)
        );
        if (!payload) {
            return ll::forwardError(payload.error());
        }
        result[keyFormatter("mValue")] = *payload;

        return result;
    }

    template <typename J, typename F>
    static ll::Expected<wrapped_type> deserialize(J const& j, F const& keyFormatter) {
        if (!j.is_object()) {
            return ll::makeI18nStringError<"invalid variant">();
        }

        auto typeKey  = keyFormatter("mType");
        auto valueKey = keyFormatter("mValue");
        if (!j.contains(typeKey) || !j.contains(valueKey)) {
            return ll::makeI18nStringError<"invalid variant">();
        }

        auto type = ll::reflection::deserialize_to<Enum>(j[typeKey], keyFormatter);
        if (!type) {
            return ll::forwardError(type.error());
        }

        auto const index = static_cast<std::size_t>(static_cast<std::underlying_type_t<Enum>>(*type));
        return deserialize_by_index(
            index,
            j[valueKey],
            keyFormatter,
            std::make_index_sequence<std::variant_size_v<variant_type>>{}
        );
    }
};

enum class VariantEnumTag {
    Integer = 0,
    Version = 1,
};

using EnumIndexedVariant = VariantWithEnumIndex<VariantEnumTag, std::variant<int, TestVersion>>;

enum class PascalCasePermission : uint8 {
    ReadPermission    = 1 << 0,
    WritePermission   = 1 << 1,
    ExecutePermission = 1 << 2,
};

template <>
struct magic_enum::customize::enum_range<PascalCasePermission> {
    static constexpr bool is_flags = true;
};

template <>
struct ll::reflection::Serializer<TestVersion> {
    template <typename J>
    static ll::Expected<J> serialize(TestVersion const& v) {
        using ll::reflection::member;
        auto result = J::object();
        LL_REFLECTION_TEST_TRY(member<&TestVersion::mMajor>(v, result));
        LL_REFLECTION_TEST_TRY(member<&TestVersion::mMinor>(v, result));
        LL_REFLECTION_TEST_TRY(member<&TestVersion::mPatch>(v, result));
        return result;
    }

    template <typename J>
    static ll::Expected<TestVersion> deserialize(J const& j) {
        using ll::reflection::member;
        TestVersion result;
        LL_REFLECTION_TEST_TRY(member<&TestVersion::mMajor>(result, j));
        LL_REFLECTION_TEST_TRY(member<&TestVersion::mMinor>(result, j));
        LL_REFLECTION_TEST_TRY(member<&TestVersion::mPatch>(result, j));
        return result;
    }

    static std::string to_string(TestVersion const& value) {
        return std::to_string(value.mMajor) + "." + std::to_string(value.mMinor) + "." + std::to_string(value.mPatch);
    }

    static ll::Expected<TestVersion> from_string(std::string_view sv) {
        auto p1 = sv.find('.');
        auto p2 = p1 == std::string_view::npos ? std::string_view::npos : sv.find('.', p1 + 1);
        if (p1 == std::string_view::npos || p2 == std::string_view::npos
            || sv.find('.', p2 + 1) != std::string_view::npos) {
            return ll::makeI18nStringError<"invalid version">();
        }

        auto major = ll::string_utils::svtoi(sv.substr(0, p1));
        auto minor = ll::string_utils::svtoi(sv.substr(p1 + 1, p2 - p1 - 1));
        auto patch = ll::string_utils::svtoi(sv.substr(p2 + 1));
        if (major && minor && patch) {
            return TestVersion{*major, *minor, *patch};
        }
        return ll::makeI18nStringError<"invalid version">();
    }
};

template <>
struct ll::reflection::Serializer<mce::Blob> {
    template <typename J>
    static ll::Expected<J> serialize(mce::Blob const& value) {
        return ll::base64_utils::encode(std::string_view{reinterpret_cast<char const*>(value.data()), value.size()});
    }

    template <typename J>
    static ll::Expected<mce::Blob> deserialize(J const& j) {
        if (!j.is_string()) {
            return ll::reflection::makeDeserStringTypeError();
        }

        // 取出 string_t const&，再自己构造需要的类型
        auto const& text    = j.template get_ref<typename std::remove_cvref_t<J>::string_t const&>();
        auto        decoded = ll::base64_utils::decode(std::string_view{text});
        return mce::Blob{reinterpret_cast<uint8 const*>(decoded.data()), decoded.size()};
    }
};

template <>
struct ll::reflection::Serializer<mce::Color> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(mce::Color const& value, F const& keyFormatter) {
        using ll::reflection::member;

        auto result = J::object();
        LL_REFLECTION_TEST_TRY(member<&mce::Color::r>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Color::g>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Color::b>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Color::a>(value, result, keyFormatter));
        return result;
    }

    template <typename J, typename F>
    static ll::Expected<mce::Color> deserialize(J const& j, F const& keyFormatter) {
        using ll::reflection::member;

        mce::Color value{};
        LL_REFLECTION_TEST_TRY(member<&mce::Color::r>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Color::g>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Color::b>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Color::a>(value, j, keyFormatter));
        return value;
    }
};

template <>
struct ll::reflection::Serializer<mce::Image> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(mce::Image const& value, F const& keyFormatter) {
        using ll::reflection::member;

        auto result = J::object();
        LL_REFLECTION_TEST_TRY(member<&mce::Image::imageFormat>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Image::mWidth>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Image::mHeight>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Image::mDepth>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Image::mUsage>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Image::mImageBytes>(value, result, keyFormatter));
        return result;
    }

    template <typename J, typename F>
    static ll::Expected<mce::Image> deserialize(J const& j, F const& keyFormatter) {
        using ll::reflection::member;

        mce::Image value{};
        LL_REFLECTION_TEST_TRY(member<&mce::Image::imageFormat>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Image::mWidth>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Image::mHeight>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Image::mDepth>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Image::mUsage>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&mce::Image::mImageBytes>(value, j, keyFormatter));
        return value;
    }
};

template <>
struct ll::reflection::Serializer<SkinImage> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(SkinImage const& value, F const& keyFormatter) {
        return ll::reflection::serialize<J>(static_cast<mce::Image const&>(value), keyFormatter);
    }

    template <typename J, typename F>
    static ll::Expected<SkinImage> deserialize(J const& j, F const& keyFormatter) {
        SkinImage value{};
        auto      res = ll::reflection::deserialize(static_cast<mce::Image&>(value), j, keyFormatter);
        if (!res) return ll::forwardError(res.error());
        return value;
    }
};

template <>
struct ll::reflection::Serializer<Bedrock::StaticOptimizedString> {
    static std::string to_string(Bedrock::StaticOptimizedString const& value) {
        auto storage = ll::memory::dAccess<uintptr_t>(&value, 0);
        auto data    = reinterpret_cast<char const*>(storage & 0x0000FFFFFFFFFFFFULL);
        auto length =
            storage & 0x00000000000000FFULL ? *reinterpret_cast<size_t const*>(data - 8) : (storage >> 48) & 0x7FULL;
        return std::string{data, length};
    }

    static ll::Expected<Bedrock::StaticOptimizedString> from_string(std::string_view value) {
        Bedrock::StaticOptimizedString result{};
        result._set(value.data(), value.size(), Bedrock::StaticOptimizedString::StorageType::Dynamic);
        return result;
    }

    template <typename J>
    static ll::Expected<J> serialize(Bedrock::StaticOptimizedString const& value) {
        return to_string(value);
    }

    template <typename J>
    static ll::Expected<Bedrock::StaticOptimizedString> deserialize(J const& j) {
        if (!j.is_string()) {
            return ll::reflection::makeDeserStringTypeError();
        }
        auto const& text = j.template get_ref<typename std::remove_cvref_t<J>::string_t const&>();
        return from_string(std::string_view{text});
    }
};

template <>
struct ll::reflection::Serializer<SemVersion> {
    static_assert(ll::reflection::typeNameStem(ll::reflection::getRawName<&SemVersion::mMajor>()) == "mMajor");

    template <typename J, typename F>
    static ll::Expected<J> serialize(SemVersion const& value, F const& keyFormatter) {
        using ll::reflection::member;

        auto result = J::object();
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mMajor>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mMinor>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mPatch>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mValidVersion>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mAnyVersion>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mPreRelease>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mBuildMeta>(value, result, keyFormatter));
        return result;
    }

    template <typename J, typename F>
    static ll::Expected<SemVersion> deserialize(J const& j, F const& keyFormatter) {
        using ll::reflection::member;

        SemVersion value{};
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mMajor>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mMinor>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mPatch>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mValidVersion>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mAnyVersion>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mPreRelease>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SemVersion::mBuildMeta>(value, j, keyFormatter));
        return value;
    }
};

template <>
struct ll::reflection::Serializer<MinEngineVersion> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(MinEngineVersion const& value, F const& keyFormatter) {
        using ll::reflection::member;

        auto result = J::object();
        LL_REFLECTION_TEST_TRY(member<&MinEngineVersion::mSemVersion>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&MinEngineVersion::mCommandVersion>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&MinEngineVersion::mMolangVersion>(value, result, keyFormatter));
        return result;
    }

    template <typename J, typename F>
    static ll::Expected<MinEngineVersion> deserialize(J const& j, F const& keyFormatter) {
        using ll::reflection::member;

        MinEngineVersion value{};
        LL_REFLECTION_TEST_TRY(member<&MinEngineVersion::mSemVersion>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&MinEngineVersion::mCommandVersion>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&MinEngineVersion::mMolangVersion>(value, j, keyFormatter));
        return value;
    }
};

template <>
struct ll::reflection::Serializer<Json::Value, nlohmann::json> {
    static ll::Expected<nlohmann::json> serialize(Json::Value const& value) {
        switch (value.type()) {
        case Json::ValueType::NullValue:
            return nullptr;
        case Json::ValueType::IntValue:
            return value.asInt64();
        case Json::ValueType::UintValue:
            return value.asUInt64();
        case Json::ValueType::RealValue:
            return value.asDouble(0);
        case Json::ValueType::StringValue:
            return value.asString("");
        case Json::ValueType::BooleanValue:
            return value.asBool(false);
        case Json::ValueType::ArrayValue: {
            auto result = nlohmann::json::array();
            for (auto& childJson : value) {
                auto child = serialize(childJson);
                if (!child) return ll::forwardError(child.error());
                result.push_back(*std::move(child));
            }
            return result;
        }
        case Json::ValueType::ObjectValue: {
            auto result = nlohmann::json::object();
            for (auto const& key : value.getMemberNames()) {
                auto child = serialize(value[key]);
                if (!child) return ll::forwardError(child.error());
                result[key] = *std::move(child);
            }
            return result;
        }
        default:
            return ll::makeI18nStringError<"unsupported json value type">();
        }
    }

    static ll::Expected<Json::Value> deserialize(nlohmann::json const& j) {
        switch (j.type()) {
        case nlohmann::json::value_t::null:
            return {};
        case nlohmann::json::value_t::object: {
            auto result = Json::Value{Json::ValueType::ObjectValue};
            for (auto& [key, childJson] : j.items()) {
                auto child = deserialize(childJson);
                if (!child) return ll::forwardError(child.error());
                result[key] = *std::move(child);
            }
            return result;
        }
        case nlohmann::json::value_t::array: {
            auto result = Json::Value{Json::ValueType::ArrayValue};
            for (auto const& childJson : j) {
                auto child = deserialize(childJson);
                if (!child) return ll::forwardError(child.error());
                result.append(*std::move(child));
            }
            return result;
        }
        case nlohmann::json::value_t::string:
            return j.template get<std::string>();
        case nlohmann::json::value_t::boolean:
            return j.template get<bool>();
        case nlohmann::json::value_t::number_unsigned:
            return j.template get<uint64>();
        case nlohmann::json::value_t::number_integer:
            return j.template get<int64>();
        case nlohmann::json::value_t::number_float:
            return j.template get<double>();
        case nlohmann::json::value_t::binary:
            return ll::base64_utils::encode(
                std::string_view{
                    reinterpret_cast<char const*>(j.template get<std::vector<uint8>>().data()),
                    j.template get<std::vector<uint8>>().size()
                }
            );
        default:
            return ll::makeI18nStringError<"unsupported json value type">();
        }
    }
};

template <>
struct ll::reflection::Serializer<AnimatedImageData> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(AnimatedImageData const& value, F const& keyFormatter) {
        using ll::reflection::member;

        auto result = J::object();
        LL_REFLECTION_TEST_TRY(member<&AnimatedImageData::mType>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&AnimatedImageData::mAnimationExpression>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&AnimatedImageData::mImage>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&AnimatedImageData::mFrames>(value, result, keyFormatter));
        return result;
    }

    template <typename J, typename F>
    static ll::Expected<AnimatedImageData> deserialize(J const& j, F const& keyFormatter) {
        using ll::reflection::member;

        AnimatedImageData value{};
        LL_REFLECTION_TEST_TRY(member<&AnimatedImageData::mType>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&AnimatedImageData::mAnimationExpression>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&AnimatedImageData::mImage>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&AnimatedImageData::mFrames>(value, j, keyFormatter));
        return value;
    }
};

template <>
struct ll::reflection::Serializer<SerializedPersonaPieceHandle> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(SerializedPersonaPieceHandle const& value, F const& keyFormatter) {
        using ll::reflection::member;

        auto result = J::object();
        LL_REFLECTION_TEST_TRY(member<&SerializedPersonaPieceHandle::mPieceId>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedPersonaPieceHandle::mPieceType>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedPersonaPieceHandle::mPackId>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedPersonaPieceHandle::mIsDefaultPiece>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedPersonaPieceHandle::mProductId>(value, result, keyFormatter));
        return result;
    }

    template <typename J, typename F>
    static ll::Expected<SerializedPersonaPieceHandle> deserialize(J const& j, F const& keyFormatter) {
        using ll::reflection::member;

        SerializedPersonaPieceHandle value{};
        LL_REFLECTION_TEST_TRY(member<&SerializedPersonaPieceHandle::mPieceId>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedPersonaPieceHandle::mPieceType>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedPersonaPieceHandle::mPackId>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedPersonaPieceHandle::mIsDefaultPiece>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedPersonaPieceHandle::mProductId>(value, j, keyFormatter));
        return value;
    }
};

template <>
struct ll::reflection::Serializer<TintMapColor> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(TintMapColor const& value, F const& keyFormatter) {
        using ll::reflection::member;

        auto result = J::object();
        LL_REFLECTION_TEST_TRY(member<&TintMapColor::colors>(value, result, keyFormatter));
        return result;
    }

    template <typename J, typename F>
    static ll::Expected<TintMapColor> deserialize(J const& j, F const& keyFormatter) {
        TintMapColor value{};
        LL_REFLECTION_TEST_TRY(ll::reflection::member<&TintMapColor::colors>(value, j, keyFormatter));
        return value;
    }
};

template <>
struct ll::reflection::Serializer<SerializedSkinImpl> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(SerializedSkinImpl const& value, F const& keyFormatter) {
        using ll::reflection::member;

        auto result = J::object();
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mId>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mPlayFabId>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mFullId>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mResourcePatch>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mDefaultGeometryName>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mSkinImage>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mCapeImage>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mSkinAnimatedImages>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mGeometryData>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mGeometryDataMinEngineVersion>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mGeometryDataMutable>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mAnimationData>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mCapeId>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mPersonaPieces>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mArmSizeType>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mPieceTintColors>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mSkinColor>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mIsTrustedSkin>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mIsPremium>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mIsPersona>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mIsPersonaCapeOnClassicSkin>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mIsPrimaryUser>(value, result, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mOverridesPlayerAppearance>(value, result, keyFormatter));
        return result;
    }

    template <typename J, typename F>
    static ll::Expected<SerializedSkinImpl> deserialize(J const& j, F const& keyFormatter) {
        using ll::reflection::member;

        SerializedSkinImpl value{};
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mId>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mPlayFabId>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mFullId>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mResourcePatch>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mDefaultGeometryName>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mSkinImage>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mCapeImage>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mSkinAnimatedImages>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mGeometryData>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mGeometryDataMinEngineVersion>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mGeometryDataMutable>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mAnimationData>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mCapeId>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mPersonaPieces>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mArmSizeType>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mPieceTintColors>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mSkinColor>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mIsTrustedSkin>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mIsPremium>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mIsPersona>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mIsPersonaCapeOnClassicSkin>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mIsPrimaryUser>(value, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(member<&SerializedSkinImpl::mOverridesPlayerAppearance>(value, j, keyFormatter));
        return value;
    }
};

template <>
struct ll::reflection::Serializer<ItemInfo> {
    template <typename J, typename F>
    static ll::Expected<J> serialize(ItemInfo const& value, F const& keyFormatter) {
        using ll::reflection::field;

        J result = J::object();
        LL_REFLECTION_TEST_TRY(field<"type">(value.type, result, keyFormatter));

        switch (value.type) {
        case ItemInfoType::Name: {
            if (!value.name.has_value()) {
                return ll::reflection::makeDeserMissingRequiredFieldError(keyFormatter("name"));
            }
            LL_REFLECTION_TEST_TRY(field<"name">(value.name, result, keyFormatter));
            LL_REFLECTION_TEST_TRY(field<"aux">(value.aux, result, keyFormatter));
            break;
        }
        case ItemInfoType::Snbt: {
            if (!value.snbt.has_value()) {
                return ll::reflection::makeDeserMissingRequiredFieldError(keyFormatter("snbt"));
            }
            LL_REFLECTION_TEST_TRY(field<"snbt">(value.snbt, result, keyFormatter));
            break;
        }
        }

        return result;
    }

    template <typename J, typename F>
    static ll::Expected<ItemInfo> deserialize(J const& j, F const& keyFormatter) {
        using ll::reflection::field;
        using ll::reflection::required_field;

        if (!j.is_object()) {
            return ll::reflection::makeDeserObjectTypeError();
        }

        ItemInfo result;
        LL_REFLECTION_TEST_TRY(field<"type">(result.type, j, keyFormatter));

        switch (result.type) {
        case ItemInfoType::Name: {
            LL_REFLECTION_TEST_TRY(required_field<"name">(result.name, j, keyFormatter));
            LL_REFLECTION_TEST_TRY(field<"aux">(result.aux, j, keyFormatter));
            result.snbt.reset();
            break;
        }
        case ItemInfoType::Snbt: {
            LL_REFLECTION_TEST_TRY(required_field<"snbt">(result.snbt, j, keyFormatter));
            result.name.reset();
            result.aux.reset();
            break;
        }
        }

        return result;
    }
};

template <>
struct ll::reflection::Serializer<NonDefaultConstructibleItem> {
    template <typename J, typename F>
    static ll::Expected<NonDefaultConstructibleItem> deserialize(J const& j, F const& keyFormatter) {
        using ll::reflection::required_field;

        if (!j.is_object()) {
            return ll::reflection::makeDeserObjectTypeError();
        }

        int         id   = 0;
        std::string name = {};
        LL_REFLECTION_TEST_TRY(required_field<"id">(id, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(required_field<"name">(name, j, keyFormatter));
        return NonDefaultConstructibleItem{id, std::move(name)};
    }
};

template <>
struct ll::reflection::Serializer<InPlaceItem> {
    template <typename J, typename F>
    static ll::Expected<> serialize(InPlaceItem const& value, J& j, F const& keyFormatter) {
        using ll::reflection::field;
        j = J::object();
        LL_REFLECTION_TEST_TRY(field<"id">(value.id, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(field<"name">(value.label, j, keyFormatter));
        if (value.touched) {
            LL_REFLECTION_TEST_TRY(field<"touched">(value.touched, j, keyFormatter));
        }
        return {};
    }

    template <typename J, typename F>
    static ll::Expected<> deserialize(InPlaceItem& out, J const& j, F const& keyFormatter) {
        using ll::reflection::required_field;
        if (!j.is_object()) return ll::reflection::makeDeserObjectTypeError();
        LL_REFLECTION_TEST_TRY(required_field<"id">(out.id, j, keyFormatter));
        LL_REFLECTION_TEST_TRY(required_field<"name">(out.label, j, keyFormatter));
        out.touched = true;
        return {};
    }
};

template <typename... Types>
struct ll::reflection::Serializer<FlatReflection<Types...>> {
    using Value = FlatReflection<Types...>;

private:
    template <typename J, typename F, size_t... I>
    static ll::Expected<J> serializeElements(Value const& input, F const& keyFormatter, std::index_sequence<I...>) {
        ll::Expected<J> output{J::object()};
        auto            append = [&]<size_t Index>() {
            if (!output) return;
            auto value = ll::reflection::serialize<J>(std::get<Index>(input), keyFormatter);
            if (!value) {
                output = ll::forwardError(value.error());
                return;
            }
            if (!value->is_object()) {
                output = ll::reflection::makeSerObjectTypeError();
                return;
            }
            for (auto const& [key, child] : value->items()) {
                (*output)[key] = child;
            }
        };
        (append.template operator()<I>(), ...);
        return output;
    }

    template <typename J, typename F, size_t Index, typename... Values>
    static ll::Expected<Value> deserializeElements(F const& keyFormatter, J remainder, Values&&... parsed) {
        if constexpr (Index == sizeof...(Types)) {
            return Value{std::forward<Values>(parsed)...};
        } else {
            using Element = std::tuple_element_t<Index, typename Value::Base>;
            auto value    = ll::reflection::deserialize_construct<Element>(remainder, keyFormatter);
            if (!value) return ll::forwardError(value.error());

            auto serialized = ll::reflection::serialize<J>(*value, keyFormatter);
            if (!serialized) return ll::forwardError(serialized.error());
            if (!serialized->is_object()) return ll::reflection::makeDeserObjectTypeError();
            for (auto const& item : serialized->items()) {
                remainder.erase(item.key());
            }

            return deserializeElements<J, F, Index + 1>(
                keyFormatter,
                std::move(remainder),
                std::forward<Values>(parsed)...,
                std::move(*value)
            );
        }
    }

public:
    template <typename J, typename F>
    static ll::Expected<J> serialize(Value const& input, F const& keyFormatter) {
        return serializeElements<J>(input, keyFormatter, std::index_sequence_for<Types...>{});
    }

    template <typename J, typename F>
    static ll::Expected<Value> deserialize(J const& input, F const& keyFormatter) {
        if (!input.is_object()) return ll::reflection::makeDeserObjectTypeError();
        return deserializeElements<J, F, 0>(keyFormatter, input);
    }
};

template <typename T>
struct ll::reflection::Serializer<OnlyDeserialize<T>> {
    using Type = OnlyDeserialize<T>;

    template <typename J>
    static ll::Expected<J> serialize(Type const&) {
        return J::object();
    }

    template <typename J, typename F>
    static ll::Expected<Type> deserialize(J const& input, F const& keyFormatter) {
        auto value = ll::reflection::deserialize_construct<typename Type::Base>(input, keyFormatter);
        if (!value) return ll::forwardError(value.error());
        return Type{std::move(*value)};
    }
};

template <>
struct ll::reflection::Serializer<nlohmann::ordered_json, nlohmann::ordered_json> {
    static ll::Expected<nlohmann::ordered_json> serialize(nlohmann::ordered_json const& value) { return value; }
    static ll::Expected<nlohmann::ordered_json> deserialize(nlohmann::ordered_json const& value) { return value; }
};

template <>
struct ll::reflection::Serializer<std::filesystem::path> {
    using Path = std::filesystem::path;

    template <typename J>
    static ll::Expected<J> serialize(Path const& value) {
        auto result = ll::string_utils::replaceAll(ll::string_utils::wstr2str(value.wstring()), "\\", "/");
        if (value.has_root_name() || value.has_root_directory()) return result;
        if (result.starts_with("./") || result.starts_with("../")) return result;
        if (result == "." || result == "..") return result;
        return "./" + result;
    }

    template <typename J>
    static ll::Expected<Path> deserialize(J const& value) {
        return Path{std::string{value}};
    }
};

template <class R, class P>
struct ll::reflection::Serializer<std::chrono::duration<R, P>> {
    using Duration = std::chrono::duration<R, P>;

    template <typename J>
    static ll::Expected<J> serialize(Duration const& value) {
        return value.count();
    }

    template <typename J>
    static ll::Expected<Duration> deserialize(J const& value) {
        return Duration{static_cast<typename Duration::rep>(value)};
    }
};

TEST(ReflectionTest, SerializeAndDeserializeRespectKeyFormatterAndDispatcher) {
    resetDispatchListenerState();

    ReflectionCase value;
    value.nested.number = 7;
    value.nested.note   = "hello";
    value.values        = {42, std::string{"text"}};
    value.named         = {
        {"alpha", 1},
        { "beta", 2}
    };
    value.dispatched = 9;
    value.maybe      = std::nullopt;
    resetDispatchListenerState();

    auto json = ll::reflection::serialize<nlohmann::json>(value, uppercaseAsciiKey);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    EXPECT_EQ(json->at("NESTED").at("NUMBER"), 7);
    EXPECT_EQ(json->at("NESTED").at("NOTE"), "hello");
    EXPECT_EQ(json->at("VALUES").at(0), 42);
    EXPECT_EQ(json->at("VALUES").at(1), "text");
    EXPECT_EQ(json->at("NAMED").at("alpha"), 1);
    EXPECT_EQ(json->at("DISPATCHED"), 9);
    EXPECT_FALSE(json->contains("MAYBE"));

    ReflectionCase parsed;
    auto           result = ll::reflection::deserialize(parsed, *json, uppercaseAsciiKey);
    ASSERT_TRUE(result.has_value()) << result.error().message();
    EXPECT_EQ(parsed.nested.number, 7);
    ASSERT_TRUE(parsed.nested.note.has_value());
    EXPECT_EQ(*parsed.nested.note, "hello");
    ASSERT_EQ(parsed.values.size(), 2u);
    EXPECT_TRUE(std::holds_alternative<int>(parsed.values[0]));
    EXPECT_EQ(std::get<int>(parsed.values[0]), 42);
    EXPECT_TRUE(std::holds_alternative<std::string>(parsed.values[1]));
    EXPECT_EQ(std::get<std::string>(parsed.values[1]), "text");
    EXPECT_EQ(parsed.named.at("alpha"), 1);
    EXPECT_EQ(parsed.named.at("beta"), 2);
    EXPECT_EQ(parsed.dispatched.storage, 9);
    EXPECT_FALSE(parsed.maybe.has_value());
    EXPECT_EQ(DispatchListener::calls, 1);
    EXPECT_EQ(DispatchListener::lastValue, 9);
}

TEST(ReflectionTest, DeserializeReportsNestedMemberAndIndexErrors) {
    auto json = nlohmann::json::parse(R"({
        "values": [
            {
                "number": "oops"
            }
        ]
    })");

    CollectionRoot value;
    auto           result = ll::reflection::deserialize(value, json);

    ASSERT_FALSE(result.has_value());
    expectErrorMessageContains(result.error(), "Reflection error in field 'values[0].number':");
    expectErrorMessageContains(result.error(), "field must be a number or boolean");
}

TEST(ReflectionTest, DeserializeReportsInvalidAssociativeKeys) {
    auto json = nlohmann::json::parse(R"({
        "keyed": {
            "maybe": {
                "number": 1
            }
        }
    })");

    KeyedRoot value;
    auto      result = ll::reflection::deserialize(value, json);

    ASSERT_FALSE(result.has_value());
    expectErrorMessageContains(result.error(), "Reflection error in field 'keyed[\"maybe\"]':");
    expectErrorMessageContains(result.error(), "invalid key: maybe");
}

TEST(ReflectionTest, MemberHelpersSerializeDeserializeAndHandleOptionalMissingFields) {
    MemberOps value;
    value.plain = 42;

    nlohmann::json json            = nlohmann::json::object();
    auto           serializeResult = ll::reflection::member_serialize<&MemberOps::plain>(json, value);
    ASSERT_TRUE(serializeResult.has_value()) << serializeResult.error().message();
    EXPECT_EQ(json.at("plain"), 42);

    MemberOps parsed;
    parsed.plain = 1;
    parsed.maybe = 7;

    auto deserializePlainResult = ll::reflection::member_deserialize<&MemberOps::plain>(parsed, json);
    ASSERT_TRUE(deserializePlainResult.has_value()) << deserializePlainResult.error().message();
    EXPECT_EQ(parsed.plain, 42);

    auto deserializeOptionalResult = ll::reflection::member_deserialize<&MemberOps::maybe>(parsed, json);
    ASSERT_TRUE(deserializeOptionalResult.has_value()) << deserializeOptionalResult.error().message();
    EXPECT_FALSE(parsed.maybe.has_value());
}

TEST(ReflectionTest, MemberHelpersCanRequireOptionalFieldsAndUseDefaults) {
    auto json = nlohmann::json::parse(R"({
        "plain": 42
    })");

    MemberOps requiredParsed;
    requiredParsed.maybe = 7;
    auto requiredResult  = ll::reflection::required_member<&MemberOps::maybe>(requiredParsed, json);
    ASSERT_FALSE(requiredResult.has_value());
    expectErrorMessageContains(requiredResult.error(), R"(missing required field "maybe" when deserializing)");

    MemberOps defaultedParsed;
    defaultedParsed.plain = 1;
    defaultedParsed.maybe = 2;
    auto existingResult   = ll::reflection::default_member<&MemberOps::plain>(defaultedParsed, json, 99);
    ASSERT_TRUE(existingResult.has_value()) << existingResult.error().message();
    EXPECT_EQ(defaultedParsed.plain, 42);

    auto missingWithDefaultResult =
        ll::reflection::default_member<&MemberOps::maybe>(defaultedParsed, json, std::optional<int>{12});
    ASSERT_TRUE(missingWithDefaultResult.has_value()) << missingWithDefaultResult.error().message();
    ASSERT_TRUE(defaultedParsed.maybe.has_value());
    EXPECT_EQ(*defaultedParsed.maybe, 12);

    MemberOps keepExistingParsed;
    keepExistingParsed.plain = 99;
    keepExistingParsed.maybe = 13;
    auto keepExistingResult  = ll::reflection::default_member<&MemberOps::maybe>(keepExistingParsed, json);
    ASSERT_TRUE(keepExistingResult.has_value()) << keepExistingResult.error().message();
    ASSERT_TRUE(keepExistingParsed.maybe.has_value());
    EXPECT_EQ(*keepExistingParsed.maybe, 13);
}

TEST(ReflectionTest, FixedKeyHelpersSerializeDeserializeAndHandleOptionalMissingFields) {
    nlohmann::json     json  = nlohmann::json::object();
    int                plain = 42;
    std::optional<int> maybe;

    auto serializePlainResult = ll::reflection::field<"plain">(plain, json);
    ASSERT_TRUE(serializePlainResult.has_value()) << serializePlainResult.error().message();
    auto serializeOptionalResult = ll::reflection::field<"maybe">(maybe, json);
    ASSERT_TRUE(serializeOptionalResult.has_value()) << serializeOptionalResult.error().message();
    EXPECT_EQ(json.at("plain"), 42);
    EXPECT_FALSE(json.contains("maybe"));

    int                parsedPlain = 0;
    std::optional<int> parsedMaybe = 7;

    auto deserializePlainResult = ll::reflection::field_deserialize<"plain">(parsedPlain, json);
    ASSERT_TRUE(deserializePlainResult.has_value()) << deserializePlainResult.error().message();
    EXPECT_EQ(parsedPlain, 42);

    auto deserializeOptionalResult = ll::reflection::field_deserialize<"maybe">(parsedMaybe, json);
    ASSERT_TRUE(deserializeOptionalResult.has_value()) << deserializeOptionalResult.error().message();
    EXPECT_FALSE(parsedMaybe.has_value());

    auto missingPlainResult = ll::reflection::field_deserialize<"required">(parsedPlain, json);
    ASSERT_FALSE(missingPlainResult.has_value());
    expectErrorMessageContains(missingPlainResult.error(), R"(missing required field "required" when deserializing)");
}

TEST(ReflectionTest, FixedKeyHelpersCanUseDefaultValueWhenFieldIsMissing) {
    auto json = nlohmann::json::parse(R"({
        "plain": 42
    })");

    int  existingValue  = 0;
    auto existingResult = ll::reflection::default_field<"plain">(existingValue, json, 7);
    ASSERT_TRUE(existingResult.has_value()) << existingResult.error().message();
    EXPECT_EQ(existingValue, 42);

    int  missingValue  = 0;
    auto missingResult = ll::reflection::default_field<"missing">(missingValue, json, 99);
    ASSERT_TRUE(missingResult.has_value()) << missingResult.error().message();
    EXPECT_EQ(missingValue, 99);

    std::optional<int> missingOptional = 1;
    auto missingOptionalResult = ll::reflection::default_field<"maybe">(missingOptional, json, std::optional<int>{12});
    ASSERT_TRUE(missingOptionalResult.has_value()) << missingOptionalResult.error().message();
    ASSERT_TRUE(missingOptional.has_value());
    EXPECT_EQ(*missingOptional, 12);
}

TEST(ReflectionTest, FixedKeyHelpersCanKeepExistingDefaultWhenFieldIsMissing) {
    auto json = nlohmann::json::parse(R"({
        "plain": 42
    })");

    int  existingValue  = 7;
    auto existingResult = ll::reflection::default_field<"plain">(existingValue, json);
    ASSERT_TRUE(existingResult.has_value()) << existingResult.error().message();
    EXPECT_EQ(existingValue, 42);

    int  missingValue  = 99;
    auto missingResult = ll::reflection::default_field<"missing">(missingValue, json);
    ASSERT_TRUE(missingResult.has_value()) << missingResult.error().message();
    EXPECT_EQ(missingValue, 99);

    std::optional<int> missingOptional       = 12;
    auto               missingOptionalResult = ll::reflection::default_field<"maybe">(missingOptional, json);
    ASSERT_TRUE(missingOptionalResult.has_value()) << missingOptionalResult.error().message();
    ASSERT_TRUE(missingOptional.has_value());
    EXPECT_EQ(*missingOptional, 12);
}

TEST(ReflectionTest, ValueSerializerSpecializationSupportsSerializeAndDeserialize) {
    TestVersion value;
    value.mMajor = 1;
    value.mMinor = 20;
    value.mPatch = 5;

    auto json = ll::reflection::serialize<nlohmann::json>(value);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    EXPECT_EQ(json->at("mMajor"), 1);
    EXPECT_EQ(json->at("mMinor"), 20);
    EXPECT_EQ(json->at("mPatch"), 5);

    auto parsed = ll::reflection::deserialize_to<TestVersion>(*json);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->mMajor, 1);
    EXPECT_EQ(parsed->mMinor, 20);
    EXPECT_EQ(parsed->mPatch, 5);
}

TEST(ReflectionTest, FlatReflectionMergesObjectSerializersAndRoundTrips) {
    FlattenedConfig value{
        FlatSection{7, "economy"},
        FlatFlags{true}
    };

    auto json = ll::reflection::serialize<nlohmann::json>(value, uppercaseAsciiKey);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    EXPECT_EQ(json->at("LIMIT"), 7);
    EXPECT_EQ(json->at("LABEL"), "economy");
    EXPECT_EQ(json->at("ENABLED"), true);

    auto parsed = ll::reflection::deserialize_to<FlattenedConfig>(*json, uppercaseAsciiKey);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(std::get<0>(*parsed).limit, 7);
    EXPECT_EQ(std::get<0>(*parsed).label, "economy");
    EXPECT_TRUE(std::get<1>(*parsed).enabled);
}

TEST(ReflectionTest, CustomDeserializerCanHideATypeDuringSerialization) {
    ReadOnlyFlatSection value{
        FlatSection{7, "economy"}
    };

    auto json = ll::reflection::serialize<nlohmann::json>(value);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    EXPECT_TRUE(json->is_object());
    EXPECT_TRUE(json->empty());

    auto parsed = ll::reflection::deserialize_to<ReadOnlyFlatSection>(nlohmann::json{
        {"limit",          9},
        {"label", "restored"}
    });
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->limit, 9);
    EXPECT_EQ(parsed->label, "restored");
}

TEST(ReflectionTest, OrderedJsonAndFilesystemPathUseValueSpecializations) {
    nlohmann::ordered_json ordered       = nlohmann::ordered_json::object({
        { "first", 1},
        {"second", 2}
    });
    auto                   orderedResult = ll::reflection::serialize<nlohmann::ordered_json>(ordered);
    ASSERT_TRUE(orderedResult.has_value()) << orderedResult.error().message();
    EXPECT_EQ(*orderedResult, ordered);

    auto parsedOrdered = ll::reflection::deserialize_to<nlohmann::ordered_json>(*orderedResult);
    ASSERT_TRUE(parsedOrdered.has_value()) << parsedOrdered.error().message();
    EXPECT_EQ(*parsedOrdered, ordered);

    std::filesystem::path const path{"config/economy.json"};
    auto                        pathJson = ll::reflection::serialize<nlohmann::json>(path);
    ASSERT_TRUE(pathJson.has_value()) << pathJson.error().message();
    EXPECT_EQ(*pathJson, "./config/economy.json");

    auto parsedPath = ll::reflection::deserialize_to<std::filesystem::path>(*pathJson);
    ASSERT_TRUE(parsedPath.has_value()) << parsedPath.error().message();
    EXPECT_EQ(parsedPath->generic_string(), "./config/economy.json");
}

TEST(ReflectionTest, DurationSpecializationSerializesTheUnderlyingCount) {
    auto json = ll::reflection::serialize<nlohmann::json>(std::chrono::milliseconds{1250});
    ASSERT_TRUE(json.has_value()) << json.error().message();
    EXPECT_EQ(*json, 1250);

    auto parsed = ll::reflection::deserialize_to<std::chrono::milliseconds>(*json);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->count(), 1250);
}

TEST(ReflectionTest, SerializedSkinImplSpecializationSupportsTypedStorageFields) {
    SerializedSkinImpl value;
    value.mId                  = std::string{"skin-id"};
    value.mPlayFabId           = std::string{"playfab-id"};
    value.mFullId              = std::string{"full-id"};
    value.mResourcePatch       = std::string{"resource-patch"};
    value.mDefaultGeometryName = std::string{"geometry.default"};
    value.mAnimationData       = std::string{"animation-data"};
    value.mCapeId              = std::string{"cape-id"};

    uint8 skinBytes[]{1, 2, 3, 4};
    value.mSkinImage->setImageDescription(1, 1, mce::ImageFormat::RGBA8Unorm, mce::ImageUsage::SRGB);
    value.mSkinImage->mImageBytes = mce::Blob{skinBytes, std::size(skinBytes)};
    value.mCapeImage->setImageDescription(2, 1, mce::ImageFormat::RG8Unorm, mce::ImageUsage::Data);
    value.mSkinAnimatedImages->emplace_back(
        persona::AnimatedTextureType::Face,
        persona::AnimationExpression::Blinking,
        static_cast<mce::Image const&>(value.mSkinImage.get()),
        2.0f
    );

    value.mGeometryData.get()["format_version"] = "1.12.0";
    value.mGeometryData.get()["geometry"]       = Json::Value{Json::ValueType::ArrayValue};
    value.mGeometryData.get()["geometry"].append(Json::Value{"player"});
    value.mGeometryDataMutable.get()["mutable"] = true;
    value.mGeometryDataMinEngineVersion         = MinEngineVersion::fromString("1.20.0-beta+build.1");

    auto const packId = mce::UUID::fromString("01234567-89ab-cdef-0123-456789abcdef");
    value.mPersonaPieces
        ->emplace_back("hair-piece", SharedTypes::persona::PieceType::Hair, packId, false, "product-id");
    value.mArmSizeType = SharedTypes::persona::ArmSizeType::Wide;
    value.mPieceTintColors->emplace(SharedTypes::persona::PieceType::Hair, TintMapColor{});
    value.mSkinColor                  = mce::Color{0.1, 0.2, 0.3, 0.4};
    value.mIsTrustedSkin              = TrustedSkinFlag::True;
    value.mIsPremium                  = true;
    value.mIsPersona                  = true;
    value.mIsPersonaCapeOnClassicSkin = false;
    value.mIsPrimaryUser              = true;
    value.mOverridesPlayerAppearance  = true;

    auto json = ll::reflection::serialize<nlohmann::json>(value, camelToSnakeWithoutM);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    EXPECT_EQ(json->at("id"), "skin-id");
    EXPECT_EQ(json->at("play_fab_id"), "playfab-id");
    EXPECT_EQ(json->at("full_id"), "full-id");
    EXPECT_EQ(json->at("resource_patch"), "resource-patch");
    EXPECT_EQ(json->at("default_geometry_name"), "geometry.default");
    EXPECT_EQ(json->at("animation_data"), "animation-data");
    EXPECT_EQ(json->at("cape_id"), "cape-id");
    EXPECT_EQ(json->at("is_premium"), true);
    EXPECT_EQ(json->at("is_trusted_skin"), "True");
    EXPECT_EQ(json->at("arm_size_type"), "Wide");

    auto const& skinImage = json->at("skin_image");
    EXPECT_EQ(skinImage.at("image_format"), "RGBA8Unorm");
    EXPECT_EQ(skinImage.at("width"), 1);
    EXPECT_EQ(skinImage.at("height"), 1);
    EXPECT_EQ(skinImage.at("depth"), 1);
    EXPECT_EQ(skinImage.at("usage"), "SRGB");
    EXPECT_EQ(skinImage.at("image_bytes"), "AQIDBA==");

    auto const& capeImage = json->at("cape_image");
    EXPECT_EQ(capeImage.at("image_format"), "RG8Unorm");
    EXPECT_EQ(capeImage.at("usage"), "Data");

    ASSERT_EQ(json->at("skin_animated_images").size(), 1);
    auto const& animation = json->at("skin_animated_images").at(0);
    EXPECT_EQ(animation.at("type"), "Face");
    EXPECT_EQ(animation.at("animation_expression"), "Blinking");
    EXPECT_EQ(animation.at("frames"), 2.0f);
    EXPECT_EQ(animation.at("image").at("width"), 1);

    EXPECT_EQ(json->at("geometry_data").at("format_version"), "1.12.0");
    EXPECT_EQ(json->at("geometry_data").at("geometry").at(0), "player");
    EXPECT_EQ(json->at("geometry_data_mutable").at("mutable"), true);
    auto const& minVersion = json->at("geometry_data_min_engine_version");
    EXPECT_EQ(minVersion.at("sem_version").at("major"), 1);
    EXPECT_EQ(minVersion.at("sem_version").at("minor"), 20);
    EXPECT_EQ(minVersion.at("sem_version").at("pre_release"), "beta");
    EXPECT_EQ(minVersion.at("sem_version").at("build_meta"), "build.1");

    ASSERT_EQ(json->at("persona_pieces").size(), 1);
    auto const& personaPiece = json->at("persona_pieces").at(0);
    EXPECT_EQ(personaPiece.at("piece_id"), "hair-piece");
    EXPECT_EQ(personaPiece.at("piece_type"), "Hair");
    EXPECT_EQ(personaPiece.at("pack_id"), packId.asString());
    EXPECT_EQ(personaPiece.at("is_default_piece"), false);
    EXPECT_EQ(personaPiece.at("product_id"), "product-id");

    auto const& tintColors = json->at("piece_tint_colors").at("Hair").at("colors");
    ASSERT_EQ(tintColors.size(), 4);
    EXPECT_TRUE(tintColors.at(0).contains("r"));
    EXPECT_FLOAT_EQ(json->at("skin_color").at("a").get<float>(), 0.4f);

    SerializedSkinImpl parsed;
    auto               result = ll::reflection::deserialize(parsed, *json, camelToSnakeWithoutM);
    ASSERT_TRUE(result.has_value()) << result.error().message();
    EXPECT_EQ(parsed.mId.get(), "skin-id");
    EXPECT_EQ(parsed.mPlayFabId.get(), "playfab-id");
    EXPECT_EQ(parsed.mFullId.get(), "full-id");
    EXPECT_EQ(parsed.mResourcePatch.get(), "resource-patch");
    EXPECT_EQ(parsed.mDefaultGeometryName.get(), "geometry.default");
    EXPECT_EQ(parsed.mAnimationData.get(), "animation-data");
    EXPECT_EQ(parsed.mCapeId.get(), "cape-id");
    EXPECT_EQ(parsed.mSkinImage->mWidth, 1);
    EXPECT_EQ(parsed.mSkinImage->mHeight, 1);
    EXPECT_EQ(parsed.mSkinImage->mImageBytes.size(), 4);
    ASSERT_EQ(parsed.mSkinAnimatedImages->size(), 1);
    EXPECT_EQ(parsed.mSkinAnimatedImages->at(0).mType, persona::AnimatedTextureType::Face);
    EXPECT_FLOAT_EQ(parsed.mSkinAnimatedImages->at(0).mFrames, 2.0f);
    EXPECT_EQ(parsed.mGeometryData.get()["format_version"].asString({}), "1.12.0");
    EXPECT_TRUE(parsed.mGeometryDataMutable.get()["mutable"].asBool(false));
    EXPECT_EQ(parsed.mGeometryDataMinEngineVersion->mSemVersion->mMajor, 1);
    EXPECT_EQ(parsed.mGeometryDataMinEngineVersion->mSemVersion->mMinor, 20);
    ASSERT_EQ(parsed.mPersonaPieces->size(), 1);
    EXPECT_EQ(parsed.mPersonaPieces->at(0).mPieceId.get(), "hair-piece");
    EXPECT_EQ(parsed.mPersonaPieces->at(0).mPackId.get(), packId);
    EXPECT_EQ(parsed.mArmSizeType, SharedTypes::persona::ArmSizeType::Wide);
    EXPECT_TRUE(parsed.mPieceTintColors->contains(SharedTypes::persona::PieceType::Hair));
    EXPECT_FLOAT_EQ(parsed.mSkinColor->r, 0.1f);
    EXPECT_EQ(parsed.mIsTrustedSkin, TrustedSkinFlag::True);
    EXPECT_TRUE(parsed.mIsPremium);
    EXPECT_TRUE(parsed.mIsPersona);
    EXPECT_FALSE(parsed.mIsPersonaCapeOnClassicSkin);
    EXPECT_TRUE(parsed.mIsPrimaryUser);
    EXPECT_TRUE(parsed.mOverridesPlayerAppearance);
}

TEST(ReflectionTest, ValueSerializerAndStringSerializerCanCoexistOnSameType) {
    VersionHolder value;
    value.version   = TestVersion{1, 20, 5};
    value.byVersion = {
        {TestVersion{1, 20, 5}, 11},
        {TestVersion{1, 21, 0}, 99}
    };

    auto json = ll::reflection::serialize<nlohmann::json>(value, uppercaseAsciiKey);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    ASSERT_TRUE(json->at("VERSION").is_object());
    EXPECT_EQ(json->at("VERSION").at("mMajor"), 1);
    EXPECT_EQ(json->at("VERSION").at("mMinor"), 20);
    EXPECT_EQ(json->at("VERSION").at("mPatch"), 5);
    EXPECT_FALSE(json->at("VERSION").contains("MMAJOR"));
    EXPECT_EQ(json->at("BYVERSION").at("1.20.5"), 11);
    EXPECT_EQ(json->at("BYVERSION").at("1.21.0"), 99);

    auto parsed = ll::reflection::deserialize_to<VersionHolder>(*json, uppercaseAsciiKey);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->version.mMajor, 1);
    EXPECT_EQ(parsed->version.mMinor, 20);
    EXPECT_EQ(parsed->version.mPatch, 5);
    EXPECT_EQ(parsed->byVersion.at(TestVersion{1, 20, 5}), 11);
    EXPECT_EQ(parsed->byVersion.at(TestVersion{1, 21, 0}), 99);
}

TEST(ReflectionTest, MemberHelperDoesNotPropagateOuterKeyFormatterIntoValueSerializer) {
    VersionHolder value;
    value.version = TestVersion{1, 20, 5};

    auto json = ll::reflection::serialize<nlohmann::json>(value, uppercaseAsciiKey);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    ASSERT_TRUE(json->contains("VERSION"));
    ASSERT_TRUE(json->at("VERSION").is_object());
    EXPECT_TRUE(json->at("VERSION").contains("mMajor"));
    EXPECT_TRUE(json->at("VERSION").contains("mMinor"));
    EXPECT_TRUE(json->at("VERSION").contains("mPatch"));
    EXPECT_FALSE(json->at("VERSION").contains("MMAJOR"));
    EXPECT_FALSE(json->at("VERSION").contains("MMINOR"));
    EXPECT_FALSE(json->at("VERSION").contains("MPATCH"));

    nlohmann::json direct = nlohmann::json::object();
    auto directResult     = ll::reflection::member<&TestVersion::mMajor>(value.version, direct, uppercaseAsciiKey);
    ASSERT_TRUE(directResult.has_value()) << directResult.error().message();
    EXPECT_TRUE(direct.contains("MMAJOR"));
    EXPECT_FALSE(direct.contains("mMajor"));
}

TEST(ReflectionTest, AssociativeKeysCanCustomizeSerializationStyleWithoutAffectingParsing) {
    UppercaseUuidKeyFormatter formatter;
    auto const                uuidA      = mce::UUID::fromString("01234567-89ab-cdef-0123-456789abcdef");
    auto const                uuidB      = mce::UUID::fromString("89abcdef-0123-4567-89ab-cdef01234567");
    auto const                uuidAUpper = uppercaseAsciiKey(uuidA.asString());
    auto const                uuidALower = uuidA.asString();
    auto const                uuidBUpper = uppercaseAsciiKey(uuidB.asString());

    UuidKeyedRoot value;
    value.keyed = {
        {uuidA, 7},
        {uuidB, 9}
    };

    auto json = ll::reflection::serialize<nlohmann::json>(value, formatter);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    ASSERT_TRUE(json->at("KEYED").is_object());
    EXPECT_TRUE(json->at("KEYED").contains(uuidAUpper));
    EXPECT_TRUE(json->at("KEYED").contains(uuidBUpper));
    EXPECT_FALSE(json->at("KEYED").contains(uuidALower));

    auto lowercaseJson =
        nlohmann::json::parse(std::format(R"({{"KEYED": {{"{}": 12, "{}": 34}}}})", uuidALower, uuidBUpper));

    auto parsed = ll::reflection::deserialize_to<UuidKeyedRoot>(lowercaseJson, formatter);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->keyed.at(uuidA), 12);
    EXPECT_EQ(parsed->keyed.at(uuidB), 34);
}

TEST(ReflectionTest, StringViewDeserializationRequiresBorrowableLvalueSource) {
    auto json = nlohmann::json::parse(R"({"text":"hello"})");

    StringViewRoot value;
    auto           result = ll::reflection::deserialize(value, json);
    ASSERT_TRUE(result.has_value()) << result.error().message();
    EXPECT_EQ(value.text, "hello");

    StringViewRoot tempValue;
    auto           tempResult = ll::reflection::deserialize(tempValue, nlohmann::json::parse(R"({"text":"world"})"));
    ASSERT_FALSE(tempResult.has_value());
    expectErrorMessageContains(
        tempResult.error(),
        "field cannot be safely deserialized into string_view from a temporary or non-borrowing source"
    );
}

TEST(ReflectionTest, PlainVariantSerializesAndDeserializesDirectAlternatives) {
    PlainVariant intValue = 42;

    auto intJson = ll::reflection::serialize<nlohmann::json>(intValue, uppercaseAsciiKey);
    ASSERT_TRUE(intJson.has_value()) << intJson.error().message();
    EXPECT_EQ(*intJson, 42);

    auto parsedInt = ll::reflection::deserialize_to<PlainVariant>(*intJson, uppercaseAsciiKey);
    ASSERT_TRUE(parsedInt.has_value()) << parsedInt.error().message();
    EXPECT_TRUE(std::holds_alternative<int>(*parsedInt));
    EXPECT_EQ(std::get<int>(*parsedInt), 42);

    PlainVariant stringValue = std::string{"hello"};

    auto stringJson = ll::reflection::serialize<nlohmann::json>(stringValue, uppercaseAsciiKey);
    ASSERT_TRUE(stringJson.has_value()) << stringJson.error().message();
    EXPECT_EQ(*stringJson, "hello");

    auto parsedString = ll::reflection::deserialize_to<PlainVariant>(*stringJson, uppercaseAsciiKey);
    ASSERT_TRUE(parsedString.has_value()) << parsedString.error().message();
    EXPECT_TRUE(std::holds_alternative<std::string>(*parsedString));
    EXPECT_EQ(std::get<std::string>(*parsedString), "hello");

    PlainVariant objectValue = NestedValue{7, std::string{"note"}};

    auto objectJson = ll::reflection::serialize<nlohmann::json>(objectValue, uppercaseAsciiKey);
    ASSERT_TRUE(objectJson.has_value()) << objectJson.error().message();
    ASSERT_TRUE(objectJson->is_object());
    EXPECT_EQ(objectJson->at("NUMBER"), 7);
    EXPECT_EQ(objectJson->at("NOTE"), "note");

    auto parsedObject = ll::reflection::deserialize_to<PlainVariant>(*objectJson, uppercaseAsciiKey);
    ASSERT_TRUE(parsedObject.has_value()) << parsedObject.error().message();
    EXPECT_TRUE(std::holds_alternative<NestedValue>(*parsedObject));
    EXPECT_EQ(std::get<NestedValue>(*parsedObject).number, 7);
    ASSERT_TRUE(std::get<NestedValue>(*parsedObject).note.has_value());
    EXPECT_EQ(*std::get<NestedValue>(*parsedObject).note, "note");

    PlainVariantRoot root;
    root.value  = TestVersion{1, 20, 5};
    root.values = {
        42,
        std::string{"text"},
        NestedValue{9, std::string{"nested"}}
    };

    auto rootJson = ll::reflection::serialize<nlohmann::json>(root, uppercaseAsciiKey);
    ASSERT_TRUE(rootJson.has_value()) << rootJson.error().message();
    ASSERT_TRUE(rootJson->at("VALUE").is_object());
    EXPECT_EQ(rootJson->at("VALUE").at("mMajor"), 1);
    EXPECT_EQ(rootJson->at("VALUES").at(0), 42);
    EXPECT_EQ(rootJson->at("VALUES").at(1), "text");
    EXPECT_EQ(rootJson->at("VALUES").at(2).at("NUMBER"), 9);

    auto parsedRoot = ll::reflection::deserialize_to<PlainVariantRoot>(*rootJson, uppercaseAsciiKey);
    ASSERT_TRUE(parsedRoot.has_value()) << parsedRoot.error().message();
    EXPECT_TRUE(std::holds_alternative<TestVersion>(parsedRoot->value));
    auto const expectedVersion = TestVersion{1, 20, 5};
    EXPECT_EQ(std::get<TestVersion>(parsedRoot->value), expectedVersion);
    ASSERT_EQ(parsedRoot->values.size(), 3u);
    EXPECT_TRUE(std::holds_alternative<int>(parsedRoot->values[0]));
    EXPECT_TRUE(std::holds_alternative<std::string>(parsedRoot->values[1]));
    EXPECT_TRUE(std::holds_alternative<NestedValue>(parsedRoot->values[2]));
}

TEST(ReflectionTest, PlainVariantPrefersExactArithmeticAlternativeMatches) {
    auto parsedBool = ll::reflection::deserialize_to<ArithmeticVariant>(nlohmann::json(true));
    ASSERT_TRUE(parsedBool.has_value()) << parsedBool.error().message();
    EXPECT_TRUE(std::holds_alternative<bool>(*parsedBool));
    EXPECT_EQ(std::get<bool>(*parsedBool), true);

    auto parsedSigned = ll::reflection::deserialize_to<ArithmeticVariant>(nlohmann::json(-7));
    ASSERT_TRUE(parsedSigned.has_value()) << parsedSigned.error().message();
    EXPECT_TRUE(std::holds_alternative<int64>(*parsedSigned));
    EXPECT_EQ(std::get<int64>(*parsedSigned), -7);

    auto parsedUnsigned = ll::reflection::deserialize_to<ArithmeticVariant>(nlohmann::json(uint64{7}));
    ASSERT_TRUE(parsedUnsigned.has_value()) << parsedUnsigned.error().message();
    EXPECT_TRUE(std::holds_alternative<uint64>(*parsedUnsigned));
    EXPECT_EQ(std::get<uint64>(*parsedUnsigned), 7u);

    auto parsedDouble = ll::reflection::deserialize_to<ArithmeticVariant>(nlohmann::json(1.5));
    ASSERT_TRUE(parsedDouble.has_value()) << parsedDouble.error().message();
    EXPECT_TRUE(std::holds_alternative<double>(*parsedDouble));
    EXPECT_DOUBLE_EQ(std::get<double>(*parsedDouble), 1.5);
}

TEST(ReflectionTest, PlainVariantReportsCastFailureWhenNoAlternativeMatches) {
    auto json = nlohmann::json::parse(R"({"unexpected":true})");

    auto result = ll::reflection::deserialize_to<std::variant<int, std::string>>(json);
    ASSERT_FALSE(result.has_value());
    expectErrorMessageContains(result.error(), "could not cast target object");
    expectErrorMessageContains(result.error(), R"({"unexpected":true})");
}

TEST(ReflectionTest, ItemInfoUsesTypeFieldToSelectRequiredFields) {
    auto const formatter = SnakeCaseKeyAndEnumFormatter{};
    ItemInfo   byName;
    byName.type = ItemInfoType::Name;
    byName.name = "minecraft:stone";
    byName.aux  = 2;

    auto byNameJson = ll::reflection::serialize<nlohmann::json>(byName, formatter);
    ASSERT_TRUE(byNameJson.has_value()) << byNameJson.error().message();
    EXPECT_EQ(byNameJson->at("type"), "name");
    EXPECT_EQ(byNameJson->at("name"), "minecraft:stone");
    EXPECT_EQ(byNameJson->at("aux"), 2);
    EXPECT_FALSE(byNameJson->contains("snbt"));

    auto parsedByName = ll::reflection::deserialize_to<ItemInfo>(*byNameJson, formatter);
    ASSERT_TRUE(parsedByName.has_value()) << parsedByName.error().message();
    EXPECT_EQ(parsedByName->type, ItemInfoType::Name);
    ASSERT_TRUE(parsedByName->name.has_value());
    EXPECT_EQ(*parsedByName->name, "minecraft:stone");
    ASSERT_TRUE(parsedByName->aux.has_value());
    EXPECT_EQ(*parsedByName->aux, 2);
    EXPECT_FALSE(parsedByName->snbt.has_value());

    ItemInfo bySnbt;
    bySnbt.type = ItemInfoType::Snbt;
    bySnbt.snbt = R"({Count:1b,id:"minecraft:stone"})";

    auto bySnbtJson = ll::reflection::serialize<nlohmann::json>(bySnbt, formatter);
    ASSERT_TRUE(bySnbtJson.has_value()) << bySnbtJson.error().message();
    EXPECT_EQ(bySnbtJson->at("type"), "snbt");
    EXPECT_EQ(bySnbtJson->at("snbt"), R"({Count:1b,id:"minecraft:stone"})");
    EXPECT_FALSE(bySnbtJson->contains("name"));
    EXPECT_FALSE(bySnbtJson->contains("aux"));

    auto parsedBySnbt = ll::reflection::deserialize_to<ItemInfo>(*bySnbtJson, formatter);
    ASSERT_TRUE(parsedBySnbt.has_value()) << parsedBySnbt.error().message();
    EXPECT_EQ(parsedBySnbt->type, ItemInfoType::Snbt);
    ASSERT_TRUE(parsedBySnbt->snbt.has_value());
    EXPECT_EQ(*parsedBySnbt->snbt, R"({Count:1b,id:"minecraft:stone"})");
    EXPECT_FALSE(parsedBySnbt->name.has_value());
    EXPECT_FALSE(parsedBySnbt->aux.has_value());
}

TEST(ReflectionTest, ItemInfoReportsMissingFieldsRequiredByType) {
    auto const formatter   = SnakeCaseKeyAndEnumFormatter{};
    auto       missingName = nlohmann::json::parse(R"({
        "type": "name"
    })");

    auto missingNameResult = ll::reflection::deserialize_to<ItemInfo>(missingName, formatter);
    ASSERT_FALSE(missingNameResult.has_value());
    expectErrorMessageContains(missingNameResult.error(), R"(missing required field "name" when deserializing)");

    auto missingSnbt = nlohmann::json::parse(R"({
        "type": "snbt"
    })");

    auto missingSnbtResult = ll::reflection::deserialize_to<ItemInfo>(missingSnbt, formatter);
    ASSERT_FALSE(missingSnbtResult.has_value());
    expectErrorMessageContains(missingSnbtResult.error(), R"(missing required field "snbt" when deserializing)");
}

TEST(ReflectionTest, DeserializeToSupportsNonDefaultConstructibleTypesWithValueDeserializer) {
    auto json = nlohmann::json::parse(R"({
        "id": 7,
        "name": "stone"
    })");

    auto parsed = ll::reflection::deserialize_to<NonDefaultConstructibleItem>(json);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->id, 7);
    EXPECT_EQ(parsed->name, "stone");
}

TEST(ReflectionTest, ContainersSupportNonDefaultConstructibleValuesWithValueDeserializer) {
    auto json = nlohmann::json::parse(R"({
        "maybe": {
            "id": 1,
            "name": "optional"
        },
        "items": [
            {
                "id": 2,
                "name": "first"
            },
            {
                "id": 3,
                "name": "second"
            }
        ],
        "named": {
            "alpha": {
                "id": 4,
                "name": "mapped"
            }
        },
        "value": {
            "id": 5,
            "name": "variant"
        }
    })");

    auto parsed = ll::reflection::deserialize_to<NonDefaultContainerRoot>(json);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();

    ASSERT_TRUE(parsed->maybe.has_value());
    EXPECT_EQ(parsed->maybe->id, 1);
    EXPECT_EQ(parsed->maybe->name, "optional");

    ASSERT_EQ(parsed->items.size(), 2u);
    EXPECT_EQ(parsed->items[0].id, 2);
    EXPECT_EQ(parsed->items[0].name, "first");
    EXPECT_EQ(parsed->items[1].id, 3);
    EXPECT_EQ(parsed->items[1].name, "second");

    ASSERT_EQ(parsed->named.size(), 1u);
    EXPECT_EQ(parsed->named.at("alpha").id, 4);
    EXPECT_EQ(parsed->named.at("alpha").name, "mapped");

    ASSERT_TRUE(std::holds_alternative<NonDefaultConstructibleItem>(parsed->value));
    auto const& value = std::get<NonDefaultConstructibleItem>(parsed->value);
    EXPECT_EQ(value.id, 5);
    EXPECT_EQ(value.name, "variant");
}

TEST(ReflectionTest, NbtValueSpecializationCanSerializeDifferentlyForJsonAndNbt) {
    auto value = CompoundTagVariant::object({
        {   "id",                                                                          "minecraft:stone"},
        {"count",                                                                                         64},
        {"slots",                                                       CompoundTagVariant::array({1, 2, 3})},
        {  "tag", CompoundTagVariant::object({{"display", CompoundTagVariant::object({{"name", "Stone"}})}})}
    });

    auto json = ll::reflection::serialize<nlohmann::json>(value);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    ASSERT_TRUE(json->is_string());
    EXPECT_EQ(*json, value.toSnbt(SnbtFormat::Minimize, 0));

    auto nbt = ll::reflection::serialize<CompoundTagVariant>(value);
    ASSERT_TRUE(nbt.has_value()) << nbt.error().message();
    EXPECT_EQ(*nbt, value);
}

TEST(ReflectionTest, VariantWithEnumIndexSerializesAndDeserializesUsingEnumDiscriminator) {
    auto const         formatter = SnakeCaseKeyAndEnumFormatter{};
    EnumIndexedVariant value{};
    value = TestVersion{1, 20, 5};

    auto json = ll::reflection::serialize<nlohmann::json>(value, formatter);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    ASSERT_TRUE(json->is_object());
    EXPECT_EQ(json->at("type"), "version");
    ASSERT_TRUE(json->at("value").is_object());
    EXPECT_EQ(json->at("value").at("mMajor"), 1);
    EXPECT_EQ(json->at("value").at("mMinor"), 20);
    EXPECT_EQ(json->at("value").at("mPatch"), 5);
    EXPECT_FALSE(json->at("value").contains("major"));
    EXPECT_FALSE(json->at("value").contains("minor"));
    EXPECT_FALSE(json->at("value").contains("patch"));

    auto parsed = ll::reflection::deserialize_to<EnumIndexedVariant>(*json, formatter);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->index(), VariantEnumTag::Version);
    auto const expectedVersion = TestVersion{1, 20, 5};
    EXPECT_EQ(parsed->get<VariantEnumTag::Version>(), expectedVersion);

    auto integerJson = nlohmann::json::parse(R"({
        "type": "integer",
        "value": 42
    })");

    auto parsedInteger = ll::reflection::deserialize_to<EnumIndexedVariant>(integerJson, formatter);
    ASSERT_TRUE(parsedInteger.has_value()) << parsedInteger.error().message();
    EXPECT_EQ(parsedInteger->index(), VariantEnumTag::Integer);
    EXPECT_EQ(parsedInteger->get<VariantEnumTag::Integer>(), 42);
}

TEST(ReflectionTest, PascalCaseFlagEnumValuesSerializeToSnakeCaseAndDeserializeBack) {
    auto const formatter = SnakeCaseKeyAndEnumFormatter{};
    auto const value     = static_cast<PascalCasePermission>(
        std::to_underlying(PascalCasePermission::ReadPermission)
        | std::to_underlying(PascalCasePermission::WritePermission)
    );

    EXPECT_EQ(ll::reflection::type_to_string(value, camelToSnakeWithoutM), "ReadPermission|WritePermission");
    EXPECT_EQ(ll::reflection::type_to_string(value, formatter), "read_permission|write_permission");

    auto json = ll::reflection::serialize<nlohmann::json>(value, formatter);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    ASSERT_TRUE(json->is_string());
    EXPECT_EQ(*json, "read_permission|write_permission");

    auto parsed = ll::reflection::deserialize_to<PascalCasePermission>(*json, formatter);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(std::to_underlying(*parsed), std::to_underlying(value));

    auto parsedFromText =
        ll::reflection::string_to_type<PascalCasePermission>("read_permission|write_permission", formatter);
    ASSERT_TRUE(parsedFromText.has_value());
    EXPECT_EQ(std::to_underlying(*parsedFromText), std::to_underlying(value));
}

TEST(ReflectionTest, InPlaceDeserializerIsUsedByDeserializeAndDeserializeTo) {
    auto json = nlohmann::json::parse(R"({
        "id": 7,
        "name": "torch"
    })");

    auto parsed = ll::reflection::deserialize_to<InPlaceItem>(json);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->id, 7);
    EXPECT_EQ(parsed->label, "torch");
    EXPECT_TRUE(parsed->touched);

    InPlaceItem target;
    auto        targetResult = ll::reflection::deserialize(target, json);
    ASSERT_TRUE(targetResult.has_value()) << targetResult.error().message();
    EXPECT_EQ(target.id, 7);
    EXPECT_EQ(target.label, "torch");
    EXPECT_TRUE(target.touched);

    auto serialized = ll::reflection::serialize<nlohmann::json>(*parsed);
    ASSERT_TRUE(serialized.has_value()) << serialized.error().message();
    EXPECT_EQ(serialized->at("id"), 7);
    EXPECT_EQ(serialized->at("name"), "torch");
    EXPECT_EQ(serialized->at("touched"), true);

    auto roundTripped = ll::reflection::deserialize_to<InPlaceItem>(*serialized);
    ASSERT_TRUE(roundTripped.has_value()) << roundTripped.error().message();
    EXPECT_EQ(roundTripped->label, "torch");
    EXPECT_TRUE(roundTripped->touched);
}

TEST(ReflectionTest, NumericDeserializationRejectsOutOfRangeAndFractionalValues) {
    auto tooLarge = ll::reflection::deserialize_to<int8>(nlohmann::json(300));
    ASSERT_FALSE(tooLarge.has_value());
    expectErrorMessageContains(tooLarge.error(), "is out of range for");

    auto negativeUnsigned = ll::reflection::deserialize_to<uint8>(nlohmann::json(-1));
    ASSERT_FALSE(negativeUnsigned.has_value());
    expectErrorMessageContains(negativeUnsigned.error(), "is out of range for");

    auto unsignedOverflow = ll::reflection::deserialize_to<int64>(nlohmann::json((std::numeric_limits<uint64>::max)()));
    ASSERT_FALSE(unsignedOverflow.has_value());
    expectErrorMessageContains(unsignedOverflow.error(), "is out of range for");

    auto fractional = ll::reflection::deserialize_to<int>(nlohmann::json(1.5));
    ASSERT_FALSE(fractional.has_value());
    expectErrorMessageContains(fractional.error(), "is not an integer");

    auto boundary = ll::reflection::deserialize_to<int8>(nlohmann::json(127));
    ASSERT_TRUE(boundary.has_value()) << boundary.error().message();
    EXPECT_EQ(static_cast<int>(*boundary), 127);

    auto integralFloat = ll::reflection::deserialize_to<int>(nlohmann::json(2.0));
    ASSERT_TRUE(integralFloat.has_value()) << integralFloat.error().message();
    EXPECT_EQ(*integralFloat, 2);

    // 错误信息承诺"数字或布尔"的地方，布尔值同样被接受。
    auto boolean = ll::reflection::deserialize_to<int>(nlohmann::json(true));
    ASSERT_TRUE(boolean.has_value()) << boolean.error().message();
    EXPECT_EQ(*boolean, 1);

    // NBT 后端会报出和 JSON 后端相同的失败。
    auto nbtTooLarge = ll::reflection::deserialize_to<int8>(CompoundTagVariant{300});
    ASSERT_FALSE(nbtTooLarge.has_value());
    expectErrorMessageContains(nbtTooLarge.error(), "is out of range for");

    auto nbtFractional = ll::reflection::deserialize_to<int>(CompoundTagVariant{1.5});
    ASSERT_FALSE(nbtFractional.has_value());
    expectErrorMessageContains(nbtFractional.error(), "is not an integer");
}

TEST(ReflectionTest, JsonValueNodeSerializesAggregatesIntoJsonValue) {
    NodeAggregate value;
    value.name    = "node";
    value.count   = 7;
    value.ratio   = 1.5;
    value.enabled = true;
    value.kind    = NodeKind::Advanced;
    value.values  = {1, 2, 3};
    value.named   = {
        {"a", 1},
        {"b", 2}
    };
    value.child   = NodeChild{42, "kid"};
    value.either  = std::string{"text"};
    value.version = TestVersion{1, 20, 5};

    auto node = ll::reflection::serialize<JsonValueNode>(value);
    ASSERT_TRUE(node.has_value()) << node.error().message();

    auto const& json = node->value();
    ASSERT_TRUE(json.isObject());
    EXPECT_EQ(json["name"].asString(""), "node");
    EXPECT_EQ(json["count"].asInt64(0), 7);
    EXPECT_DOUBLE_EQ(json["ratio"].asDouble(0.0), 1.5);
    EXPECT_EQ(json["enabled"].asBool(false), true);
    EXPECT_FALSE(json.isMember("note"));              // 空的 optional 会省略整个键
    EXPECT_EQ(json["kind"].asString(""), "Advanced"); // 枚举按名字写出
    ASSERT_TRUE(json["values"].isArray());
    EXPECT_EQ(json["values"].size(), 3u);
    EXPECT_EQ(json["values"][1].asInt64(0), 2);
    EXPECT_EQ(json["named"]["b"].asInt64(0), 2);
    EXPECT_EQ(json["child"]["id"].asInt64(0), 42);
    EXPECT_EQ(json["child"]["label"].asString(""), "kid");
    ASSERT_TRUE(json["either"].isString()); // variant 写出的是当前分支
    EXPECT_EQ(json["either"].asString(""), "text");
    EXPECT_EQ(json["version"]["mMajor"].asInt64(0), 1); // 自定义 Serializer 也落到 Json::Value
    EXPECT_EQ(json["version"]["mPatch"].asInt64(0), 5);

    auto parsed = ll::reflection::deserialize_to<NodeAggregate>(*node);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(*parsed, value);
}

TEST(ReflectionTest, JsonValueNodeDeserializesFromAConstJsonValue) {
    ::Json::Value document{::Json::ValueType::ObjectValue};
    document["name"]    = "manual";
    document["count"]   = 11;
    document["ratio"]   = 0.25;
    document["enabled"] = true;
    document["kind"]    = "Advanced";
    ::Json::Value values{::Json::ValueType::ArrayValue};
    values.append(4);
    values.append(5);
    document["values"] = values;
    ::Json::Value named{::Json::ValueType::ObjectValue};
    named["x"]                    = 9;
    document["named"]             = named;
    document["child"]["id"]       = 5;
    document["child"]["label"]    = "kid2";
    document["either"]            = 3;
    document["version"]["mMajor"] = 9;
    document["version"]["mMinor"] = 8;
    document["version"]["mPatch"] = 7;

    JsonValueNode const node{document}; // 只读来源同样可以用
    auto                parsed = ll::reflection::deserialize_to<NodeAggregate>(node);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();

    EXPECT_EQ(parsed->name, "manual");
    EXPECT_EQ(parsed->count, 11);
    EXPECT_DOUBLE_EQ(parsed->ratio, 0.25);
    EXPECT_TRUE(parsed->enabled);
    EXPECT_FALSE(parsed->note.has_value()); // 缺键 → nullopt
    EXPECT_EQ(parsed->kind, NodeKind::Advanced);
    EXPECT_EQ(parsed->values, (std::vector<int>{4, 5}));
    EXPECT_EQ(parsed->named.at("x"), 9);
    EXPECT_EQ(parsed->child, (NodeChild{5, "kid2"}));
    EXPECT_TRUE(std::holds_alternative<int>(parsed->either));
    EXPECT_EQ(std::get<int>(parsed->either), 3);
    EXPECT_EQ(parsed->version, (TestVersion{9, 8, 7}));
}

TEST(ReflectionTest, JsonValueNodeReportsPathsRangesAndUnsupportedTargets) {
    auto const makeDocument = [] {
        ::Json::Value document{::Json::ValueType::ObjectValue};
        document["name"]    = "node";
        document["count"]   = 7;
        document["ratio"]   = 1.5;
        document["enabled"] = true;
        document["kind"]    = "Basic";
        ::Json::Value values{::Json::ValueType::ArrayValue};
        values.append(1);
        document["values"] = values;
        ::Json::Value named{::Json::ValueType::ObjectValue};
        named["a"]                    = 1;
        document["named"]             = named;
        document["child"]["id"]       = 1;
        document["child"]["label"]    = "kid";
        document["either"]            = 1;
        document["version"]["mMajor"] = 1;
        document["version"]["mMinor"] = 2;
        document["version"]["mPatch"] = 3;
        return document;
    };

    // 类型不匹配，且错误信息带嵌套字段路径
    {
        auto document           = makeDocument();
        document["child"]["id"] = "oops";
        auto parsed             = ll::reflection::deserialize_to<NodeAggregate>(JsonValueNode{document});
        ASSERT_FALSE(parsed.has_value());
        expectErrorMessageContains(parsed.error(), "Reflection error in field 'child.id':");
        expectErrorMessageContains(parsed.error(), "field must be a number or boolean");
    }

    // 缺必选字段
    {
        auto document = makeDocument();
        document.removeMember("count");
        auto parsed = ll::reflection::deserialize_to<NodeAggregate>(JsonValueNode{document});
        ASSERT_FALSE(parsed.has_value());
        expectErrorMessageContains(parsed.error(), R"(missing required field "count" when deserializing)");
    }

    // 数值严格：带小数 / 越界 / 负数进无符号 / 布尔转数字
    {
        auto document     = makeDocument();
        document["count"] = 1.5;
        auto parsed       = ll::reflection::deserialize_to<NodeAggregate>(JsonValueNode{document});
        ASSERT_FALSE(parsed.has_value());
        expectErrorMessageContains(parsed.error(), "is not an integer");
    }
    {
        ::Json::Value document{::Json::ValueType::ObjectValue};
        document["small"]    = 300;
        document["positive"] = 1;
        auto parsed          = ll::reflection::deserialize_to<NodeRangeTarget>(JsonValueNode{document});
        ASSERT_FALSE(parsed.has_value());
        expectErrorMessageContains(parsed.error(), "is out of range for");
    }
    {
        ::Json::Value document{::Json::ValueType::ObjectValue};
        document["small"]    = 1;
        document["positive"] = -1;
        auto parsed          = ll::reflection::deserialize_to<NodeRangeTarget>(JsonValueNode{document});
        ASSERT_FALSE(parsed.has_value());
        expectErrorMessageContains(parsed.error(), "is out of range for");
    }
    {
        auto document     = makeDocument();
        document["count"] = true; // 布尔值写进算术类型会变成 0 / 1
        auto parsed       = ll::reflection::deserialize_to<NodeAggregate>(JsonValueNode{document});
        ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
        EXPECT_EQ(parsed->count, 1);
    }

    // variant 无法匹配时，错误里带类型名和 dump
    {
        auto document      = makeDocument();
        document["either"] = ::Json::Value{::Json::ValueType::ArrayValue};
        auto parsed        = ll::reflection::deserialize_to<NodeAggregate>(JsonValueNode{document});
        ASSERT_FALSE(parsed.has_value());
        expectErrorMessageContains(parsed.error(), "could not cast target array");
    }

    // string_view 目标：只有左值来源才安全借用，临时（右值）节点会被判定为生命周期不安全
    {
        ::Json::Value document{::Json::ValueType::ObjectValue};
        document["text"] = "borrowed";
        auto parsed      = ll::reflection::deserialize_to<NodeStringViewTarget>(JsonValueNode{document});
        ASSERT_FALSE(parsed.has_value());
        expectErrorMessageContains(parsed.error(), "cannot be safely deserialized into string_view");
    }
}

TEST(ReflectionTest, JsonValueNodeBorrowsStringViewsFromAnLvalueSource) {
    ::Json::Value document{::Json::ValueType::ObjectValue};
    document["text"] = "borrowed";
    JsonValueNode const node{document};

    auto parsed = ll::reflection::deserialize_to<NodeStringViewTarget>(node);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->text, "borrowed");
    EXPECT_EQ(std::string{node["text"]}, "borrowed"); // 花括号初始化也必须走字符串转换，而不是字面量列表
    // 文本缓存在适配节点里：同一个子节点重复借出拿到的是同一份
    EXPECT_EQ(
        std::addressof(node["text"].get_ref<std::string const&>()),
        std::addressof(node["text"].get_ref<std::string const&>())
    );
}

TEST(ReflectionTest, PlainVariantDeserializesFromNbt) {
    auto parsedInt = ll::reflection::deserialize_to<PlainVariant>(CompoundTagVariant{42});
    ASSERT_TRUE(parsedInt.has_value()) << parsedInt.error().message();
    ASSERT_TRUE(std::holds_alternative<int>(*parsedInt));
    EXPECT_EQ(std::get<int>(*parsedInt), 42);

    auto parsedString = ll::reflection::deserialize_to<PlainVariant>(CompoundTagVariant{std::string{"text"}});
    ASSERT_TRUE(parsedString.has_value()) << parsedString.error().message();
    ASSERT_TRUE(std::holds_alternative<std::string>(*parsedString));
    EXPECT_EQ(std::get<std::string>(*parsedString), "text");
}

TEST(ReflectionTest, JsonValueNodeFeedsEveryScalarAccessorOfAVariant) {
    auto const parse = [](::Json::Value value) {
        return ll::reflection::deserialize_to<ArithmeticVariant>(JsonValueNode{std::move(value)});
    };

    auto boolValue = parse(::Json::Value{true});
    ASSERT_TRUE(boolValue.has_value()) << boolValue.error().message();
    ASSERT_TRUE(std::holds_alternative<bool>(*boolValue));
    EXPECT_TRUE(std::get<bool>(*boolValue));

    auto signedValue = parse(::Json::Value{-7});
    ASSERT_TRUE(signedValue.has_value()) << signedValue.error().message();
    ASSERT_TRUE(std::holds_alternative<int64>(*signedValue));
    EXPECT_EQ(std::get<int64>(*signedValue), -7);

    auto unsignedValue = parse(::Json::Value{::Json::Value::UInt{7}});
    ASSERT_TRUE(unsignedValue.has_value()) << unsignedValue.error().message();
    ASSERT_TRUE(std::holds_alternative<uint64>(*unsignedValue));
    EXPECT_EQ(std::get<uint64>(*unsignedValue), 7u);

    auto doubleValue = parse(::Json::Value{1.5});
    ASSERT_TRUE(doubleValue.has_value()) << doubleValue.error().message();
    ASSERT_TRUE(std::holds_alternative<double>(*doubleValue));
    EXPECT_DOUBLE_EQ(std::get<double>(*doubleValue), 1.5);
}

TEST(ReflectionTest, JsonValueNodeSupportsTheBuiltInStringifiedTypes) {
    NodeStringyTypes value{};
    value.uuid = mce::UUID::fromString("01234567-89ab-cdef-0123-456789abcdef");
    ASSERT_TRUE(value.version.from_string_noexcept("1.20.5"));

    auto node = ll::reflection::serialize<JsonValueNode>(value);
    ASSERT_TRUE(node.has_value()) << node.error().message();
    ASSERT_TRUE(node->value().isObject());
    EXPECT_EQ(node->value()["uuid"].asString(""), value.uuid.asString());
    EXPECT_EQ(node->value()["version"].asString(""), value.version.to_string());

    auto parsed = ll::reflection::deserialize_to<NodeStringyTypes>(*node);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->uuid.asString(), value.uuid.asString());
    EXPECT_EQ(parsed->version, value.version);
}

TEST(ReflectionTest, JsonValueNodeWritesThroughAndSharesItsValue) {
    JsonValueNode node{::Json::Value{::Json::ValueType::ObjectValue}};
    node["a"]           = JsonValueNode{1};
    node["nested"]["b"] = JsonValueNode{std::string{"x"}};
    EXPECT_EQ(node.value()["a"].asInt64(0), 1);
    EXPECT_EQ(node.value()["nested"]["b"].asString(""), "x");

    JsonValueNode copy = node; // 浅拷贝：共享同一份 Json::Value
    copy["c"]          = JsonValueNode{true};
    EXPECT_TRUE(node.value().isMember("c"));

    JsonValueNode& first  = node["a"];
    JsonValueNode& second = node["a"];
    EXPECT_EQ(std::addressof(first), std::addressof(second)); // 同一个子槽位只缓存一份视图

    JsonValueNode array = JsonValueNode::array();
    array.push_back(JsonValueNode{3});
    array.push_back(JsonValueNode{std::string{"tail"}});
    EXPECT_EQ(array.value().size(), 2u);
    EXPECT_EQ(array.value()[0].asInt64(0), 3);
    EXPECT_EQ(array.value()[1].asString(""), "tail");

    auto nulled = ll::reflection::serialize<JsonValueNode>(std::optional<int>{});
    ASSERT_TRUE(nulled.has_value()) << nulled.error().message();
    EXPECT_TRUE(nulled->is_null());
}
