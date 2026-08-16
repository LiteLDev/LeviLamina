#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class InstantaneousMobEffect : public ::MobEffect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InstantaneousMobEffect() /*override*/;

    virtual bool isInstantaneous() const /*override*/;

    virtual bool isDurationEffectTick(int remainingDuration, int) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isInstantaneous() const;

    MCAPI bool $isDurationEffectTick(int remainingDuration, int) const;


    // NOLINTEND
};
