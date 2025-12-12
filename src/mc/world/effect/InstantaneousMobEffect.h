#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class InstantaneousMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InstantaneousMobEffect() /*override*/ = default;

    virtual bool isInstantaneous() const /*override*/;

    virtual bool isDurationEffectTick(int remainingDuration, int) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isInstantaneous() const;

    MCAPI bool $isDurationEffectTick(int remainingDuration, int) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
