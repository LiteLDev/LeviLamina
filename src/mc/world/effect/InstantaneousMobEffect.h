#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class InstantaneousMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    InstantaneousMobEffect& operator=(InstantaneousMobEffect const&);
    InstantaneousMobEffect(InstantaneousMobEffect const&);
    InstantaneousMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InstantaneousMobEffect() = default;

    // vIndex: 7
    virtual bool isInstantaneous() const;

    // vIndex: 9
    virtual bool isDurationEffectTick(int remainingDuration, int) const;

    MCAPI InstantaneousMobEffect(
        uint               _id,
        std::string const& resourceName,
        std::string const& locName,
        bool               isHarmful,
        int                color,
        int                icon
    );

    // NOLINTEND
};
