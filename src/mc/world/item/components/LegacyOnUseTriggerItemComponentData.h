#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnUseTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 264> mUnk858714;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnUseTriggerItemComponentData& operator=(LegacyOnUseTriggerItemComponentData const&);
    LegacyOnUseTriggerItemComponentData(LegacyOnUseTriggerItemComponentData const&);
    LegacyOnUseTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LegacyOnUseTriggerItemComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
