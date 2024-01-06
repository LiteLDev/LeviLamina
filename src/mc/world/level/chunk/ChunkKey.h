#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class ChunkKey {
public:
    // prevent constructor by default
    ChunkKey& operator=(ChunkKey const&);
    ChunkKey(ChunkKey const&);
    ChunkKey();

public:
    // NOLINTBEGIN
    // symbol: ??0ChunkKey@@QEAA@AEBVLevelChunk@@@Z
    MCAPI explicit ChunkKey(class LevelChunk const& lc);

    // symbol: ??0ChunkKey@@QEAA@AEBVChunkPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI ChunkKey(class ChunkPos const& pos, DimensionType id);

    // symbol: ?asSpan@ChunkKey@@QEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    MCAPI std::string_view asSpan() const;

    // symbol: ?hashCode@ChunkKey@@QEBA_KXZ
    MCAPI uint64 hashCode() const;

    // NOLINTEND
};
