#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/chunk/ClientChunkGenerationDifferenceData.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
// clang-format on

struct GenerationDeterminismTestData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // GenerationDeterminismTestData inner types declare
    // clang-format off
    struct ChunkComparisonData;
    struct SerializedChunk;
    // clang-format on

    // GenerationDeterminismTestData inner types define
    struct ChunkComparisonData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                         mSlice;
        ::ll::TypedStorage<8, 64, ::ClientChunkGenerationDifferenceData> mDifferenceData;
        ::ll::TypedStorage<4, 4, uint>                                   mClientServerChunks;
        ::ll::TypedStorage<4, 4, uint>                                   mServerOnlyChunks;
        ::ll::TypedStorage<4, 4, uint>                                   mClientOnlyChunks;
        // NOLINTEND
    };

    struct SerializedChunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mClient;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mServer;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mBiomeOverride;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::map<::ChunkPos, ::GenerationDeterminismTestData::SerializedChunk>>>
        mSerializedChunks;
    ::ll::TypedStorage<8, 24, ::std::vector<::GenerationDeterminismTestData::ChunkComparisonData>>
                                                  mChunkComparisonDataList;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mSharedMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenerationDeterminismTestData() /*override*/ = default;
    // NOLINTEND
};
