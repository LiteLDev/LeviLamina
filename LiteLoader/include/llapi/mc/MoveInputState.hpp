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
     * @symbol ??8MoveInputState\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct MoveInputState const &) const;
    /**
     * @symbol ?wantsSneak\@MoveInputState\@\@QEBA_NXZ
     */
    MCAPI bool wantsSneak() const;

};