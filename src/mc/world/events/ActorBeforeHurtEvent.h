#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
// clang-format on

struct ActorBeforeHurtEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor const&>             mEntity;
    ::ll::TypedStorage<8, 8, ::ActorDamageSource const&> mSource;
    ::ll::TypedStorage<4, 4, float>                      mDamage;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorBeforeHurtEvent& operator=(ActorBeforeHurtEvent const&);
    ActorBeforeHurtEvent(ActorBeforeHurtEvent const&);
    ActorBeforeHurtEvent();
};
