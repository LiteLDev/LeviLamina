#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/ByteArrayTag.h"
#include "mc/nbt/ByteTag.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/DoubleTag.h"
#include "mc/nbt/EndTag.h"
#include "mc/nbt/FloatTag.h"
#include "mc/nbt/Int64Tag.h"
#include "mc/nbt/IntArrayTag.h"
#include "mc/nbt/IntTag.h"
#include "mc/nbt/ListTag.h"
#include "mc/nbt/ShortTag.h"
#include "mc/nbt/StringTag.h"

#include "ll/api/Expected.h"
#include "ll/api/base/Concepts.h"
#include "ll/api/base/Meta.h"

class CompoundTag;

class CompoundTagVariant {
public:
    using Types = ::ll::meta::TypeList<
        EndTag,
        ByteTag,
        ShortTag,
        IntTag,
        Int64Tag,
        FloatTag,
        DoubleTag,
        ByteArrayTag,
        StringTag,
        ListTag,
        CompoundTag,
        IntArrayTag>;

    using Variant = Types::to<std::variant>;

    Variant mTagStorage;

    LLNDAPI static ll::Expected<CompoundTagVariant>
    parse(std::string_view snbt, optional_ref<size_t> parsedLength = std::nullopt) noexcept;

    [[nodiscard]] constexpr CompoundTagVariant() = default;

    [[nodiscard]] constexpr CompoundTagVariant(CompoundTagVariant&&) = default;

    LL_CLANG_CEXPR CompoundTagVariant& operator=(CompoundTagVariant&&) = default;

    [[nodiscard]] constexpr CompoundTagVariant(CompoundTagVariant const&) = default;

    LL_CLANG_CEXPR CompoundTagVariant& operator=(CompoundTagVariant const&) = default;

    template <class T>
        requires(requires(T o) { mTagStorage = std::move(o); })
    constexpr CompoundTagVariant& operator=(T other) {
        mTagStorage = std::move(other);
        return *this;
    }

    [[nodiscard]] constexpr CompoundTagVariant(std::nullptr_t) {}

    [[nodiscard]] inline bool operator==(CompoundTagVariant const& other) const {
        return mTagStorage == other.mTagStorage;
    }

    [[nodiscard]] inline CompoundTagVariant(Variant tag) : mTagStorage(std::move(tag)) {}

    [[nodiscard]] CompoundTagVariant(std::unique_ptr<Tag>&& tag) {
        if (!tag) {
            return;
        }
        ::ll::meta::visitIndex<Types::size>(static_cast<size_t>(tag->getId()), [&]<size_t I> {
            mTagStorage = std::move((Types::get<I>&)*tag);
        });
    }
    [[nodiscard]] CompoundTagVariant(std::unique_ptr<Tag> const& tag)
    : CompoundTagVariant(tag ? tag->copy() : std::unique_ptr<Tag>{}) {}
    template <std::derived_from<Tag> T>
    [[nodiscard]] constexpr CompoundTagVariant(T tag) : mTagStorage(std::move(tag)) {}
    template <std::integral T>
    [[nodiscard]] constexpr CompoundTagVariant(T integer) { // NOLINT
        constexpr size_t size = sizeof(T);
        if constexpr (size == 1) {
            mTagStorage = ByteTag{integer};
        } else if constexpr (size == 2) {
            mTagStorage = ShortTag{integer};
        } else if constexpr (size == 4) {
            mTagStorage = IntTag{integer};
        } else {
            mTagStorage = Int64Tag{integer};
        }
    }
    [[nodiscard]] inline CompoundTagVariant(std::byte b) : mTagStorage(ByteTag{b}) {} // NOLINT

    [[nodiscard]] inline CompoundTagVariant(float f) : mTagStorage(FloatTag{f}) {} // NOLINT

    [[nodiscard]] inline CompoundTagVariant(double d) : mTagStorage(DoubleTag{d}) {} // NOLINT

    [[nodiscard]] inline CompoundTagVariant(std::string s)
    : mTagStorage(std::in_place_type<StringTag>, std::move(s)) {} // NOLINT

    [[nodiscard]] inline CompoundTagVariant(std::string_view s)
    : mTagStorage(std::in_place_type<StringTag>, s) {} // NOLINT

    template <size_t N>
    [[nodiscard]] inline CompoundTagVariant(char const (&str)[N])
    : CompoundTagVariant(std::string_view{str, N - 1}) {} // NOLINT

    [[nodiscard]] Tag::Type index() const noexcept { return (Tag::Type)mTagStorage.index(); }
    [[nodiscard]] Tag::Type getId() const noexcept { return index(); }

    template <std::derived_from<Tag> T>
    [[nodiscard]] bool hold() const noexcept {
        return std::holds_alternative<T>(mTagStorage);
    }
    // consistency with json
    [[nodiscard]] bool is_array() const noexcept { return hold<ListTag>(); }
    [[nodiscard]] bool is_binary() const noexcept { return hold<ByteArrayTag>() || hold<IntArrayTag>(); }
    [[nodiscard]] bool is_boolean() const noexcept { return hold<ByteTag>(); }
    [[nodiscard]] bool is_null() const noexcept { return hold<EndTag>(); }
    [[nodiscard]] bool is_number_float() const noexcept { return hold<FloatTag>() || hold<DoubleTag>(); }
    [[nodiscard]] bool is_number_integer() const noexcept {
        return hold<ByteTag>() || hold<ShortTag>() || hold<IntTag>() || hold<Int64Tag>();
    }
    [[nodiscard]] bool is_object() const noexcept { return hold<CompoundTag>(); }
    [[nodiscard]] bool is_string() const noexcept { return hold<StringTag>(); }
    [[nodiscard]] bool is_number() const noexcept { return is_number_float() || is_number_integer(); }
    [[nodiscard]] bool is_primitive() const noexcept { return is_null() || is_string() || is_number() || is_binary(); }
    [[nodiscard]] bool is_structured() const noexcept { return is_array() || is_object(); }

    [[nodiscard]] CompoundTag::TagMap const& items() const { return get<CompoundTag>().mTags; }
    [[nodiscard]] CompoundTag::TagMap&       items() { return get<CompoundTag>().mTags; }

    [[nodiscard]] bool contains(std::string_view key) const noexcept {
        if (is_object()) {
            return get<CompoundTag>().contains(key);
        }
        return false;
    }

    [[nodiscard]] bool contains(std::string_view key, Tag::Type type) const noexcept {
        if (is_object()) {
            return get<CompoundTag>().contains(key, type);
        }
        return false;
    }

    template <std::derived_from<Tag> T>
    [[nodiscard]] bool contains(std::string_view key) const noexcept {
        constexpr size_t idx = std::_Meta_find_unique_index<Variant, T>::value;
        return contains(key, (Tag::Type)idx);
    }

    [[nodiscard]] size_t size() const noexcept {
        switch (index()) {
        case Tag::Byte:
        case Tag::Short:
        case Tag::Int:
        case Tag::Int64:
        case Tag::Float:
        case Tag::Double:
        case Tag::String:
            return 1;
        case Tag::List:
            return get<ListTag>().size();
        case Tag::Compound:
            return get<CompoundTag>().size();
        case Tag::IntArray:
            return get<IntArrayTag>().size();
        case Tag::ByteArray:
            return get<ByteArrayTag>().size();
        case Tag::End:
            return 0;
        default:
            _STL_UNREACHABLE;
        }
    }

    template <std::derived_from<Tag> T>
    [[nodiscard]] T& get() {
        return std::get<T>(mTagStorage);
    }

    template <std::derived_from<Tag> T>
    [[nodiscard]] T const& get() const {
        return std::get<T>(mTagStorage);
    }

    [[nodiscard]] Tag& get() { return reinterpret_cast<Tag&>(mTagStorage); }

    [[nodiscard]] Tag const& get() const { return reinterpret_cast<Tag const&>(mTagStorage); }

    template <std::derived_from<Tag> T>
    [[nodiscard]] T& emplace() {
        return mTagStorage.emplace<T>();
    }

    [[nodiscard]] std::unique_ptr<Tag>& operator[](size_t index) {
        if (hold<ListTag>()) {
            return get<ListTag>()[index];
        } else {
            throw std::runtime_error("tag not hold an array");
        }
    }

    [[nodiscard]] std::unique_ptr<Tag> const& operator[](size_t index) const {
        if (hold<ListTag>()) {
            return get<ListTag>()[index];
        } else {
            throw std::runtime_error("tag not hold an array");
        }
    }

    [[nodiscard]] CompoundTagVariant& operator[](char const* index) {
        if (is_null()) {
            mTagStorage = CompoundTag{};
        }
        if (!hold<CompoundTag>()) {
            throw std::runtime_error("tag not hold an object");
        }
        return get<CompoundTag>()[index];
    }

    [[nodiscard]] CompoundTagVariant const& operator[](char const* index) const {
        if (!hold<CompoundTag>()) {
            throw std::runtime_error("tag not hold an object");
        }
        return get<CompoundTag>()[index];
    }

    [[nodiscard]] CompoundTagVariant& operator[](std::string const& index) {
        if (is_null()) {
            mTagStorage = CompoundTag{};
        }
        if (!hold<CompoundTag>()) {
            throw std::runtime_error("tag not hold an object");
        }
        return get<CompoundTag>()[index];
    }

    [[nodiscard]] CompoundTagVariant const& operator[](std::string const& index) const {
        if (!hold<CompoundTag>()) {
            throw std::runtime_error("tag not hold an object");
        }
        return get<CompoundTag>()[index];
    }

    [[nodiscard]] std::unique_ptr<Tag> toUnique() const& {
        return std::visit(
            [](auto& val) -> std::unique_ptr<Tag> { return std::make_unique<std::decay_t<decltype(val)>>(val); },
            mTagStorage
        );
    }
    [[nodiscard]] operator std::unique_ptr<Tag>() const { return toUnique(); } // NOLINT

    [[nodiscard]] std::unique_ptr<Tag> toUnique() && {
        return std::visit(
            [](auto&& val) -> std::unique_ptr<Tag> {
                return std::make_unique<std::decay_t<decltype(val)>>(std::move(val));
            },
            mTagStorage
        );
    }

    LLNDAPI std::string toSnbt(SnbtFormat snbtFormat = SnbtFormat::PrettyFilePrint, uchar indent = 4) const noexcept;

    std::string dump(uchar indent = 4, SnbtFormat snbtFormat = SnbtFormat::PrettyFilePrint) const noexcept {
        return toSnbt(snbtFormat, indent);
    }

    void push_back(CompoundTagVariant val) {
        if (is_null()) {
            mTagStorage = ListTag{};
        }
        if (!hold<ListTag>()) {
            throw std::runtime_error("tag not hold an array");
        }
        get<ListTag>().add(std::move(val).toUnique());
    }

    template <ll::concepts::IsNonCharIntegral T>
    [[nodiscard]] constexpr operator T() const {
        if (is_number()) {
            return std::visit(
                [](auto& val) -> T {
                    if constexpr (std::is_convertible_v<std::decay_t<decltype(val)>, T>) {
                        return (T)val;
                    } else {
                        return {};
                    }
                },
                mTagStorage
            );
        } else {
            throw std::runtime_error("tag not hold an number");
        }
    }
    template <std::floating_point T>
    [[nodiscard]] constexpr operator T() const {
        if (is_number()) {
            return std::visit(
                [](auto& val) -> T {
                    if constexpr (std::is_convertible_v<std::decay_t<decltype(val)>, T>) {
                        return (T)val;
                    } else {
                        return {};
                    }
                },
                mTagStorage
            );
        } else {
            throw std::runtime_error("tag not hold a number");
        }
    }
    [[nodiscard]] constexpr operator std::string const&() const { // NOLINT
        return get<StringTag>();
    }
    [[nodiscard]] constexpr operator std::string&() { // NOLINT
        return get<StringTag>();
    }
    [[nodiscard]] constexpr operator std::string&&() && { // NOLINT
        return std::move(get<StringTag>());
    }
    [[nodiscard]] constexpr operator std::string_view() const { // NOLINT
        return get<StringTag>();
    }
    static CompoundTagVariant object(std::initializer_list<CompoundTag::TagMap::value_type> init = {}) {
        return CompoundTag{init};
    }
    static CompoundTagVariant array(std::initializer_list<CompoundTagVariant> init = {}) { return ListTag{init}; }
};

[[nodiscard]] constexpr ListTag::ListTag(std::vector<CompoundTagVariant> tags) {
    if (tags.empty()) {
        mType = Tag::End;
    } else {
        mType = tags[0].index();
        mList.reserve(tags.size());
        for (auto& tag : tags) {
            mList.emplace_back(std::move(tag).toUnique());
        }
    }
}
[[nodiscard]] constexpr ListTag::ListTag(std::initializer_list<CompoundTagVariant> tags) {
    if (tags.size() == 0) {
        mType = Tag::End;
    } else {
        mType = tags.begin()->index();
        mList.reserve(tags.size());
        for (auto& tag : tags) {
            mList.emplace_back(tag.toUnique());
        }
    }
}
