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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ActorDefinitionPtr(ActorDefinitionPtr const&);
    ActorDefinitionPtr();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActorDefinitionPtr();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ActorDefinitionPtr(::ActorDefinitionPtr const& rhs);
#endif

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
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ActorDefinitionPtr const& rhs);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
