#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ChunkPerformanceData;
// clang-format on

class LevelChunkPerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf6c20b;
    ::ll::UntypedStorage<4, 4>  mUnk48c0ae;
    ::ll::UntypedStorage<1, 1>  mUnk8b573f;
    ::ll::UntypedStorage<8, 8>  mUnkd52427;
    ::ll::UntypedStorage<8, 64> mUnk13e530;
    ::ll::UntypedStorage<1, 1>  mUnkf39a71;
    ::ll::UntypedStorage<1, 1>  mUnk63c6e8;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkPerformanceTelemetry& operator=(LevelChunkPerformanceTelemetry const&);
    LevelChunkPerformanceTelemetry(LevelChunkPerformanceTelemetry const&);
    LevelChunkPerformanceTelemetry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void sendPerformanceTelemetry(::Bedrock::NonOwnerPointer<::ChunkPerformanceData> chunkPerformanceData);
    // NOLINTEND
};
