#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

struct LegacyOnHurtActorTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnHurtActor;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnHurtActorTriggerItemComponentData& operator=(LegacyOnHurtActorTriggerItemComponentData const&);
    LegacyOnHurtActorTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnHurtActorTriggerItemComponentData(::LegacyOnHurtActorTriggerItemComponentData const&);

    MCAPI LegacyOnHurtActorTriggerItemComponentData(::LegacyOnHurtActorTriggerItemComponentData&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnHurtActorTriggerItemComponentData const&);

    MCFOLD void* $ctor(::LegacyOnHurtActorTriggerItemComponentData&&);
    // NOLINTEND
};
