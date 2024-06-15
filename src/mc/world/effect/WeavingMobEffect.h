#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class WeavingMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    WeavingMobEffect& operator=(WeavingMobEffect const&);
    WeavingMobEffect(WeavingMobEffect const&);
    WeavingMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WeavingMobEffect@@UEAA@XZ
    virtual ~WeavingMobEffect() = default;

    // vIndex: 4, symbol: ?onActorRemovedAfterDeath@WeavingMobEffect@@UEBAXAEAVActor@@H@Z
    virtual void onActorRemovedAfterDeath(class Actor&, int) const;

    // symbol: ?COBWEB_SLOWDOWN_OVERRIDE@WeavingMobEffect@@2VVec3@@B
    MCAPI static class Vec3 const COBWEB_SLOWDOWN_OVERRIDE;

    // NOLINTEND
};
