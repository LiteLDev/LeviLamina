#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BucketableComponent {
public:
    // prevent constructor by default
    BucketableComponent& operator=(BucketableComponent const&);
    BucketableComponent(BucketableComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BucketableComponent@@QEAA@XZ
    MCAPI BucketableComponent();

    // symbol: ?getInteraction@BucketableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // symbol: ?initFromDefinition@BucketableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& owner);

    // symbol: ?implInteraction@BucketableComponent@@SAXAEAVActor@@AEAVPlayer@@@Z
    MCAPI static void implInteraction(class Actor& owner, class Player& player);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?WATER_BUCKET_USEABLE_VERSION@BucketableComponent@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const WATER_BUCKET_USEABLE_VERSION;

    // NOLINTEND
};
