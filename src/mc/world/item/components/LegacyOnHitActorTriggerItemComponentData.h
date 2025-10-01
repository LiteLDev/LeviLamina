#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnHitActorTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd856f7;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnHitActorTriggerItemComponentData& operator=(LegacyOnHitActorTriggerItemComponentData const&);
    LegacyOnHitActorTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnHitActorTriggerItemComponentData(::LegacyOnHitActorTriggerItemComponentData&&);

    MCAPI LegacyOnHitActorTriggerItemComponentData(::LegacyOnHitActorTriggerItemComponentData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnHitActorTriggerItemComponentData&&);

    MCFOLD void* $ctor(::LegacyOnHitActorTriggerItemComponentData const&);
    // NOLINTEND
};
