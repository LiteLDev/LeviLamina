#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnCompleteTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc1becb;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnCompleteTriggerItemComponentData& operator=(LegacyOnCompleteTriggerItemComponentData const&);
    LegacyOnCompleteTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyOnCompleteTriggerItemComponentData(::LegacyOnCompleteTriggerItemComponentData&&);

    MCNAPI LegacyOnCompleteTriggerItemComponentData(::LegacyOnCompleteTriggerItemComponentData const&);

    MCNAPI ~LegacyOnCompleteTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyOnCompleteTriggerItemComponentData&&);

    MCNAPI void* $ctor(::LegacyOnCompleteTriggerItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
