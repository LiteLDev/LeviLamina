#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnHitBlockTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk2d4d1b;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnHitBlockTriggerItemComponentData& operator=(LegacyOnHitBlockTriggerItemComponentData const&);
    LegacyOnHitBlockTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnHitBlockTriggerItemComponentData(::LegacyOnHitBlockTriggerItemComponentData&&);

    MCAPI LegacyOnHitBlockTriggerItemComponentData(::LegacyOnHitBlockTriggerItemComponentData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnHitBlockTriggerItemComponentData&&);

    MCFOLD void* $ctor(::LegacyOnHitBlockTriggerItemComponentData const&);
    // NOLINTEND
};
