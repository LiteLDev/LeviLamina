#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubChunkLightUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke310d2;
    ::ll::UntypedStorage<1, 1> mUnk68f288;
    ::ll::UntypedStorage<1, 1> mUnk73b183;
    ::ll::UntypedStorage<1, 1> mUnk34e152;
    ::ll::UntypedStorage<1, 1> mUnkf7c75d;
    ::ll::UntypedStorage<1, 1> mUnk55b813;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkLightUpdate& operator=(SubChunkLightUpdate const&);
    SubChunkLightUpdate(SubChunkLightUpdate const&);
    SubChunkLightUpdate();
};
