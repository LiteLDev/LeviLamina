#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterParamDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4b4f37;
    ::ll::UntypedStorage<4, 4>  mUnk3c8bc4;
    ::ll::UntypedStorage<8, 32> mUnk559569;
    ::ll::UntypedStorage<8, 48> mUnk87f316;
    ::ll::UntypedStorage<8, 64> mUnked9a86;
    ::ll::UntypedStorage<1, 1>  mUnk87e752;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterParamDefinition& operator=(FilterParamDefinition const&);
    FilterParamDefinition(FilterParamDefinition const&);
    FilterParamDefinition();
};
