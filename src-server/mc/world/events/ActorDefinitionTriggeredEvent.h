#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorDefinitionTriggeredEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&> mActor;
    ::ll::TypedStorage<8, 32, ::std::string const> mEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionTriggeredEvent& operator=(ActorDefinitionTriggeredEvent const&);
    ActorDefinitionTriggeredEvent(ActorDefinitionTriggeredEvent const&);
    ActorDefinitionTriggeredEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionTriggeredEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
