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
        class EndTag,
        class ByteTag,
        class ShortTag,
        class IntTag,
        class Int64Tag,
        class FloatTag,
        class DoubleTag,
        class ByteArrayTag,
        class StringTag,
        class ListTag,
        class CompoundTag,
        class IntArrayTag>;

    Variant mTagStorage;

    [[nodiscard]] CompoundTagVariant()                          = default;
    [[nodiscard]] CompoundTagVariant(CompoundTagVariant const&) = default;
    CompoundTagVariant& operator=(const CompoundTagVariant&)    = default;

    [[nodiscard]] CompoundTagVariant(Variant tag) : mTagStorage(std::move(tag)) {}

    template <std::derived_from<Tag> T>
    [[nodiscard]] CompoundTagVariant(T tag) : mTagStorage(std::move(tag)) {}

    template <typename T>
    [[nodiscard]] bool hold() const {
        return std::holds_alternative<T>(mTagStorage);
    }

    template <typename T>
    [[nodiscard]] T& get() {
        return std::get<T>(mTagStorage);
    }

    template <typename T>
    [[nodiscard]] T const& get() const {
        return std::get<T>(mTagStorage);
    }

    [[nodiscard]] CompoundTagVariant& operator[](std::string const& index) {
        if (!hold<CompoundTag>()) { mTagStorage = CompoundTag{}; }
        return std::get<CompoundTag>(mTagStorage)[index];
    }

    std::unique_ptr<Tag> toUnique() const {
        switch (mTagStorage.index()) {
        case 0:
            return std::make_unique<EndTag>(get<EndTag>());
        case 1:
            return std::make_unique<ByteTag>(get<ByteTag>());
        case 2:
            return std::make_unique<ShortTag>(get<ShortTag>());
        case 3:
            return std::make_unique<IntTag>(get<IntTag>());
        case 4:
            return std::make_unique<Int64Tag>(get<Int64Tag>());
        case 5:
            return std::make_unique<FloatTag>(get<FloatTag>());
        case 6:
            return std::make_unique<DoubleTag>(get<DoubleTag>());
        case 7:
            return std::make_unique<ByteArrayTag>(get<ByteArrayTag>());
        case 8:
            return std::make_unique<StringTag>(get<StringTag>());
        case 9:
            return std::make_unique<ListTag>(get<ListTag>());
        case 10:
            return std::make_unique<CompoundTag>(get<CompoundTag>());
        case 11:
            return std::make_unique<IntArrayTag>(get<IntArrayTag>());
        default:
            return nullptr;
        }
    }

public:
    // NOLINTBEGIN
    // symbol: ?emplace@CompoundTagVariant@@QEAAAEAVTag@@$$QEAV2@@Z
    MCAPI class Tag& emplace(class Tag&&);

    // symbol: ?get@CompoundTagVariant@@QEAAPEAVTag@@XZ
    MCAPI class Tag* get();

    // symbol: ?get@CompoundTagVariant@@QEBAPEBVTag@@XZ
    MCAPI class Tag const* get() const;

    // symbol: ??1CompoundTagVariant@@QEAA@XZ
    MCAPI ~CompoundTagVariant();

    // NOLINTEND
};

#endif // COMPOUND_TAG_VARIANT_HEADER