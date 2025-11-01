#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileChunkInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> chunkID;
    ::ll::TypedStorage<8, 8, uint64> startByte;
    ::ll::TypedStorage<8, 8, uint64> endByte;
    // NOLINTEND

};
