#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventListenerRegistry {
public:
    // prevent constructor by default
    GameEventListenerRegistry& operator=(GameEventListenerRegistry const&);
    GameEventListenerRegistry(GameEventListenerRegistry const&);
    GameEventListenerRegistry();

public:
    // NOLINTBEGIN
    MCAPI gsl::final_action<std::function<void()>> registerListener(class GameEventListener& gameEventListener);

    // NOLINTEND
};
