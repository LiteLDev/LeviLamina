#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class OozingMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    OozingMobEffect& operator=(OozingMobEffect const&);
    OozingMobEffect(OozingMobEffect const&);
    OozingMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OozingMobEffect@@UEAA@XZ
    virtual ~OozingMobEffect() = default;

    // vIndex: 4, symbol: ?onActorRemovedAfterDeath@OozingMobEffect@@UEBAXAEAVActor@@H@Z
    virtual void onActorRemovedAfterDeath(class Actor&, int) const;

    // NOLINTEND
};
