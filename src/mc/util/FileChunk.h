#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FileChunkInfo.h"

struct FileChunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> data;
    ::ll::TypedStorage<8, 24, ::FileChunkInfo>      info;
    // NOLINTEND
};
