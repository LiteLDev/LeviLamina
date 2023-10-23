#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkPos.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class ChunkKey {
    ChunkPos pos;					// this+0x0
	AutomaticID<Dimension, int> id; // this+0x8
public:
    // prevent constructor by default
    ChunkKey& operator=(ChunkKey const&);
    ChunkKey(ChunkKey const&);
    ChunkKey();

public:
    // NOLINTBEGIN
    // symbol: ??0ChunkKey@@QEAA@AEBVLevelChunk@@@Z
    MCAPI explicit ChunkKey(class LevelChunk const&);

    // symbol: ??0ChunkKey@@QEAA@AEBVChunkPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI ChunkKey(class ChunkPos const&, DimensionType);

    // symbol: ?asSpan@ChunkKey@@QEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    MCAPI std::string_view asSpan() const;

    // symbol: ?hashCode@ChunkKey@@QEBA_KXZ
    MCAPI uint64 hashCode() const;

    // NOLINTEND
};
