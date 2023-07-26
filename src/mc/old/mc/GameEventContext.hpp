/**
 * @file  GameEventContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure GameEventContext.
 *
 */
struct GameEventContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTCONTEXT
public:
    struct GameEventContext& operator=(struct GameEventContext const &) = delete;
    GameEventContext(struct GameEventContext const &) = delete;
    GameEventContext() = delete;
#endif

public:
    /**
     * @symbol  ??0GameEventContext\@\@QEAA\@AEBVVec3\@\@PEAVActor\@\@PEBVBlock\@\@\@Z
     */
    MCAPI GameEventContext(class Vec3 const &, class Actor *, class Block const *);

};