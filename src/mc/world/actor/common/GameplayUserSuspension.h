#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameplayUserSuspension {
public:
    // GameplayUserSuspension inner types define
    enum class State {};

public:
    // prevent constructor by default
    GameplayUserSuspension& operator=(GameplayUserSuspension const&) = delete;
    GameplayUserSuspension(GameplayUserSuspension const&)            = delete;
    GameplayUserSuspension()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0GameplayUserSuspension\@\@QEAA\@VWeakEntityRef\@\@W4State\@0\@\@Z
     */
    MCAPI GameplayUserSuspension(class WeakEntityRef, enum class GameplayUserSuspension::State);
    // NOLINTEND
};
