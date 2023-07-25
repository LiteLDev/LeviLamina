#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameplayUserSuspension {
public:
    // GameplayUserSuspension inner types declare
    // clang-format off

    // clang-format on

    // GameplayUserSuspension inner types define
    enum class State {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEPLAYUSERSUSPENSION
public:
    GameplayUserSuspension& operator=(GameplayUserSuspension const&) = delete;
    GameplayUserSuspension(GameplayUserSuspension const&)            = delete;
    GameplayUserSuspension()                                         = delete;
#endif

public:
    /**
     * @symbol ??0GameplayUserSuspension\@\@QEAA\@VWeakEntityRef\@\@W4State\@0\@\@Z
     */
    MCAPI GameplayUserSuspension(class WeakEntityRef, enum class GameplayUserSuspension::State);
};
