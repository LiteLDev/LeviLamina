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
        default:
            mTagStorage = std::move((EndTag&)*tag);
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

    [[nodiscard]] inline CompoundTagVariant(std::string s) : mTagStorage(StringTag{std::move(s)}) {} // NOLINT

    [[nodiscard]] Tag::Type index() const { return (Tag::Type)mTagStorage.index(); }
    template <std::derived_from<Tag> T>
    [[nodiscard]] bool hold() const {
        return std::holds_alternative<T>(mTagStorage);
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

    [[nodiscard]] CompoundTagVariant operator[](size_t index) const {
        if (hold<ListTag>()) {
            return get<ListTag>()[index];
        } else if (hold<IntArrayTag>()) {
            return get<IntArrayTag>()[index];
        } else if (hold<ByteArrayTag>()) {
            return get<ByteArrayTag>()[index];
        } else {
            throw std::range_error("tag not hold a integer index range");
        }
    }

    [[nodiscard]] CompoundTagVariant& operator[](std::string const& index) {
        if (!hold<CompoundTag>()) {
            mTagStorage = CompoundTag{};
        }
        return get<CompoundTag>()[index];
    }

    std::unique_ptr<Tag> toUnique() const {
        return std::visit(
            [](auto&& val) -> std::unique_ptr<Tag> {
                return std::make_unique<std::decay_t<decltype(val)>>(std::forward<decltype(val)>(val));
            },
            mTagStorage
        );
    }
};

#endif // COMPOUND_TAG_VARIANT_HEADER