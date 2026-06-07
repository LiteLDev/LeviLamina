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
    MCAPI ByteQueue();

    MCAPI void Clear(char const* file, uint line);

    MCAPI uint GetBytesWritten() const;

    MCAPI void IncrementReadOffset(uint length);

    MCAPI char* PeekContiguousBytes(uint* outLength) const;

    MCAPI bool ReadBytes(char* out, uint maxLengthToRead, bool peek);

    MCAPI void WriteBytes(char const* in, uint length, char const* file, uint line);

    MCAPI ~ByteQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace DataStructures
