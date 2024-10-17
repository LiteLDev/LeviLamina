#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThirdPartyInfo {
public:
    // prevent constructor by default
    ThirdPartyInfo& operator=(ThirdPartyInfo const&);

public:
    // NOLINTBEGIN
    MCAPI ThirdPartyInfo();

    MCAPI ThirdPartyInfo(class ThirdPartyInfo const&);

    MCAPI ~ThirdPartyInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class ThirdPartyInfo const&);

    MCAPI void dtor$();

    // NOLINTEND
};
