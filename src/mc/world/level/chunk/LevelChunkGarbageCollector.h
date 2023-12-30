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
    // symbol: ??0LevelChunkGarbageCollector@@QEAA@AEAVDimension@@@Z
    MCAPI explicit LevelChunkGarbageCollector(class Dimension& dim);

    // symbol: ?getPendingDeletesCount@LevelChunkGarbageCollector@@QEBA_KXZ
    MCAPI uint64 getPendingDeletesCount() const;

    // symbol: ??1LevelChunkGarbageCollector@@QEAA@XZ
    MCAPI ~LevelChunkGarbageCollector();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?flush@LevelChunkGarbageCollector@@IEAAXXZ
    MCAPI void flush();

    // NOLINTEND
};
