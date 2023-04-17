/**
 * @file  GameplayUserSuspension.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GameplayUserSuspension {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEPLAYUSERSUSPENSION
public:
    class GameplayUserSuspension& operator=(class GameplayUserSuspension const &) = delete;
    GameplayUserSuspension(class GameplayUserSuspension const &) = delete;
    GameplayUserSuspension() = delete;
#endif

public:
    /**
     * @symbol ??0GameplayUserSuspension\@\@QEAA\@VWeakEntityRef\@\@W4State\@0\@\@Z
     */
    MCAPI GameplayUserSuspension(class WeakEntityRef, enum class GameplayUserSuspension::State);

};
