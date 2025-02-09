#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobEffectInstance;
class WeakEntityRef;
// clang-format on

struct ActorAddEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>      mEntity;
    ::ll::TypedStorage<8, 136, ::MobEffectInstance> mMobEffect;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAddEffectEvent& operator=(ActorAddEffectEvent const&);
    ActorAddEffectEvent(ActorAddEffectEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorAddEffectEvent(::ActorAddEffectEvent&&);

    MCAPI ~ActorAddEffectEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorAddEffectEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
