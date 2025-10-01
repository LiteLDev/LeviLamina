#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnHurtActorTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk6b6e05;
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
