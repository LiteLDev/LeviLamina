#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkGarbageCollector {

public:
    // prevent constructor by default
    LevelChunkGarbageCollector& operator=(LevelChunkGarbageCollector const&) = delete;
    LevelChunkGarbageCollector(LevelChunkGarbageCollector const&)            = delete;
    LevelChunkGarbageCollector()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0LevelChunkGarbageCollector\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI LevelChunkGarbageCollector(class Dimension&);
    /**
     * @symbol ?getPendingDeletesCount\@LevelChunkGarbageCollector\@\@QEBA_KXZ
     */
    MCAPI uint64_t getPendingDeletesCount() const;
    /**
     * @symbol ??1LevelChunkGarbageCollector\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunkGarbageCollector();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?flush\@LevelChunkGarbageCollector\@\@IEAAXXZ
     */
    MCAPI void flush();
    // NOLINTEND
};
