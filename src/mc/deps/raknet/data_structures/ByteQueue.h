#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

class ByteQueue {
public:
    // prevent constructor by default
    ByteQueue& operator=(ByteQueue const&);
    ByteQueue(ByteQueue const&);

public:
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
};

}; // namespace DataStructures
