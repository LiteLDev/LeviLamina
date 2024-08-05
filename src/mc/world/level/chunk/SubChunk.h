#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/LockGuard.h"
#include "mc/world/level/block/utils/BlockDataFetchResult.h"
#include "mc/world/level/chunk/PruneType.h"
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

struct SubChunk {
public:
    // SubChunk inner types define
    enum class BlockLayer : schar {
        Standard = 0,
        Extra    = 1,
        Count    = 2,
    };

    enum class SubChunkState : int {
        Invalid                    = -1,
        Normal                     = 0,
        IsLightingSystemSubChunk   = 1,
        NeedsRequest               = 2,
        ReceivedResponseFromServer = 3,
        ProcessingSubChunk         = 4,
        WaitingForCacheResponse    = 5,
        ProcessedSubChunk          = 6,
        RequestFinished            = 7,
    };

public:
    // prevent constructor by default
    SubChunk& operator=(SubChunk const&);
    SubChunk(SubChunk const&);
    SubChunk();

public:
    // NOLINTBEGIN
    MCAPI SubChunk(class Block const* initBlock, bool maxSkyLight, bool fullyLit, class SpinLock& spinLock, schar);

    MCAPI void
    deserialize(class IDataInput& stream, class BlockPalette const& palette, class SubChunkPos const& subChunkPos, std::optional<struct DeserializationChanges*>);

    MCAPI void fetchBlocks(
        class BlockPos const& subChunkOrigin,
        class BlockPos const& volumeOrigin,
        short                 minHeight,
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

    MCAPI void
    initialize(class Block const* initBlock, bool maxSkyLight, bool fullyLit, class SpinLock& spinLock, schar);

    MCAPI bool isEmpty() const;

    MCAPI bool isPlaceHolderSubChunk() const;

    MCAPI bool isUniform(class Block const& block) const;

    MCAPI struct SubChunk& operator=(struct SubChunk&& rhs);

    MCAPI void prune(::SubChunkStorageUnit::PruneType);

    MCAPI std::string recalculateHashAndSerialize(bool);

    MCAPI void reset(class Block const* resetBlock, bool maxSkyLight, bool fullyLit);

    MCAPI bool safeToModify() const;

    MCAPI void serialize(class IDataOutput& stream, bool network) const;

    MCAPI void setBlock(ushort, class Block const&);

    MCAPI void setBlockLight(ushort index, uchar lightValue);

    MCAPI void setFromBlockVolume(class BlockVolume const& box, short height);

    MCAPI void setSkyLight(ushort, uchar);

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
