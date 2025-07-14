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
    MCNAPI LegacyOnHitActorTriggerItemComponentData(::LegacyOnHitActorTriggerItemComponentData&&);

    MCNAPI LegacyOnHitActorTriggerItemComponentData(::LegacyOnHitActorTriggerItemComponentData const&);

    MCNAPI ~LegacyOnHitActorTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyOnHitActorTriggerItemComponentData&&);

    MCNAPI void* $ctor(::LegacyOnHitActorTriggerItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
