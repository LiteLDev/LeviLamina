#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkGarbageCollector {

public:
    // prevent constructor by default
    LevelChunkGarbageCollector& operator=(LevelChunkGarbageCollector const&) = delete;
    LevelChunkGarbageCollector(LevelChunkGarbageCollector const&)            = delete;
    LevelChunkGarbageCollector()                                             = delete;

public:
    /**
     * @symbol ??0LevelChunkGarbageCollector\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI LevelChunkGarbageCollector(class Dimension&); // NOLINT
    /**
     * @symbol ?getPendingDeletesCount\@LevelChunkGarbageCollector\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getPendingDeletesCount() const; // NOLINT
    /**
     * @symbol ??1LevelChunkGarbageCollector\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunkGarbageCollector(); // NOLINT

    // protected:
    /**
     * @symbol ?flush\@LevelChunkGarbageCollector\@\@IEAAXXZ
     */
    MCAPI void flush(); // NOLINT

protected:
};
