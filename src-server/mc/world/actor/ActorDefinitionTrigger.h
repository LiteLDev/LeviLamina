#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/actor/ActorFilterGroup.h"

class ActorDefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                       mType;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mTarget;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                  mFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionTrigger(ActorDefinitionTrigger const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionTrigger();

    MCAPI ::ActorDefinitionTrigger& operator=(::ActorDefinitionTrigger&&);

    MCAPI ::ActorDefinitionTrigger& operator=(::ActorDefinitionTrigger const&);

    MCAPI ~ActorDefinitionTrigger();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
