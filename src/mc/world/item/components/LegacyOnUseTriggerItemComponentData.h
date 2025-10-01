#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyOnUseTriggerItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk858714;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnUseTriggerItemComponentData& operator=(LegacyOnUseTriggerItemComponentData const&);
    LegacyOnUseTriggerItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyOnUseTriggerItemComponentData(::LegacyOnUseTriggerItemComponentData const&);

    MCAPI LegacyOnUseTriggerItemComponentData(::LegacyOnUseTriggerItemComponentData&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::LegacyOnUseTriggerItemComponentData const&);

    MCFOLD void* $ctor(::LegacyOnUseTriggerItemComponentData&&);
    // NOLINTEND
};
