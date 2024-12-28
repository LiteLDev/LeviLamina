#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnHitBlockTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 264> mUnk2d4d1b;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnHitBlockTriggerItemComponentData& operator=(LegacyOnHitBlockTriggerItemComponentData const&);
    LegacyOnHitBlockTriggerItemComponentData(LegacyOnHitBlockTriggerItemComponentData const&);
    LegacyOnHitBlockTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LegacyOnHitBlockTriggerItemComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
