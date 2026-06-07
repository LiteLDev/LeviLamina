#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileChunkInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    chunkID;
    ::ll::TypedStorage<8, 8, uint64> startByte;
    ::ll::TypedStorage<8, 8, uint64> endByte;
    // NOLINTEND

public:
    // prevent constructor by default
    FileChunkInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileChunkInfo(int _chunk, uint64 _startByte, uint64 _endByte);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int _chunk, uint64 _startByte, uint64 _endByte);
    // NOLINTEND
};
