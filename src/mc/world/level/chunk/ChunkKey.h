#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class ChunkKey {
public:
    // prevent constructor by default
    ChunkKey& operator=(ChunkKey const&);
    ChunkKey(ChunkKey const&);
    ChunkKey();

public:
    // NOLINTBEGIN
    MCAPI explicit ChunkKey(class LevelChunk const& lc);

    MCAPI ChunkKey(class ChunkPos const& pos, DimensionType id);

    MCAPI std::string_view asSpan() const;

    MCAPI uint64 hashCode() const;

    // NOLINTEND
};
