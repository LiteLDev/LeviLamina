#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NameableComponent {
public:
    // prevent constructor by default
    NameableComponent& operator=(NameableComponent const&);
    NameableComponent(NameableComponent const&);

public:
    // NOLINTBEGIN
    MCAPI NameableComponent();

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    MCAPI void nameEntity(class Actor& owner, std::string const& name);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
