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
    MCNAPI LegacyOnUseTriggerItemComponentData(::LegacyOnUseTriggerItemComponentData&&);

    MCNAPI LegacyOnUseTriggerItemComponentData(::LegacyOnUseTriggerItemComponentData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyOnUseTriggerItemComponentData&&);

    MCNAPI void* $ctor(::LegacyOnUseTriggerItemComponentData const&);
    // NOLINTEND
};
