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
    CompoundTagVariant& operator=(CompoundTagVariant const&)    = default;

    [[nodiscard]] CompoundTagVariant(Variant tag) : mTagStorage(std::move(tag)) {}

    template <std::derived_from<Tag> T>
    [[nodiscard]] CompoundTagVariant(T tag) : mTagStorage(std::move(tag)) {}

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

    [[nodiscard]] CompoundTagVariant& operator[](std::string const& index) {
        if (!hold<CompoundTag>()) {
            mTagStorage = CompoundTag{};
        }
        return std::get<CompoundTag>(mTagStorage)[index];
    }

    std::unique_ptr<Tag> toUnique() const {
        return std::visit(
            [](auto&& val) -> std::unique_ptr<Tag> { return std::make_unique<std::decay_t<decltype(val)>>(val); },
            mTagStorage
        );
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