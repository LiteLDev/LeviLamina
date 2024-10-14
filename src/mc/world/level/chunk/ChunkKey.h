#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkPos.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class ChunkKey {
public:
    ChunkPos      pos; // this+0x0
    DimensionType id;  // this+0x8

public:
    // NOLINTBEGIN
    MCAPI explicit ChunkKey(class LevelChunk const& lc);

    MCAPI ChunkKey(class ChunkPos const& pos, DimensionType id);

    MCAPI std::string_view asSpan() const;

    MCAPI uint64 hashCode() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
