#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FileChunkInfo;
// clang-format on

struct FileChunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> data;
    ::ll::TypedStorage<8, 24, ::FileChunkInfo>      info;
    // NOLINTEND
};
