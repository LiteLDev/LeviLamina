#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionGroup;
// clang-format on

class ActorDefinitionPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb8e0f6;
    ::ll::UntypedStorage<8, 8> mUnk4098dc;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionPtr();

    MCAPI ActorDefinitionPtr(::ActorDefinitionPtr const& rhs);

    MCAPI ActorDefinitionPtr(::ActorDefinitionGroup& group, ::ActorDefinition& EntityDefinition);

    MCAPI ::ActorDefinitionPtr& operator=(::ActorDefinitionPtr const& rhs);

    MCAPI ~ActorDefinitionPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ActorDefinitionPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorDefinitionPtr const& rhs);

    MCAPI void* $ctor(::ActorDefinitionGroup& group, ::ActorDefinition& EntityDefinition);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
