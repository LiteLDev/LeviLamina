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
    ActorDefinitionPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDefinitionPtr(::ActorDefinitionPtr const& rhs);

    MCNAPI ::ActorDefinitionPtr& operator=(::ActorDefinitionPtr const& rhs);

    MCAPI ~ActorDefinitionPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ActorDefinitionPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionPtr const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
