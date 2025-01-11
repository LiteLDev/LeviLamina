#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnCompleteTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 264> mUnkc1becb;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnCompleteTriggerItemComponentData& operator=(LegacyOnCompleteTriggerItemComponentData const&);
    LegacyOnCompleteTriggerItemComponentData(LegacyOnCompleteTriggerItemComponentData const&);
    LegacyOnCompleteTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LegacyOnCompleteTriggerItemComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
