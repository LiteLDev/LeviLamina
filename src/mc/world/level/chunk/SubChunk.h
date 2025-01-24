#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockDataFetchResult.h"
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPalette;
class BlockPos;
class BlockVolume;
class BoundingBox;
class IDataInput;
class IDataOutput;
class SpinLockImpl;
class SubChunkBrightnessStorage;
class SubChunkPos;
struct DeserializationChanges;
struct DirtyTicksCounter;
// clang-format on

struct SubChunk {
public:
    // SubChunk inner types define
    using Layer = uchar;

    enum class BlockLayer : uchar {
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
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::DirtyTicksCounter>                               mDirtyTicksCounter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubChunkBrightnessStorage>>    mSkyLight;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubChunkBrightnessStorage>>    mBlockLight;
    ::ll::TypedStorage<1, 1, bool>                                              mHasMaxSkyLight;
    ::ll::TypedStorage<4, 4, ::SubChunk::SubChunkState>                         mSubChunkState;
    ::ll::TypedStorage<1, 1, bool>                                              mNeedsInitLighting;
    ::ll::TypedStorage<1, 1, bool>                                              mNeedsClientLighting;
    ::ll::TypedStorage<8, 16, ::std::unique_ptr<::SubChunkStorage<::Block>>[2]> mBlocks;
    ::ll::TypedStorage<8, 16, ::SubChunkStorage<::Block>* [2]>                  mBlocksReadPtr;
    ::ll::TypedStorage<8, 8, ::SpinLockImpl*>                                   mWriteLock;
    ::ll::TypedStorage<8, 8, uint64>                                            mHash;
    ::ll::TypedStorage<1, 1, bool>                                              mHashDirty;
    ::ll::TypedStorage<1, 1, char>                                              mAbsoluteIndex;
    ::ll::TypedStorage<1, 1, bool>                                              mIsReplacementSubChunk;
    ::ll::TypedStorage<1, 1, uchar>                                             mRenderChunkTrackingVersionNumber;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunk& operator=(SubChunk const&);
    SubChunk(SubChunk const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    SubChunk(::Block const* initBlock, bool maxSkyLight, bool fullyLit, ::SpinLockImpl& spinLock, schar absoluteIndex);

    MCAPI void _resetLight(bool maxSkyLight, bool maxLight);

    MCAPI void _setBlock(uchar layer, ushort index, ::Block const& block);

    MCAPI void deserialize(
        ::IDataInput&                              stream,
        ::BlockPalette const&                      palette,
        ::SubChunkPos const&                       subChunkPos,
        ::std::optional<::DeserializationChanges*> deserializationChanges
    );

    MCAPI void fetchBlocks(
        ::BlockPos const& subChunkOrigin,
        ::BlockPos const& volumeOrigin,
        short             dimensionMinHeight,
        ::BlockVolume&    volume
    ) const;

    MCAPI void fetchBlocksInBox(
        ::BlockPos const&                               positionOfChunk,
        ::BoundingBox const&                            box,
        ::std::function<bool(::Block const&)> const&    predicate,
        ::std::vector<::BlockDataFetchResult<::Block>>& output
    ) const;

    MCAPI void fetchBlocksInCylinder(
        ::BlockPos const&                               positionOfChunk,
        ::BlockPos const&                               pos,
        uint                                            radius,
        uint                                            height,
        ::std::function<bool(::Block const&)> const&    predicate,
        ::std::vector<::BlockDataFetchResult<::Block>>& output
    ) const;

    MCFOLD schar getAbsoluteIndex() const;

    MCAPI ::Block const& getBlock(ushort index) const;

    MCAPI ::Block const& getExtraBlock(ushort index) const;

    MCAPI ::SubChunkBrightnessStorage::LightPair getLight(ushort idx) const;

    MCFOLD ::SubChunk::SubChunkState getSubChunkState() const;

    MCAPI bool isEmpty() const;

    MCAPI bool isPlaceHolderSubChunk() const;

    MCAPI bool isUniform(::Block const& block) const;

    MCAPI ::SubChunk& operator=(::SubChunk&& rhs);

    MCAPI void prune();

    MCAPI void prune(::SubChunkStorageUnit::PruneType pruneType);

    MCAPI ::std::string recalculateHashAndSerialize(bool network);

    MCAPI void reset(::Block const* resetBlock, bool maxSkyLight, bool fullyLit);

    MCAPI bool safeToModify() const;

    MCAPI void serialize(::IDataOutput& stream, bool network) const;

    MCAPI void setBlock(ushort index, ::Block const& block);

    MCAPI void setBlockLight(ushort index, uchar lightValue);

    MCAPI void setBlocksToUniform(::Block const& initBlock, bool maxSkyLight, bool fullyLit);

    MCAPI void setFromBlockVolume(::BlockVolume const& box, short height);

    MCAPI void setSkyLight(ushort index, uchar lightValue);

    MCAPI void setSubChunkState(::SubChunk::SubChunkState subChunkState);

    MCAPI ~SubChunk();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void flushGarbageCollectors();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Block const* initBlock, bool maxSkyLight, bool fullyLit, ::SpinLockImpl& spinLock, schar absoluteIndex);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
