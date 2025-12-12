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
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup*> mGroup;
    ::ll::TypedStorage<8, 8, ::ActorDefinition*>      mPtr;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionPtr& operator=(ActorDefinitionPtr const&);
    ActorDefinitionPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionPtr(::ActorDefinitionPtr const& rhs);

    MCAPI ActorDefinitionPtr(::ActorDefinitionGroup& group, ::ActorDefinition& EntityDefinition);

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
    MCAPI void* $ctor(::ActorDefinitionPtr const& rhs);

    MCAPI void* $ctor(::ActorDefinitionGroup& group, ::ActorDefinition& EntityDefinition);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
