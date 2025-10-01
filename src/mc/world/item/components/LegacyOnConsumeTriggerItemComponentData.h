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
    MCAPI LegacyOnConsumeTriggerItemComponentData(::LegacyOnConsumeTriggerItemComponentData const&);

    MCAPI LegacyOnConsumeTriggerItemComponentData(::LegacyOnConsumeTriggerItemComponentData&&);

    MCAPI ~LegacyOnConsumeTriggerItemComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnConsumeTriggerItemComponentData const&);

    MCFOLD void* $ctor(::LegacyOnConsumeTriggerItemComponentData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
