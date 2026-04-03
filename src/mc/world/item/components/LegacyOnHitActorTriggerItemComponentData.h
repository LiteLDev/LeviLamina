#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

struct LegacyOnHitActorTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnHitActor;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnHitActorTriggerItemComponentData& operator=(LegacyOnHitActorTriggerItemComponentData const&);
    LegacyOnHitActorTriggerItemComponentData(LegacyOnHitActorTriggerItemComponentData const&);
    LegacyOnHitActorTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnHitActorTriggerItemComponentData(::LegacyOnHitActorTriggerItemComponentData&&);

    MCAPI ~LegacyOnHitActorTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnHitActorTriggerItemComponentData&&);

    MCFOLD_S void* $ctor(::LegacyOnHitActorTriggerItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
