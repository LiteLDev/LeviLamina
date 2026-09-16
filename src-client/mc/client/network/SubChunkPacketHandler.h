#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SubChunkPacketPayload.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/chunk/DeserializationChanges.h"
#include "mc/world/level/chunk/LevelChunkBlockActorStorage.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class ChunkLocalHeight;
namespace ClientBlobCache { class Cache; }
// clang-format on

class SubChunkPacketHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                          mChunkPos;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                      mSubChunkPos;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                     mDimensionType;
    ::ll::TypedStorage<8, 584, ::SubChunkPacketPayload::SubChunkPacketData const> mPacketData;
    ::ll::TypedStorage<1, 1, bool>                                                mHasSetRequestTime;
    ::ll::TypedStorage<1, 1, bool>                                                mHasDoneInsertionTask;
    ::ll::TypedStorage<8, 184, ::LevelChunkBlockActorStorage>                     mBlockEntitiesMap;
    ::ll::TypedStorage<4, 4, float>                                               mCacheRequestAbortTime;
    ::ll::TypedStorage<1, 1, bool const>                                          mCacheEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                mHasSetAbortTimer;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>             mStartCacheRequestTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                          mCacheCheckAccumulatedTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlobCache::Cache> const>  mCache;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mCacheBuffer;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>             mStartTime;
    ::ll::TypedStorage<1, 1, bool>                                                mSubChunkCheckSumMismatch;
    ::ll::TypedStorage<8, 88, ::DeserializationChanges>                           mDeserializationChanges;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkPacketHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SubChunkPacketHandler(
        ::SubChunkPacketPayload::SubChunkPacketData const& packetData,
        ::std::shared_ptr<::ClientBlobCache::Cache>        cache,
        ::DimensionType                                    dimension,
        ::SubChunkPos const&                               packetCenter
    );

    MCAPI void _compareHeightMapsForLightingFixup(
        ::std::array<::ChunkLocalHeight, 256>& oldHeights,
        ::std::array<::ChunkLocalHeight, 256>& newHeights
    );

    MCAPI ~SubChunkPacketHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::SubChunkPacketPayload::SubChunkPacketData const& packetData,
        ::std::shared_ptr<::ClientBlobCache::Cache>        cache,
        ::DimensionType                                    dimension,
        ::SubChunkPos const&                               packetCenter
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
