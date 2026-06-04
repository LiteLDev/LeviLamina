#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/level/BlockDataFetchResult.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/chunk_volume/VolumeOf.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/Type.h"

template <typename T>
class ISubChunkStoragePaletted;

template <typename T>
using RuntimeSerializationLookup = brstd::function_ref<unsigned long(T const&), unsigned long(T const&)>;

template <typename T>
using PersistentSerializationLookup = brstd::function_ref<CompoundTag const*(T const&), CompoundTag const*(T const&)>;

template <typename T>
using RuntimeDeserializationLookup = brstd::function_ref<T const*(unsigned long), T const*(unsigned long)>;

template <typename T>
using PersistentDeserializationLookup = brstd::function_ref<T const*(CompoundTag const&), T const*(CompoundTag const&)>;

template <typename T>
using GenericPaletteBase = gsl::span<T const*>;

template <typename T>
class SubChunkStorage {
public:
    // NOLINTBEGIN
    using VolumeView      = ChunkVolume::VolumeOf<T>::SubViewType;
    using ConstVolumeView = ChunkVolume::VolumeOf<T>::ConstSubViewType;

    MCAPI static SubChunkStorageUnit::Type           chooseTypeForElementTypeCount(size_t elementCount);
    MCAPI static std::unique_ptr<SubChunkStorage<T>> makeUniform(T const& element);
    MCAPI static std::unique_ptr<SubChunkStorage<T>> makeFromVolume(SubChunkStorage<T>::ConstVolumeView const& view);

    virtual ~SubChunkStorage() = default;

    virtual bool isUniform(T const&) const = 0;

    virtual bool isPaletteUniform(T const&) const = 0;

    virtual T const& getElement(uint16_t) const = 0;

    virtual bool trySetElement(uint16_t, T const&) = 0;

    virtual size_t getElementTypeCapacity() const = 0;

    virtual bool hasAvailableElementTypeCapacity() const = 0;

    virtual SubChunkStorageUnit::Type getType() const = 0;

    virtual size_t getMemoryEstimate() const = 0;

    virtual std::unique_ptr<SubChunkStorage<T>> makePrunedCopy(SubChunkStorageUnit::PruneType) const = 0;

    virtual ISubChunkStoragePaletted<T>& asPalettedStorage() = 0;

    virtual ISubChunkStoragePaletted<T> const& asPalettedStorage() const = 0;

    virtual void fetchElementInCylinder(
        BlockPos const&,
        BlockPos const&,
        uint32_t,
        uint32_t,
        brstd::function_ref<bool(T const&), bool(T const&)> const&,
        std::vector<BlockDataFetchResult<T>>&
    ) const = 0;

    virtual void fetchElementInBox(
        BlockPos const&,
        BoundingBox const&,
        brstd::function_ref<bool(T const&), bool(T const&)> const&,
        std::vector<BlockDataFetchResult<T>>&
    ) const = 0;

    virtual bool hasAnyElementMatchingFilterInPalette(std::function<bool(T const&)> const&) const = 0;

    virtual void _serialize(IDataOutput&, RuntimeSerializationLookup<T> const&) const = 0;

    virtual void _serialize(IDataOutput&, PersistentSerializationLookup<T> const&) const = 0;

    // NOLINTEND
};
