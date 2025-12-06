#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
struct ActorEventResponse;
// clang-format on

struct ActorDefinitionModifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>               mAddGroups;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>               mRemoveGroups;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>>    mTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorEventResponse const*>> mResponses;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionModifier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionModifier(::ActorDefinitionModifier const&);

    MCAPI ::ActorDefinitionModifier& operator=(::ActorDefinitionModifier const&);

    MCAPI ::ActorDefinitionModifier& operator=(::ActorDefinitionModifier&&);

    MCAPI ~ActorDefinitionModifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionModifier const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
