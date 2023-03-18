/**
 * @file  ChunkKey.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkKey.
 *
 */
class ChunkKey {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKKEY
public:
    class ChunkKey& operator=(class ChunkKey const &) = delete;
    ChunkKey(class ChunkKey const &) = delete;
    ChunkKey() = delete;
#endif

public:
    /**
     * @symbol ??0ChunkKey\@\@QEAA\@AEBVLevelChunk\@\@\@Z
     */
    MCAPI ChunkKey(class LevelChunk const &);
    /**
     * @symbol ??0ChunkKey\@\@QEAA\@AEBVChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI ChunkKey(class ChunkPos const &, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?asSpan\@ChunkKey\@\@QEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::basic_string_view<char, struct std::char_traits<char>> asSpan() const;
    /**
     * @symbol ?hashCode\@ChunkKey\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 hashCode() const;

};
