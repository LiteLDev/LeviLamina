#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkGarbageCollector {
public:
    // prevent constructor by default
    LevelChunkGarbageCollector& operator=(LevelChunkGarbageCollector const&);
    LevelChunkGarbageCollector(LevelChunkGarbageCollector const&);
    LevelChunkGarbageCollector();

public:
    // NOLINTBEGIN
    MCAPI explicit LevelChunkGarbageCollector(class Dimension& dim);

    MCAPI uint64 getPendingDeletesCount() const;

    MCAPI ~LevelChunkGarbageCollector();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void flush();

    // NOLINTEND
};
