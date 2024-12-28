#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

struct GenerationDeterminismTestData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // GenerationDeterminismTestData inner types declare
    // clang-format off
    struct ChunkComparisonData;
    struct SerializedChunk;
    // clang-format on

    // GenerationDeterminismTestData inner types define
    struct SerializedChunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk8004dd;
        ::ll::UntypedStorage<8, 24> mUnkc223db;
        // NOLINTEND

    public:
        // prevent constructor by default
        SerializedChunk& operator=(SerializedChunk const&);
        SerializedChunk(SerializedChunk const&);
        SerializedChunk();
    };

    struct ChunkComparisonData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkd0931d;
        ::ll::UntypedStorage<8, 64> mUnke30910;
        ::ll::UntypedStorage<4, 4>  mUnke4872a;
        ::ll::UntypedStorage<4, 4>  mUnk2e703e;
        ::ll::UntypedStorage<4, 4>  mUnk84ce24;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChunkComparisonData& operator=(ChunkComparisonData const&);
        ChunkComparisonData(ChunkComparisonData const&);
        ChunkComparisonData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdef0de;
    ::ll::UntypedStorage<8, 64> mUnk285b09;
    ::ll::UntypedStorage<8, 24> mUnkf37cf5;
    ::ll::UntypedStorage<8, 8>  mUnka461d0;
    // NOLINTEND

public:
    // prevent constructor by default
    GenerationDeterminismTestData& operator=(GenerationDeterminismTestData const&);
    GenerationDeterminismTestData(GenerationDeterminismTestData const&);
    GenerationDeterminismTestData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GenerationDeterminismTestData() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
