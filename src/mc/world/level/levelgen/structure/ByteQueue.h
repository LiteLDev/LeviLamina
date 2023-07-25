#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

class ByteQueue {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATASTRUCTURES_BYTEQUEUE
public:
    ByteQueue& operator=(ByteQueue const&) = delete;
    ByteQueue(ByteQueue const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ByteQueue\@DataStructures\@\@QEAA\@XZ
     */
    MCAPI ByteQueue();
    /**
     * @symbol ?Clear\@ByteQueue\@DataStructures\@\@QEAAXPEBDI\@Z
     */
    MCAPI void Clear(char const*, unsigned int);
    /**
     * @symbol ?GetBytesWritten\@ByteQueue\@DataStructures\@\@QEBAIXZ
     */
    MCAPI unsigned int GetBytesWritten() const;
    /**
     * @symbol ?IncrementReadOffset\@ByteQueue\@DataStructures\@\@QEAAXI\@Z
     */
    MCAPI void IncrementReadOffset(unsigned int);
    /**
     * @symbol ?PeekContiguousBytes\@ByteQueue\@DataStructures\@\@QEBAPEADPEAI\@Z
     */
    MCAPI char* PeekContiguousBytes(unsigned int*) const;
    /**
     * @symbol ?ReadBytes\@ByteQueue\@DataStructures\@\@QEAA_NPEADI_N\@Z
     */
    MCAPI bool ReadBytes(char*, unsigned int, bool);
    /**
     * @symbol ?WriteBytes\@ByteQueue\@DataStructures\@\@QEAAXPEBDI0I\@Z
     */
    MCAPI void WriteBytes(char const*, unsigned int, char const*, unsigned int);
    /**
     * @symbol ??1ByteQueue\@DataStructures\@\@QEAA\@XZ
     */
    MCAPI ~ByteQueue();
};

}; // namespace DataStructures
