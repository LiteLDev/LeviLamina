#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkMemoryEstimateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mTotalLevelChunkSize;
    ::ll::TypedStorage<8, 8, uint64> mSubChunkLightDataSize;
    ::ll::TypedStorage<8, 8, uint64> mSubChunkBlockDataSize;
    ::ll::TypedStorage<8, 8, uint64> mBiomeData3DSize;
    ::ll::TypedStorage<8, 8, uint64> mBlockTickingQueueSize;
    ::ll::TypedStorage<8, 8, uint64> mMinSubChunkPaletteSize;
    ::ll::TypedStorage<8, 8, double> mAverageSubChunkPaletteSize;
    ::ll::TypedStorage<8, 8, uint64> mMaxSubChunkPaletteSize;
    ::ll::TypedStorage<8, 8, uint64> mMinBiomePaletteSize;
    ::ll::TypedStorage<8, 8, double> mAverageBiomePaletteSize;
    ::ll::TypedStorage<8, 8, uint64> mMaxBiomePaletteSize;
    // NOLINTEND
};
