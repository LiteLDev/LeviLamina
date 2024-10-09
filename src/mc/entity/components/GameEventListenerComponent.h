#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventListenerComponent {
public:
    // prevent constructor by default
    GameEventListenerComponent& operator=(GameEventListenerComponent const&);
    GameEventListenerComponent(GameEventListenerComponent const&);

public:
    // NOLINTBEGIN
    MCAPI GameEventListenerComponent();

    MCAPI GameEventListenerComponent(class GameEventListenerComponent&& other);

    MCAPI bool initialize(std::unique_ptr<class GameEventDynamicRegistration> registration);

    MCAPI class GameEventListenerComponent& operator=(class GameEventListenerComponent&& other);

    MCAPI class GameEventDynamicRegistration* tryGetListenerRegistration() const;

    MCAPI ~GameEventListenerComponent();

    // NOLINTEND
};
