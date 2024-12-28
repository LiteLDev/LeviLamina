#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientChunkGenerationDifferenceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk306aa8;
    ::ll::UntypedStorage<4, 4>  mUnk949966;
    ::ll::UntypedStorage<4, 4>  mUnk58ae3c;
    ::ll::UntypedStorage<8, 16> mUnke82de4;
    ::ll::UntypedStorage<8, 24> mUnk54702c;
    ::ll::UntypedStorage<8, 8>  mUnk3278a8;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientChunkGenerationDifferenceData& operator=(ClientChunkGenerationDifferenceData const&);
    ClientChunkGenerationDifferenceData(ClientChunkGenerationDifferenceData const&);
    ClientChunkGenerationDifferenceData();
};
