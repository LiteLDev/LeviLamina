#include "gtest/gtest.h"

#include "nlohmann/json.hpp"

#include "ll/api/i18n/I18n.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/reflection/Dispatcher.h"
#include "ll/api/reflection/Serialization.h"
#include "ll/api/utils/StringUtils.h"
#include "mc/platform/UUID.h"

#include <algorithm>
#include <cctype>
#include <chrono>
#include <cstdint>
#include <format>
#include <map>
#include <optional>
#include <string>
#include <string_view>
#include <variant>
#include <vector>

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
    int                   number = 0;
    std::optional<std::string> note;
};

struct ReflectionCase {
    NestedValue                           nested;
    std::vector<std::variant<int, std::string>> values;
    std::map<std::string, int>            named;
    IntDispatcher                         dispatched{0};
    std::optional<int>                    maybe;
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
    TestVersion               version;
    std::map<TestVersion, int> byVersion;
};

struct StringViewRoot {
    std::string_view text;
};

template <>
struct ll::reflection::Serializer<mce::UUID> {
    static std::string to_string(mce::UUID const& value) { return value.asString(); }

    static ll::Expected<mce::UUID> from_string(std::string_view sv) {
        if (!mce::UUID::canParse(sv)) {
            return ll::makeI18nStringError<"invalid uuid">();
        }
        return mce::UUID::fromString(sv);
    }

    template <typename J>
    static J serialize(mce::UUID const& value) {
        return value.asString();
    }

    template <typename J>
    static ll::Expected<mce::UUID> deserialize(J const& j) {
        if (!j.is_string()) {
            return ll::reflection::makeDeserStringTypeError();
        }
        return from_string(std::string{j});
    }
};

template <typename Enum, typename Variant>
    requires std::is_enum_v<Enum> &&
             ll::concepts::IsVariant<std::remove_cvref_t<Variant>>
struct VariantWithEnumIndex : Variant {
    using enum_type = Enum;
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

template<typename Enum, typename Variant>
struct ll::reflection::Serializer<VariantWithEnumIndex<Enum, Variant>> {
    using wrapped_type = VariantWithEnumIndex<Enum, Variant>;
    using variant_type = typename wrapped_type::variant_type;

    template <std::size_t I, typename J, typename F>
    static ll::Expected<wrapped_type> deserialize_alternative(J const& j, F const& keyFormatter) {
        using alternative_type = std::variant_alternative_t<I, variant_type>;
        auto value = ll::reflection::deserialize_to<alternative_type>(j, keyFormatter);
        if (!value) {
            return ll::forwardError(value.error());
        }
        return wrapped_type{std::in_place_index<I>, std::move(*value)};
    }

    template <typename J, typename F, std::size_t... Is>
    static ll::Expected<wrapped_type>
    deserialize_by_index(std::size_t index, J const& j, F const& keyFormatter, std::index_sequence<Is...>) {
        ll::Expected<wrapped_type> result = ll::makeI18nStringError<"invalid variant">();
        bool const matched = ((index == Is ? (result = deserialize_alternative<Is>(j, keyFormatter), true) : false) || ...);
        if (!matched) {
            return ll::makeI18nStringError<"invalid variant">();
        }
        return result;
    }

    template <typename J, typename F>
    static ll::Expected<J> serialize(wrapped_type const& value, F const& keyFormatter) {
        using ll::reflection::serialize;

        J result = J::object();
        auto type = serialize<J>(value.index(), keyFormatter);
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

        auto type = ll::reflection::deserialize_to<Enum>(j.at(typeKey), keyFormatter);
        if (!type) {
            return ll::forwardError(type.error());
        }

        auto const index = static_cast<std::size_t>(static_cast<std::underlying_type_t<Enum>>(*type));
        return deserialize_by_index(
            index,
            j.at(valueKey),
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

enum class PascalCasePermission : uint8_t {
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
        if (auto res = member<&TestVersion::mMajor>(v, result); !res) {
            return ll::forwardError(res.error());
        }
        if (auto res = member<&TestVersion::mMinor>(v, result); !res) {
            return ll::forwardError(res.error());
        }
        if (auto res = member<&TestVersion::mPatch>(v, result); !res) {
            return ll::forwardError(res.error());
        }
        return result;
    }

    template <typename J>
    static ll::Expected<TestVersion> deserialize(J const& j) {
        using ll::reflection::member;
        TestVersion result;
        if (auto r = member<&TestVersion::mMajor>(result, j); !r) {
            return ll::forwardError(r.error());
        }
        if (auto r = member<&TestVersion::mMinor>(result, j); !r) {
            return ll::forwardError(r.error());
        }
        if (auto r = member<&TestVersion::mPatch>(result, j); !r) {
            return ll::forwardError(r.error());
        }
        return result;
    }

    static std::string to_string(TestVersion const& value) {
        return std::to_string(value.mMajor) + "." + std::to_string(value.mMinor) + "." + std::to_string(value.mPatch);
    }

    static ll::Expected<TestVersion> from_string(std::string_view sv) {
        auto p1 = sv.find('.');
        auto p2 = p1 == std::string_view::npos ? std::string_view::npos : sv.find('.', p1 + 1);
        if (p1 == std::string_view::npos || p2 == std::string_view::npos || sv.find('.', p2 + 1) != std::string_view::npos) {
            return ll::makeI18nStringError<"invalid version">();
        }

        auto major = ll::string_utils::svtonum<int>(sv.substr(0, p1), nullptr, 10);
        auto minor = ll::string_utils::svtonum<int>(sv.substr(p1 + 1, p2 - p1 - 1), nullptr, 10);
        auto patch = ll::string_utils::svtonum<int>(sv.substr(p2 + 1), nullptr, 10);
        if (major && minor && patch) {
            return TestVersion{*major, *minor, *patch};
        }
        return ll::makeI18nStringError<"invalid version">();
    }
};

TEST(ReflectionTest, SerializeAndDeserializeRespectKeyFormatterAndDispatcher) {
    resetDispatchListenerState();

    ReflectionCase value;
    value.nested.number = 7;
    value.nested.note   = "hello";
    value.values        = {42, std::string{"text"}};
    value.named         = {{"alpha", 1}, {"beta", 2}};
    value.dispatched    = 9;
    value.maybe         = std::nullopt;
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
    auto result = ll::reflection::deserialize(parsed, *json, uppercaseAsciiKey);
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
    expectErrorMessageContains(
        result.error(),
        "Reflection error in field 'values[0].number':"
    );
    expectErrorMessageContains(
        result.error(),
        "field must be a number or boolean"
    );
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
    expectErrorMessageContains(
        result.error(),
        "Reflection error in field 'keyed[\"maybe\"]':"
    );
    expectErrorMessageContains(
        result.error(),
        "invalid key: maybe"
    );
}

TEST(ReflectionTest, MemberHelpersSerializeDeserializeAndHandleOptionalMissingFields) {
    MemberOps value;
    value.plain = 42;

    nlohmann::json json = nlohmann::json::object();
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
    auto const uuidA       = mce::UUID::fromString("01234567-89ab-cdef-0123-456789abcdef");
    auto const uuidB       = mce::UUID::fromString("89abcdef-0123-4567-89ab-cdef01234567");
    auto const uuidAUpper  = uppercaseAsciiKey(uuidA.asString());
    auto const uuidALower  = uuidA.asString();
    auto const uuidBUpper  = uppercaseAsciiKey(uuidB.asString());

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

    auto lowercaseJson = nlohmann::json::parse(std::format(
        R"({{"KEYED": {{"{}": 12, "{}": 34}}}})",
        uuidALower,
        uuidBUpper
    ));

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

TEST(ReflectionTest, VariantWithEnumIndexSerializesAndDeserializesUsingEnumDiscriminator) {
    EnumIndexedVariant value{};
    value = TestVersion{1, 20, 5};

    auto json = ll::reflection::serialize<nlohmann::json>(value, camelToSnakeWithoutM);
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

    auto parsed = ll::reflection::deserialize_to<EnumIndexedVariant>(*json, camelToSnakeWithoutM);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(parsed->index(), VariantEnumTag::Version);
    auto const expectedVersion = TestVersion{1, 20, 5};
    EXPECT_EQ(parsed->get<VariantEnumTag::Version>(), expectedVersion);

    auto integerJson = nlohmann::json::parse(R"({
        "type": "integer",
        "value": 42
    })");

    auto parsedInteger = ll::reflection::deserialize_to<EnumIndexedVariant>(integerJson, camelToSnakeWithoutM);
    ASSERT_TRUE(parsedInteger.has_value()) << parsedInteger.error().message();
    EXPECT_EQ(parsedInteger->index(), VariantEnumTag::Integer);
    EXPECT_EQ(parsedInteger->get<VariantEnumTag::Integer>(), 42);
}

TEST(ReflectionTest, PascalCaseFlagEnumValuesSerializeToSnakeCaseAndDeserializeBack) {
    auto const value = static_cast<PascalCasePermission>(
        std::to_underlying(PascalCasePermission::ReadPermission)
        | std::to_underlying(PascalCasePermission::WritePermission)
    );

    EXPECT_EQ(ll::reflection::type_to_string(value, camelToSnakeWithoutM), "read_permission|write_permission");

    auto json = ll::reflection::serialize<nlohmann::json>(value, camelToSnakeWithoutM);
    ASSERT_TRUE(json.has_value()) << json.error().message();
    ASSERT_TRUE(json->is_string());
    EXPECT_EQ(*json, "read_permission|write_permission");

    auto parsed = ll::reflection::deserialize_to<PascalCasePermission>(*json, camelToSnakeWithoutM);
    ASSERT_TRUE(parsed.has_value()) << parsed.error().message();
    EXPECT_EQ(std::to_underlying(*parsed), std::to_underlying(value));

    auto parsedFromText = ll::reflection::string_to_type<PascalCasePermission>(
        "read_permission|write_permission",
        camelToSnakeWithoutM
    );
    ASSERT_TRUE(parsedFromText.has_value());
    EXPECT_EQ(std::to_underlying(*parsedFromText), std::to_underlying(value));
}
