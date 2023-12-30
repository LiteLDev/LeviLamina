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
    // symbol: ??0ByteQueue@DataStructures@@QEAA@XZ
    MCAPI ByteQueue();

    // symbol: ?Clear@ByteQueue@DataStructures@@QEAAXPEBDI@Z
    MCAPI void Clear(char const* file, uint line);

    // symbol: ?GetBytesWritten@ByteQueue@DataStructures@@QEBAIXZ
    MCAPI uint GetBytesWritten() const;

    // symbol: ?IncrementReadOffset@ByteQueue@DataStructures@@QEAAXI@Z
    MCAPI void IncrementReadOffset(uint length);

    // symbol: ?PeekContiguousBytes@ByteQueue@DataStructures@@QEBAPEADPEAI@Z
    MCAPI char* PeekContiguousBytes(uint* outLength) const;

    // symbol: ?ReadBytes@ByteQueue@DataStructures@@QEAA_NPEADI_N@Z
    MCAPI bool ReadBytes(char* out, uint maxLengthToRead, bool peek);

    // symbol: ?WriteBytes@ByteQueue@DataStructures@@QEAAXPEBDI0I@Z
    MCAPI void WriteBytes(char const* in, uint length, char const* file, uint line);

    // symbol: ??1ByteQueue@DataStructures@@QEAA@XZ
    MCAPI ~ByteQueue();

    // NOLINTEND
};

}; // namespace DataStructures
