#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorFilterGroup.h"

struct ShooterProjectileData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActorDef;
    ::ll::TypedStorage<4, 4, int>                           mAuxValue;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>           mFilter;
    ::ll::TypedStorage<4, 4, float>                         mChance;
    ::ll::TypedStorage<1, 1, bool>                          mUnselectTarget;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setActorDefByName(::std::string const& name);

    MCAPI ~ShooterProjectileData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
