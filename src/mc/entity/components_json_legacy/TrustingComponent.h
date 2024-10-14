#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrustingComponent {
public:
    // prevent constructor by default
    TrustingComponent& operator=(TrustingComponent const&);
    TrustingComponent(TrustingComponent const&);

public:
    // NOLINTBEGIN
    MCAPI TrustingComponent();

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _becomeTrusting(class Actor& owner);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
