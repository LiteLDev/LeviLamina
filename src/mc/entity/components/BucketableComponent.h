#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BucketableComponent {
public:
    // prevent constructor by default
    BucketableComponent& operator=(BucketableComponent const&);
    BucketableComponent(BucketableComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BucketableComponent();

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    MCAPI void initFromDefinition(class Actor& owner);

    MCAPI static void implInteraction(class Actor& owner, class Player& player);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const WATER_BUCKET_USEABLE_VERSION;

    // NOLINTEND
};
