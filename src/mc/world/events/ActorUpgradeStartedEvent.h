#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionModifier;
// clang-format on

struct ActorUpgradeStartedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                                  mActor;
    ::ll::TypedStorage<8, 32, ::std::string const>                      mUpgrade;
    ::ll::TypedStorage<8, 8, ::std::vector<::ActorDefinitionModifier>&> mDefinitionModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUpgradeStartedEvent& operator=(ActorUpgradeStartedEvent const&);
    ActorUpgradeStartedEvent(ActorUpgradeStartedEvent const&);
    ActorUpgradeStartedEvent();
};
