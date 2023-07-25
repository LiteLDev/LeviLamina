#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TagMemoryChunk {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAGMEMORYCHUNK
public:
    TagMemoryChunk& operator=(TagMemoryChunk const&) = delete;
    TagMemoryChunk(TagMemoryChunk const&)            = delete;
    TagMemoryChunk()                                 = delete;
#endif

public:
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
};
