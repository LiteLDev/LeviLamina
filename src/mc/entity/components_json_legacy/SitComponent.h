#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SitComponent {
public:
    // prevent constructor by default
    SitComponent& operator=(SitComponent const&);
    SitComponent(SitComponent const&);
    SitComponent();

public:
    // NOLINTBEGIN
    MCAPI bool getInteraction(class Actor& actor, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND
};
