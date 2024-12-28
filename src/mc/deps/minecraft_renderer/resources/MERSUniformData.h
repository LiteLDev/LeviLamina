#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MERSUniformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdb09e7;
    ::ll::UntypedStorage<4, 4> mUnkba304d;
    ::ll::UntypedStorage<4, 4> mUnka5579c;
    ::ll::UntypedStorage<4, 4> mUnk4bd500;
    // NOLINTEND

public:
    // prevent constructor by default
    MERSUniformData& operator=(MERSUniformData const&);
    MERSUniformData(MERSUniformData const&);
    MERSUniformData();
};
