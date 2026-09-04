#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorUpgradeTriggeredEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>             mActor;
    ::ll::TypedStorage<8, 32, ::std::string const> mUpgrade;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUpgradeTriggeredEvent& operator=(ActorUpgradeTriggeredEvent const&);
    ActorUpgradeTriggeredEvent(ActorUpgradeTriggeredEvent const&);
    ActorUpgradeTriggeredEvent();
};
