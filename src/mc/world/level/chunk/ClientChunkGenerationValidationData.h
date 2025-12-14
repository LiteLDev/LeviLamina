#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ClientChunkGenerationDifferenceData.h"
#include "mc/world/level/chunk/game_lighting_checker/CheckAreaForLightingResults.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class ChunkSource;
class SubChunkPos;
// clang-format on

struct ClientChunkGenerationValidationData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                   mDeterminismCollectData;
    ::ll::TypedStorage<1, 1, bool>                                   mDeterminismShowDifferentBlockLocations;
    ::ll::TypedStorage<8, 64, ::ClientChunkGenerationDifferenceData> mDeterminismData;
    ::ll::TypedStorage<1, 1, bool>                                   mServerClientShowDifferentBlockLocation;
    ::ll::TypedStorage<8, 64, ::ClientChunkGenerationDifferenceData> mServerClientData;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                             mLastChunkPosChecked;
    ::ll::TypedStorage<8, 16, ::std::map<::ChunkPos, ::std::vector<::std::string>>> mServerSerializedChunks;
    ::ll::TypedStorage<8, 16, ::std::map<::ChunkPos, ::std::vector<::std::string>>> mClientSerializedChunks;
    ::ll::TypedStorage<4, 48, ::Bounds>                                             mChunksToQuery;
    ::ll::TypedStorage<4, 4, int>                                                   mChunksToQueryRadius;
    ::ll::TypedStorage<1, 1, bool>                                                  mRunningQuery;
    ::ll::TypedStorage<1, 1, bool>                                                  mServerRespondedToQuery;
    ::ll::TypedStorage<1, 1, bool>                                                  mClientRespondedToQuery;
    ::ll::TypedStorage<2, 2, short>                                                 mDimensionBottomY;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                            mLastClientPlayerPosition;
    ::ll::TypedStorage<8, 8, ::BlockPalette*>                                       mServerGlobalBlockPalette;
    ::ll::TypedStorage<1, 1, bool>                                                  mRunLightingCheck;
    ::ll::TypedStorage<1, 1, bool>                                                  mServerCompletedLightingCheck;
    ::ll::TypedStorage<1, 1, bool>                                                  mClientCompletedLightingCheck;
    ::ll::TypedStorage<1, 1, bool>                                                  mLightingShowWrongPositionsServer;
    ::ll::TypedStorage<1, 1, bool>                                                  mLightingShowWrongPositionsClient;
    ::ll::TypedStorage<4, 4, int>                                                   mLightingBoundingBoxHalfEdgeSize;
    ::ll::TypedStorage<8, 40, ::GameLightingChecker::CheckAreaForLightingResults>   mServerLightingResults;
    ::ll::TypedStorage<8, 40, ::GameLightingChecker::CheckAreaForLightingResults>   mClientLightingResults;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                   mLightingCheckMutex;
    ::ll::TypedStorage<1, 1, bool>                                                  mTrackRenderedSubChunksRebuilds;
    ::ll::TypedStorage<1, 1, bool>                                                  mShowRenderedSubChunksNotRebuilt;
    ::ll::TypedStorage<4, 4, int>                                                   mNumberOfRenderChunksChecked;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPos>> mSubChunksNotRebuiltSinceLastSubChunkRequest;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>           mRenderChunkCheckMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientChunkGenerationValidationData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _captureChunkData(::std::map<::ChunkPos, ::std::vector<::std::string>>& data, ::ChunkSource& chunkSource);
    // NOLINTEND
};
