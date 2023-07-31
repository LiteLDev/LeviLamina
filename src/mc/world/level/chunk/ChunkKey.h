#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class ChunkKey {

public:
    // prevent constructor by default
    ChunkKey& operator=(ChunkKey const&) = delete;
    ChunkKey(ChunkKey const&)            = delete;
    ChunkKey()                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ChunkKey\@\@QEAA\@AEBVLevelChunk\@\@\@Z
     */
    MCAPI ChunkKey(class LevelChunk const&);
    /**
     * @symbol ??0ChunkKey\@\@QEAA\@AEBVChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI ChunkKey(class ChunkPos const&, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?asSpan\@ChunkKey\@\@QEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    MCAPI std::string_view asSpan() const;
    /**
     * @symbol ?hashCode\@ChunkKey\@\@QEBA_KXZ
     */
    MCAPI uint64_t hashCode() const;
    // NOLINTEND
};
