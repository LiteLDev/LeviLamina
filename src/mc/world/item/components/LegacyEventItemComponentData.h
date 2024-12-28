#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyEventItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7c8cfb;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyEventItemComponentData& operator=(LegacyEventItemComponentData const&);
    LegacyEventItemComponentData(LegacyEventItemComponentData const&);
    LegacyEventItemComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LegacyEventItemComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
