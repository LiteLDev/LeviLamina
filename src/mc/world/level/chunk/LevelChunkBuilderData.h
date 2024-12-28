#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkBuilderData {
public:
    // LevelChunkBuilderData inner types declare
    // clang-format off
    struct ChunkReadyForProcessingElement;
    // clang-format on

    // LevelChunkBuilderData inner types define
    struct ChunkReadyForProcessingElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk8e203f;
        ::ll::UntypedStorage<4, 4>  mUnkc31546;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChunkReadyForProcessingElement& operator=(ChunkReadyForProcessingElement const&);
        ChunkReadyForProcessingElement(ChunkReadyForProcessingElement const&);
        ChunkReadyForProcessingElement();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk335e83;
    ::ll::UntypedStorage<8, 64> mUnk9d1019;
    ::ll::UntypedStorage<8, 32> mUnk46c2a0;
    ::ll::UntypedStorage<8, 24> mUnkb5200d;
    ::ll::UntypedStorage<8, 32> mUnkdfaac4;
    ::ll::UntypedStorage<8, 64> mUnk18e213;
    ::ll::UntypedStorage<8, 24> mUnk242213;
    ::ll::UntypedStorage<4, 4>  mUnkf58007;
    ::ll::UntypedStorage<8, 32> mUnkd4fa22;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkBuilderData& operator=(LevelChunkBuilderData const&);
    LevelChunkBuilderData(LevelChunkBuilderData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelChunkBuilderData();

    MCAPI ~LevelChunkBuilderData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
