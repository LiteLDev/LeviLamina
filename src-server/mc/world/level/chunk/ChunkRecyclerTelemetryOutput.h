#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkRecyclerTelemetryOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, float>>> mBucketPercentages;
    ::ll::TypedStorage<8, 8, uint64> mGeneratedChunks;
    ::ll::TypedStorage<8, 8, uint64> mDeletedChunks;
    ::ll::TypedStorage<8, 8, uint64> mTimeSeconds;
    ::ll::TypedStorage<8, 8, uint64> mChunkRadiusAvg;
    ::ll::TypedStorage<8, 8, uint64> mActiveOverworldChunksAvg;
    ::ll::TypedStorage<8, 8, uint64> mMaximumOverworldPlayers;
    ::ll::TypedStorage<8, 8, uint64> mSimulationDistance;
    ::ll::TypedStorage<4, 4, float> mTotalGenTimeSeconds;
    ::ll::TypedStorage<4, 4, float> mOverworldPlayerAvg;
    ::ll::TypedStorage<1, 1, bool> mIsFlatWorld;
    ::ll::TypedStorage<1, 1, bool> mIsClientSideGenerationEnabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChunkRecyclerTelemetryOutput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
