#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TagMemoryChunk {

public:
    size_t                           mElements;
    size_t                           mSize;
    std::unique_ptr<unsigned char[]> mBuffer;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?copy\@TagMemoryChunk\@\@QEBA?AU1\@XZ
     */
    MCAPI struct TagMemoryChunk copy() const;
    /**
     * @symbol ??9TagMemoryChunk\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator!=(struct TagMemoryChunk const&) const;
    /**
     * @symbol ??1TagMemoryChunk\@\@QEAA\@XZ
     */
    MCAPI ~TagMemoryChunk();
    // NOLINTEND
};
