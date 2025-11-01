#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class EntityContext;
// clang-format on

struct ActorFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mIdentifier;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mBaseIdentifier;
    ::ll::TypedStorage<1, 1, bool> mAllowSummon;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Actor>(*) (::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&)> mFactory;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mExperimentIndex;
    ::ll::TypedStorage<4, 4, ::ActorType> mActorType;
    ::ll::TypedStorage<4, 4, float> mWalkAnimSpeed;
    ::ll::TypedStorage<1, 1, bool> mIsAlias;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorFactoryData();

    MCAPI ~ActorFactoryData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
