#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAddEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk8298a6;
    ::ll::UntypedStorage<8, 136> mUnkf4ca67;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAddEffectEvent& operator=(ActorAddEffectEvent const&);
    ActorAddEffectEvent(ActorAddEffectEvent const&);
    ActorAddEffectEvent();

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
    MCAPI void $dtor();
    // NOLINTEND
};
