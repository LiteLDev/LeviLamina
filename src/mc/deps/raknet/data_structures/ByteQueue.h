#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

class ByteQueue {
public:
    // prevent constructor by default
    ByteQueue& operator=(ByteQueue const&) = delete;
    ByteQueue(ByteQueue const&)            = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ByteQueue@DataStructures@@QEAA@XZ
    MCAPI ByteQueue();

    // symbol: ?Clear@ByteQueue@DataStructures@@QEAAXPEBDI@Z
    MCAPI void Clear(char const*, uint);

    // symbol: ?GetBytesWritten@ByteQueue@DataStructures@@QEBAIXZ
    MCAPI uint GetBytesWritten() const;

    // symbol: ?IncrementReadOffset@ByteQueue@DataStructures@@QEAAXI@Z
    MCAPI void IncrementReadOffset(uint);

    // symbol: ?PeekContiguousBytes@ByteQueue@DataStructures@@QEBAPEADPEAI@Z
    MCAPI char* PeekContiguousBytes(uint*) const;

    // symbol: ?ReadBytes@ByteQueue@DataStructures@@QEAA_NPEADI_N@Z
    MCAPI bool ReadBytes(char*, uint, bool);

    // symbol: ?WriteBytes@ByteQueue@DataStructures@@QEAAXPEBDI0I@Z
    MCAPI void WriteBytes(char const*, uint, char const*, uint);

    // symbol: ??1ByteQueue@DataStructures@@QEAA@XZ
    MCAPI ~ByteQueue();

    // NOLINTEND
};

}; // namespace DataStructures
