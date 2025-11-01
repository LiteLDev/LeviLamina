#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionModifier;
// clang-format on

struct ActorDefinitionEndedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                                        mActor;
    ::ll::TypedStorage<8, 32, ::std::string const>                            mEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionModifier> const> mDefinitionModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionEndedEvent& operator=(ActorDefinitionEndedEvent const&);
    ActorDefinitionEndedEvent(ActorDefinitionEndedEvent const&);
    ActorDefinitionEndedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionEndedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
