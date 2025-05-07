#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class InstantaneousMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InstantaneousMobEffect() /*override*/ = default;

    // vIndex: 7
    virtual bool isInstantaneous() const /*override*/;

    // vIndex: 9
    virtual bool isDurationEffectTick(int remainingDuration, int) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInstantaneous() const;

    MCNAPI bool $isDurationEffectTick(int remainingDuration, int) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
