#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

class ByteQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char*> data;
    ::ll::TypedStorage<4, 4, uint>  readOffset;
    ::ll::TypedStorage<4, 4, uint>  writeOffset;
    ::ll::TypedStorage<4, 4, uint>  lengthAllocated;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void WriteBytes(char const* in, uint length, char const* file, uint line);
    // NOLINTEND
};

} // namespace DataStructures
