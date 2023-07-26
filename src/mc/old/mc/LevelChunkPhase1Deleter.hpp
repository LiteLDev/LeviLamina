/**
 * @file  LevelChunkPhase1Deleter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure LevelChunkPhase1Deleter.
 *
 */
struct LevelChunkPhase1Deleter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKPHASE1DELETER
public:
    struct LevelChunkPhase1Deleter& operator=(struct LevelChunkPhase1Deleter const &) = delete;
    LevelChunkPhase1Deleter(struct LevelChunkPhase1Deleter const &) = delete;
    LevelChunkPhase1Deleter() = delete;
#endif

public:
    /**
     * @symbol  ??RLevelChunkPhase1Deleter\@\@QEAAXPEAVLevelChunk\@\@\@Z
     */
    MCAPI void operator()(class LevelChunk *);

};