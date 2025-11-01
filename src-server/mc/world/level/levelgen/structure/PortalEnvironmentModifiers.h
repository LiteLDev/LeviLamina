#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PortalEnvironmentModifiers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsInNether;
    ::ll::TypedStorage<1, 1, bool> mIsUnderwater;
    ::ll::TypedStorage<1, 1, bool> mIsPartiallyBuried;
    ::ll::TypedStorage<1, 1, bool> mIsUnderground;
    ::ll::TypedStorage<1, 1, bool> mIsCold;
    ::ll::TypedStorage<4, 4, float> mMossiness;
    // NOLINTEND

};
