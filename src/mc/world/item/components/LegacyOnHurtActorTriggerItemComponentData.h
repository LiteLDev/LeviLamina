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
    MCNAPI LegacyOnHurtActorTriggerItemComponentData(::LegacyOnHurtActorTriggerItemComponentData const&);

    MCNAPI LegacyOnHurtActorTriggerItemComponentData(::LegacyOnHurtActorTriggerItemComponentData&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyOnHurtActorTriggerItemComponentData const&);

    MCNAPI void* $ctor(::LegacyOnHurtActorTriggerItemComponentData&&);
    // NOLINTEND
};
