#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorInteraction {
public:
    // prevent constructor by default
    ActorInteraction& operator=(ActorInteraction const&);
    ActorInteraction(ActorInteraction const&);
    ActorInteraction();

public:
    // NOLINTBEGIN
    MCAPI explicit ActorInteraction(bool noCapture);

    MCAPI void capture(std::function<void()> interactFunc);

    MCAPI std::string const& getInteractText() const;

    MCAPI void interact();

    MCAPI void setInteractText(std::string const& text);

    MCAPI bool shouldCapture() const;

    MCAPI ~ActorInteraction();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(bool noCapture);

    MCAPI void dtor$();

    // NOLINTEND
};
