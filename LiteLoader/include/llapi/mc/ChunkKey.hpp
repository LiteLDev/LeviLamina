/**
 * @file  ChunkKey.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -926720895
     * @symbol ??0ChunkKey@@QEAA@AEBVLevelChunk@@@Z
     */
    MCAPI ChunkKey(class LevelChunk const &);
    /**
     * @hash   -199627030
     * @symbol ??0ChunkKey@@QEAA@AEBVChunkPos@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI ChunkKey(class ChunkPos const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   332130792
     * @symbol ?asSpan@ChunkKey@@QEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    MCAPI class gsl::basic_string_span<char const, -1> asSpan() const;
    /**
     * @hash   569576459
     * @symbol ?hashCode@ChunkKey@@QEBA_KXZ
     */
    MCAPI unsigned __int64 hashCode() const;

};