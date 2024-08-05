#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBlockEventMap {
public:
    // prevent constructor by default
    InsideBlockEventMap();

public:
    // NOLINTBEGIN
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const&);

    MCAPI InsideBlockEventMap(
        class Block const&                  block,
        bool                                watchEnter,
        bool                                watchExit,
        bool                                ignoreStates,
        class ActorDefinitionTrigger const& enteredEvent,
        class ActorDefinitionTrigger const& exitedEvent
    );

    MCAPI gsl::not_null<class Block const*> getBlock() const;

    MCAPI class ActorDefinitionTrigger const& getEnteredEvent() const;

    MCAPI class ActorDefinitionTrigger const& getExitedEvent() const;

    MCAPI bool isActorCurrentlyInside() const;

    MCAPI bool isIgnoringStates() const;

    MCAPI bool isWatchingIfActorEnters() const;

    MCAPI bool isWatchingIfActorExits() const;

    MCAPI class InsideBlockEventMap& operator=(class InsideBlockEventMap const&);

    MCAPI void setCurrentlyInside(bool);

    MCAPI void setWasInside(bool wasInside);

    MCAPI bool wasActorInsideLastTick() const;

    MCAPI ~InsideBlockEventMap();

    // NOLINTEND
};
