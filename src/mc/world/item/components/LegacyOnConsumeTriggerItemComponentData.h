#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnConsumeTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 264> mUnk63b22b;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnConsumeTriggerItemComponentData& operator=(LegacyOnConsumeTriggerItemComponentData const&);
    LegacyOnConsumeTriggerItemComponentData(LegacyOnConsumeTriggerItemComponentData const&);
    LegacyOnConsumeTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LegacyOnConsumeTriggerItemComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
