#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnHitActorTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 264> mUnkd856f7;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnHitActorTriggerItemComponentData& operator=(LegacyOnHitActorTriggerItemComponentData const&);
    LegacyOnHitActorTriggerItemComponentData(LegacyOnHitActorTriggerItemComponentData const&);
    LegacyOnHitActorTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LegacyOnHitActorTriggerItemComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
