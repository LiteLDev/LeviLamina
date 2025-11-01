#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MutationFactorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkda5b00;
    ::ll::UntypedStorage<4, 4> mUnk9d905f;
    ::ll::UntypedStorage<4, 4> mUnk201f61;
    // NOLINTEND

public:
    // prevent constructor by default
    MutationFactorData& operator=(MutationFactorData const&);
    MutationFactorData(MutationFactorData const&);
    MutationFactorData();
};
