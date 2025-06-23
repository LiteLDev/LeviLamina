#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionModifier;
// clang-format on

struct ActorDefinitionStartedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                                  mActor;
    ::ll::TypedStorage<8, 32, ::std::string const>                      mEvent;
    ::ll::TypedStorage<8, 8, ::std::vector<::ActorDefinitionModifier>&> mDefinitionModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionStartedEvent& operator=(ActorDefinitionStartedEvent const&);
    ActorDefinitionStartedEvent(ActorDefinitionStartedEvent const&);
    ActorDefinitionStartedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionStartedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
