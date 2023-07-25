#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkGarbageCollector {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKGARBAGECOLLECTOR
public:
    LevelChunkGarbageCollector& operator=(LevelChunkGarbageCollector const&) = delete;
    LevelChunkGarbageCollector(LevelChunkGarbageCollector const&)            = delete;
    LevelChunkGarbageCollector()                                             = delete;
#endif

public:
    /**
     * @symbol ??0LevelChunkGarbageCollector\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI LevelChunkGarbageCollector(class Dimension&);
    /**
     * @symbol ?getPendingDeletesCount\@LevelChunkGarbageCollector\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getPendingDeletesCount() const;
    /**
     * @symbol ??1LevelChunkGarbageCollector\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunkGarbageCollector();

    // protected:
    /**
     * @symbol ?flush\@LevelChunkGarbageCollector\@\@IEAAXXZ
     */
    MCAPI void flush();

protected:
};
