/**
 * @file  MoveInputState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct MoveInputState {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUTSTATE
public:
    struct MoveInputState& operator=(struct MoveInputState const &) = delete;
    MoveInputState(struct MoveInputState const &) = delete;
    MoveInputState() = delete;
#endif

public:
    /**
     * @symbol  ?clear\@MoveInputState\@\@QEAAX_N\@Z
     */
    MCAPI void clear(bool);

};