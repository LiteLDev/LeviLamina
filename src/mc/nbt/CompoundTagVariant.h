#pragma once

#ifndef COMPOUND_TAG_VARIANT_HEADER
#define COMPOUND_TAG_VARIANT_HEADER

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

class CompoundTag;

class CompoundTagVariant {
public:
    using Variant = std::variant<
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

    Variant mTagStorage;

    [[nodiscard]] constexpr CompoundTagVariant() = default;

    [[nodiscard]] constexpr CompoundTagVariant(std::nullptr_t) {}

    [[nodiscard]] inline bool operator==(CompoundTagVariant const& other) const {
        return mTagStorage == other.mTagStorage;
    }

    [[nodiscard]] inline CompoundTagVariant(Variant tag) : mTagStorage(std::move(tag)) {}

    [[nodiscard]] CompoundTagVariant(std::unique_ptr<Tag>&& tag) {
        if (!tag) {
            return;
        }
        switch (tag->getId()) {
        case Tag::Type::Byte:
            mTagStorage = std::move((ByteTag&)*tag);
        case Tag::Type::Short:
            mTagStorage = std::move((ShortTag&)*tag);
        case Tag::Type::Int:
            mTagStorage = std::move((IntTag&)*tag);
        case Tag::Type::Int64:
            mTagStorage = std::move((Int64Tag&)*tag);
        case Tag::Type::Float:
            mTagStorage = std::move((FloatTag&)*tag);
        case Tag::Type::Double:
            mTagStorage = std::move((DoubleTag&)*tag);
        case Tag::Type::ByteArray:
            mTagStorage = std::move((ByteArrayTag&)*tag);
        case Tag::Type::String:
            mTagStorage = std::move((StringTag&)*tag);
        case Tag::Type::List:
            mTagStorage = std::move((ListTag&)*tag);
        case Tag::Type::Compound:
            mTagStorage = std::move((CompoundTag&)*tag);
        case Tag::Type::IntArray:
            mTagStorage = std::move((IntArrayTag&)*tag);
        case Tag::Type::End:
            mTagStorage = std::move((EndTag&)*tag);
        default:
            std::unreachable();
        }
    }
    [[nodiscard]] CompoundTagVariant(std::unique_ptr<Tag> const& tag) : CompoundTagVariant(std::move(tag->copy())) {}
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
        case Tag::Type::Byte:
        case Tag::Type::Short:
        case Tag::Type::Int:
        case Tag::Type::Int64:
        case Tag::Type::Float:
        case Tag::Type::Double:
        case Tag::Type::String:
            return 1;
        case Tag::Type::List:
            return get<ListTag>().size();
        case Tag::Type::Compound:
            return get<CompoundTag>().size();
        case Tag::Type::IntArray:
            return get<IntArrayTag>().size();
        case Tag::Type::ByteArray:
            return get<ByteArrayTag>().size();
        case Tag::Type::End:
            return 0;
        default:
            std::unreachable();
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

    [[nodiscard]] Tag& get() {
        return std::visit([](auto& val) -> Tag& { return (Tag&)val; }, mTagStorage);
    }

    [[nodiscard]] Tag const& get() const {
        return std::visit([](auto& val) -> Tag const& { return (Tag const&)val; }, mTagStorage);
    }

    [[nodiscard]] std::unique_ptr<Tag>& operator[](size_t index) {
        if (hold<ListTag>()) {
            return get<ListTag>()[index];
        } else {
            throw std::range_error("tag not hold an array");
        }
    }

    [[nodiscard]] std::unique_ptr<Tag> const& operator[](size_t index) const {
        if (hold<ListTag>()) {
            return get<ListTag>()[index];
        } else {
            throw std::range_error("tag not hold an array");
        }
    }

    [[nodiscard]] CompoundTagVariant& operator[](std::string const& index) {
        if (is_null()) {
            mTagStorage = CompoundTag{};
        }
        if (!hold<CompoundTag>()) {
            throw std::range_error("tag not hold an object");
        }
        return get<CompoundTag>()[index];
    }

    [[nodiscard]] CompoundTagVariant const& operator[](std::string const& index) const {
        if (!hold<CompoundTag>()) {
            throw std::range_error("tag not hold an object");
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

    std::string toSnbt(SnbtFormat snbtFormat = SnbtFormat::PrettyFilePrint, uchar indent = 4) const {
        return get().toSnbt(snbtFormat, indent);
    }
    std::string dump(SnbtFormat snbtFormat = SnbtFormat::PrettyFilePrint, uchar indent = 4) const {
        return toSnbt(snbtFormat, indent);
    }

    void push_back(CompoundTagVariant val) {
        if (is_null()) {
            mTagStorage = ListTag{};
        }
        if (!hold<ListTag>()) {
            throw std::range_error("tag not hold an array");
        }
        get<ListTag>().add(std::move(val).toUnique());
    }
};

[[nodiscard]] constexpr ListTag::ListTag(std::vector<CompoundTagVariant> const& tags) {
    if (tags.empty()) {
        mType = Tag::Type::End;
    } else {
        mType = tags[0].index();
        mList.reserve(tags.size());
        for (auto& tag : tags) {
            mList.emplace_back(tag.toUnique());
        }
    }
}
[[nodiscard]] constexpr ListTag::ListTag(std::initializer_list<CompoundTagVariant> tags)
: ListTag(std::vector<CompoundTagVariant>{std::move(tags)}) {}

#endif // COMPOUND_TAG_VARIANT_HEADER
