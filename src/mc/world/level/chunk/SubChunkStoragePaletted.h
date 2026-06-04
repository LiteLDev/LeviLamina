#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/world/level/chunk/AppendOnlyAtomicLookupTable.h"
#include "mc/world/level/chunk/ISubChunkStoragePaletted.h"

// Because of MSVC inline, some functions might be unavailable.

template <typename T, unsigned long BITS_PER_ELEMENT, SubChunkStorageUnit::Type SERIALIZATION_TYPE>
class SubChunkStoragePaletted : public ISubChunkStoragePaletted<T> {
public:
    using PACKED_WORD    = uint32_t;
    using GenericPalette = GenericPaletteBase<T>;
    using VolumeView     = ChunkVolume::VolumeOf<T>::ConstSubViewType;

    static size_t const PALETTE_CAPACITY = 1UL << BITS_PER_ELEMENT;

    static size_t const ELEMENT_PER_WORD = 32 / BITS_PER_ELEMENT;

    PACKED_WORD mElement[(4096 + ELEMENT_PER_WORD - 1) / ELEMENT_PER_WORD];

    AppendOnlyAtomicLookupTable<T const*, PALETTE_CAPACITY> mPalette;

public:
    MCAPI SubChunkStoragePaletted(IDataInput& stream, RuntimeDeserializationLookup<T> const& lookUp);
    MCAPI SubChunkStoragePaletted(IDataInput& stream, PersistentDeserializationLookup<T> const& lookUp);
    MCAPI SubChunkStoragePaletted(SubChunkStorage<T> const& upgradeFrom);
    MCAPI SubChunkStoragePaletted(T const& uniformElement);
    MCAPI SubChunkStoragePaletted(VolumeView const& view, GenericPalette const& palette);

    template <unsigned long IN_CAPACITY>
    MCAPI SubChunkStoragePaletted(SubChunkStorage<T> const& toPrune, std::bitset<IN_CAPACITY> const& usedIndices);

    MCAPI bool isUniform(T const&) const override;

    MCAPI bool isPaletteUniform(T const&) const override;

    MCAPI T const& getElement(uint16_t) const override;

    MCAPI bool trySetElement(uint16_t, T const&) override;

    MCAPI size_t getElementTypeCapacity() const override;

    MCAPI bool hasAvailableElementTypeCapacity() const override;

    MCAPI SubChunkStorageUnit::Type getType() const override;

    MCAPI size_t getMemoryEstimate() const override;

    MCAPI std::unique_ptr<SubChunkStorage<T>> makePrunedCopy(SubChunkStorageUnit::PruneType) const override;

    MCAPI void fetchElementInCylinder(
        BlockPos const&,
        BlockPos const&,
        uint32_t,
        uint32_t,
        brstd::function_ref<bool(T const&), bool(T const&)> const&,
        std::vector<BlockDataFetchResult<T>>&
    ) const override;

    MCAPI void fetchElementInBox(
        BlockPos const&,
        BoundingBox const&,
        brstd::function_ref<bool(T const&), bool(T const&)> const&,
        std::vector<BlockDataFetchResult<T>>&
    ) const override;

    MCAPI bool hasAnyElementMatchingFilterInPalette(std::function<bool(T const&)> const&) const override;

    MCAPI void _serialize(IDataOutput&, RuntimeSerializationLookup<T> const&) const override;

    MCAPI void _serialize(IDataOutput&, PersistentSerializationLookup<T> const&) const override;

    MCAPI gsl::span<unsigned int const> getPackedElement() const override;

    MCAPI size_t getBitsPerElement() const override;

    MCAPI gsl::span<T const* const> getPaletteSnapshot() const override;

    MCAPI void _zeroIndicesGreaterEqualThan(uint16_t max);
};

template <typename T>
class SubChunkStoragePaletted<T, 0UL, static_cast<SubChunkStorageUnit::Type>(0)> : public ISubChunkStoragePaletted<T> {
public:
    using GenericPalette = GenericPaletteBase<T>;
    using VolumeView     = ChunkVolume::VolumeOf<T>::ConstSubViewType;

    AppendOnlyAtomicLookupTable<T const*, 1UL> mPalette;

public:
    MCAPI SubChunkStoragePaletted(IDataInput& stream, RuntimeDeserializationLookup<T> const& lookUp);
    MCAPI SubChunkStoragePaletted(IDataInput& stream, PersistentDeserializationLookup<T> const& lookUp);
    MCAPI SubChunkStoragePaletted(SubChunkStorage<T> const& upgradeFrom);
    MCAPI SubChunkStoragePaletted(T const& uniformElement);
    MCAPI SubChunkStoragePaletted(VolumeView const& view, GenericPalette const& palette);

    MCAPI bool isUniform(T const&) const override;

    MCAPI bool isPaletteUniform(T const&) const override;

    MCAPI T const& getElement(uint16_t) const override;

    MCAPI bool trySetElement(uint16_t, T const&) override;

    MCAPI size_t getElementTypeCapacity() const override;

    MCAPI bool hasAvailableElementTypeCapacity() const override;

    MCAPI SubChunkStorageUnit::Type getType() const override;

    MCAPI size_t getMemoryEstimate() const override;

    MCAPI std::unique_ptr<SubChunkStorage<T>> makePrunedCopy(SubChunkStorageUnit::PruneType) const override;

    MCAPI void fetchElementInCylinder(
        BlockPos const&,
        BlockPos const&,
        uint32_t,
        uint32_t,
        brstd::function_ref<bool(T const&), bool(T const&)> const&,
        std::vector<BlockDataFetchResult<T>>&
    ) const override;

    MCAPI void fetchElementInBox(
        BlockPos const&,
        BoundingBox const&,
        brstd::function_ref<bool(T const&), bool(T const&)> const&,
        std::vector<BlockDataFetchResult<T>>&
    ) const override;

    MCAPI bool hasAnyElementMatchingFilterInPalette(std::function<bool(T const&)> const&) const override;

    MCAPI void _serialize(IDataOutput&, RuntimeSerializationLookup<T> const&) const override;

    MCAPI void _serialize(IDataOutput&, PersistentSerializationLookup<T> const&) const override;

    MCAPI gsl::span<unsigned int const> getPackedElement() const override;

    MCAPI size_t getBitsPerElement() const override;

    MCAPI gsl::span<T const* const> getPaletteSnapshot() const override;

    MCAPI void _zeroIndicesGreaterEqualThan(uint16_t max);
};
