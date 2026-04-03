#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorHealCause.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorBeforeHealEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor const&>   mEntity;
    ::ll::TypedStorage<1, 1, ::ActorHealCause> mCause;
    ::ll::TypedStorage<4, 4, float>            mHealing;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorBeforeHealEvent& operator=(ActorBeforeHealEvent const&);
    ActorBeforeHealEvent(ActorBeforeHealEvent const&);
    ActorBeforeHealEvent();
};
