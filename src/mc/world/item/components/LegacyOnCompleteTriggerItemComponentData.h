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
    MCAPI LegacyOnCompleteTriggerItemComponentData(::LegacyOnCompleteTriggerItemComponentData&&);

    MCAPI LegacyOnCompleteTriggerItemComponentData(::LegacyOnCompleteTriggerItemComponentData const&);

    MCAPI ~LegacyOnCompleteTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnCompleteTriggerItemComponentData&&);

    MCFOLD void* $ctor(::LegacyOnCompleteTriggerItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
