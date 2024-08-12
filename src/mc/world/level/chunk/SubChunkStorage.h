#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/IDataOutput.h"
#include "mc/world/level/chunk/ISubChunkStoragePaletted.h"
#include "mc/world/level/chunk/PruneType.h"
#include "mc/world/level/chunk/Type.h"

template <typename T>
class SubChunkStorage {
public:
    // NOLINTBEGIN
    static SubChunkStorageUnit::Type           chooseTypeForElementTypeCount(size_t elementCount);
    static std::unique_ptr<SubChunkStorage<T>> makeUniform(T const& element);
    static std::unique_ptr<SubChunkStorage<T>> makeExpanded(SubChunkStorage<T> const& oldStorage);

    virtual ~SubChunkStorage() = default;

    virtual bool isUniform(T const&) const = 0;

    virtual bool isPaletteUniform(T const&) const = 0;

    virtual T const& getElement(uint16_t) const = 0;

    virtual bool setElement(uint16_t, T const&) = 0;

    virtual size_t getElementTypeCapacity() const = 0;

    virtual SubChunkStorageUnit::Type getType() const = 0;

    virtual size_t getMemoryEstimate() const = 0;

    virtual std::unique_ptr<SubChunkStorage<T>> makePrunedCopy(SubChunkStorageUnit::PruneType) const = 0;

    virtual ISubChunkStoragePaletted<T>* asPalettedStorage();

    virtual ISubChunkStoragePaletted<T> const* asPalettedStorage() const;

    // NOLINTEND
};
