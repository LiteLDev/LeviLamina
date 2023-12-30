#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Seasons {
public:
    // prevent constructor by default
    Seasons& operator=(Seasons const&);
    Seasons(Seasons const&);
    Seasons();

public:
    // NOLINTBEGIN
    // symbol: ??0Seasons@@QEAA@AEAVDimension@@@Z
    MCAPI explicit Seasons(class Dimension& d);

    // symbol: ?postProcess@Seasons@@QEAAXAEAVLevelChunk@@AEAVBlockSource@@AEBVChunkPos@@@Z
    MCAPI void postProcess(class LevelChunk& lc, class BlockSource& region, class ChunkPos const& cp);

    // symbol: ?tick@Seasons@@QEAAXXZ
    MCAPI void tick();

    // symbol: ??1Seasons@@QEAA@XZ
    MCAPI ~Seasons();

    // NOLINTEND
};
