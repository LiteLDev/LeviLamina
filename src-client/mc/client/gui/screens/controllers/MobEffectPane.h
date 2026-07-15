#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobEffectPane {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mId;
    ::ll::TypedStorage<8, 32, ::std::string> mTime;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<1, 1, bool>           mIsAmbient;
    // NOLINTEND
};
