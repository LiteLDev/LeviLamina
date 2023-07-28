#pragma once

#ifndef COMPOUND_TAG_VARIANT_HEADER
#define COMPOUND_TAG_VARIANT_HEADER

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/ByteArrayTag.h"
#include "mc/nbt/ByteTag.h"
#include "mc/nbt/DoubleTag.h"
#include "mc/nbt/EndTag.h"
#include "mc/nbt/FloatTag.h"
#include "mc/nbt/Int64Tag.h"
#include "mc/nbt/IntTag.h"
#include "mc/nbt/ListTag.h"
#include "mc/nbt/ShortTag.h"
#include "mc/nbt/StringTag.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/IntArrayTag.h"

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
    /**
     * @symbol ?emplace\@CompoundTagVariant\@\@QEAAAEAVTag\@\@$$QEAV2\@\@Z
     */
    MCAPI class Tag& emplace(class Tag&&); // NOLINT
    /**
     * @symbol ?get\@CompoundTagVariant\@\@QEAAPEAVTag\@\@XZ
     */
    MCAPI class Tag* get(); // NOLINT
    /**
     * @symbol ?get\@CompoundTagVariant\@\@QEBAPEBVTag\@\@XZ
     */
    MCAPI class Tag const* get() const; // NOLINT
    /**
     * @symbol ??CCompoundTagVariant\@\@QEBAPEBVTag\@\@XZ
     */
    MCAPI class Tag const* operator->() const; // NOLINT
    /**
     * @symbol ??1CompoundTagVariant\@\@QEAA\@XZ
     */
    MCAPI ~CompoundTagVariant(); // NOLINT
};
#endif // COMPOUND_TAG_VARIANT_HEADER