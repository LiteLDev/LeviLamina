#pragma once

#include "ISubChunkStoragePaletted.h"
#include "mc/_HeaderOutputPredefine.h"

#include "mc/world/level/chunk/AppendOnlyAtomicLookupTable.h"

template <typename T, unsigned long BITS_PER_ELEMENT, SubChunkStorageUnit::Type SERIALIZATION_TYPE>
class SubChunkStoragePaletted : public ISubChunkStoragePaletted<T> {
public:
    using PACKED_WORD = uint32_t;

    static size_t const PALETTE_CAPACITY = 1UL << BITS_PER_ELEMENT;

    static size_t const ELEMENT_PER_WORD = 32 / BITS_PER_ELEMENT;

    PACKED_WORD mElement[(4096 + ELEMENT_PER_WORD - 1) / ELEMENT_PER_WORD];

    AppendOnlyAtomicLookupTable<T const*, PALETTE_CAPACITY> mPalette;
};

template <typename T>
class SubChunkStoragePaletted<T, 0UL, static_cast<SubChunkStorageUnit::Type>(0)> : public ISubChunkStoragePaletted<T> {
public:
    AppendOnlyAtomicLookupTable<T const*, 1UL> mPalette;
};
