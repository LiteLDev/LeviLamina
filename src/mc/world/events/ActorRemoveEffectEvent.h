#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobEffectInstance;
class WeakEntityRef;
// clang-format on

struct ActorRemoveEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>            mEntity;
    ::ll::TypedStorage<8, 136, ::MobEffectInstance const> mMobEffect;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorRemoveEffectEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
