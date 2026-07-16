#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
// clang-format on

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
    ActorDefinitionTrigger& operator=(ActorDefinitionTrigger const&);
    ActorDefinitionTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionTrigger(::ActorDefinitionTrigger const&);

    MCAPI explicit ActorDefinitionTrigger(::SharedTypes::v1_21_120::ActorDefinitionTrigger const& other);

    MCAPI void convertToSharedTypeActorDefinitionTrigger(
        ::SharedTypes::v1_21_120::ActorDefinitionTrigger& outputSharedTypeTrigger
    ) const;

    MCAPI ::ActorDefinitionTrigger& operator=(::ActorDefinitionTrigger&&);

    MCAPI ~ActorDefinitionTrigger();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionTrigger const&);

    MCAPI void* $ctor(::SharedTypes::v1_21_120::ActorDefinitionTrigger const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
