#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnConsumeTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk63b22b;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnConsumeTriggerItemComponentData& operator=(LegacyOnConsumeTriggerItemComponentData const&);
    LegacyOnConsumeTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyOnConsumeTriggerItemComponentData(::LegacyOnConsumeTriggerItemComponentData const&);

    MCNAPI LegacyOnConsumeTriggerItemComponentData(::LegacyOnConsumeTriggerItemComponentData&&);

    MCNAPI ~LegacyOnConsumeTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyOnConsumeTriggerItemComponentData const&);

    MCNAPI void* $ctor(::LegacyOnConsumeTriggerItemComponentData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
