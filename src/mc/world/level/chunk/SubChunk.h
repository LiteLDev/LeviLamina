#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/LockGuard.h"
#include "mc/world/level/BlockDataFetchResult.h"
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"

struct SubChunk {
public:
    // SubChunk inner types define
    enum class SubChunkState {};

public:
    // prevent constructor by default
    SubChunk& operator=(SubChunk const&);
    SubChunk(SubChunk const&);
    SubChunk();

public:
    // NOLINTBEGIN
    MCAPI SubChunk(
        class Block const* initBlock,
        bool               maxSkyLight,
        bool               fullyLit,
        class SpinLock&    spinLock,
        schar              absoluteIndex
    );

    MCAPI void deserialize(
        class IDataInput&                             stream,
        class BlockPalette const&                     palette,
        class SubChunkPos const&                      subChunkPos,
        std::optional<struct DeserializationChanges*> deserializationChanges
    );

    MCAPI void fetchBlocks(
        class BlockPos const& subChunkOrigin,
        class BlockPos const& volumeOrigin,
        short                 dimensionMinHeight,
        class BlockVolume&    volume
    ) const;

    MCAPI void fetchBlocksInBox(
        class BlockPos const&                                 positionOfChunk,
        class BoundingBox const&                              box,
        std::function<bool(class Block const&)> const&        predicate,
        std::vector<class BlockDataFetchResult<class Block>>& output
    ) const;

    MCAPI void fetchBlocksInCylinder(
        class BlockPos const&                                 positionOfChunk,
        class BlockPos const&                                 pos,
        uint                                                  radius,
        uint                                                  height,
        std::function<bool(class Block const&)> const&        predicate,
        std::vector<class BlockDataFetchResult<class Block>>& output
    ) const;

    MCAPI schar getAbsoluteIndex() const;

    MCAPI class Block const& getBlock(ushort index) const;

    MCAPI class Block const& getExtraBlock(ushort index) const;

    MCAPI struct SubChunkBrightnessStorage::LightPair getLight(ushort idx) const;

    MCAPI ::SubChunk::SubChunkState getSubChunkState() const;

    MCAPI void initialize(
        class Block const* initBlock,
        bool               maxSkyLight,
        bool               fullyLit,
        class SpinLock&    spinLock,
        schar              absoluteIndex
    );

    MCAPI bool isEmpty() const;

    MCAPI bool isPlaceHolderSubChunk() const;

    MCAPI bool isUniform(class Block const& block) const;

    MCAPI struct SubChunk& operator=(struct SubChunk&& rhs);

    MCAPI void prune(::SubChunkStorageUnit::PruneType pruneType);

    MCAPI std::string recalculateHashAndSerialize(bool network);

    MCAPI void reset(class Block const* resetBlock, bool maxSkyLight, bool fullyLit);

    MCAPI bool safeToModify() const;

    MCAPI void serialize(class IDataOutput& stream, bool network) const;

    MCAPI void setBlock(ushort index, class Block const& block);

    MCAPI void setBlockLight(ushort index, uchar lightValue);

    MCAPI void setFromBlockVolume(class BlockVolume const& box, short height);

    MCAPI void setSkyLight(ushort index, uchar lightValue);

    MCAPI ~SubChunk();

    MCAPI static void flushGarbageCollectors();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _createBlockLightStorage();

    MCAPI void
    _replaceBlocks(uchar layer, std::unique_ptr<class SubChunkStorage<class Block>> newStorage, class Bedrock::Threading::LockGuard<class SpinLock>&);

    MCAPI void _resetLight(bool maxSkyLight, bool maxLight);

    MCAPI void _setBlock(uchar layer, ushort index, class Block const& block);

    // NOLINTEND
};
