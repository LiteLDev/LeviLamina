#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class WindChargedMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    WindChargedMobEffect& operator=(WindChargedMobEffect const&);
    WindChargedMobEffect(WindChargedMobEffect const&);
    WindChargedMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WindChargedMobEffect@@UEAA@XZ
    virtual ~WindChargedMobEffect() = default;

    // vIndex: 4, symbol: ?onActorRemovedAfterDeath@WindChargedMobEffect@@UEBAXAEAVActor@@H@Z
    virtual void onActorRemovedAfterDeath(class Actor&, int) const;

    // NOLINTEND
};
