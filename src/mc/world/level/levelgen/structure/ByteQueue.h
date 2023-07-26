#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

class ByteQueue {

public:
    // prevent constructor by default
    ByteQueue& operator=(ByteQueue const&) = delete;
    ByteQueue(ByteQueue const&)            = delete;

public:
    /**
     * @symbol ??0ByteQueue\@DataStructures\@\@QEAA\@XZ
     */
    MCAPI ByteQueue(); // NOLINT
    /**
     * @symbol ?Clear\@ByteQueue\@DataStructures\@\@QEAAXPEBDI\@Z
     */
    MCAPI void Clear(char const*, unsigned int); // NOLINT
    /**
     * @symbol ?GetBytesWritten\@ByteQueue\@DataStructures\@\@QEBAIXZ
     */
    MCAPI unsigned int GetBytesWritten() const; // NOLINT
    /**
     * @symbol ?IncrementReadOffset\@ByteQueue\@DataStructures\@\@QEAAXI\@Z
     */
    MCAPI void IncrementReadOffset(unsigned int); // NOLINT
    /**
     * @symbol ?PeekContiguousBytes\@ByteQueue\@DataStructures\@\@QEBAPEADPEAI\@Z
     */
    MCAPI char* PeekContiguousBytes(unsigned int*) const; // NOLINT
    /**
     * @symbol ?ReadBytes\@ByteQueue\@DataStructures\@\@QEAA_NPEADI_N\@Z
     */
    MCAPI bool ReadBytes(char*, unsigned int, bool); // NOLINT
    /**
     * @symbol ?WriteBytes\@ByteQueue\@DataStructures\@\@QEAAXPEBDI0I\@Z
     */
    MCAPI void WriteBytes(char const*, unsigned int, char const*, unsigned int); // NOLINT
    /**
     * @symbol ??1ByteQueue\@DataStructures\@\@QEAA\@XZ
     */
    MCAPI ~ByteQueue(); // NOLINT
};

}; // namespace DataStructures
