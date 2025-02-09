#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class WeakEntityRef;
// clang-format on

struct ActorDieEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                       mEntity;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDamageSource>> mDamageSource;
    // NOLINTEND
};
