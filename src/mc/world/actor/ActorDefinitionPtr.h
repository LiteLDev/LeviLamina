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
    // prevent constructor by default
    ActorDefinitionPtr& operator=(ActorDefinitionPtr const&);
    ActorDefinitionPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDefinitionPtr(::ActorDefinitionPtr const& rhs);

    MCNAPI ActorDefinitionPtr(::ActorDefinitionGroup& group, ::ActorDefinition& EntityDefinition);

    MCNAPI ~ActorDefinitionPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ActorDefinitionPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionPtr const& rhs);

    MCNAPI void* $ctor(::ActorDefinitionGroup& group, ::ActorDefinition& EntityDefinition);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
