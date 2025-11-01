#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProfanityFilterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsRemoteProfanityFilterEnabled;
    ::ll::TypedStorage<1, 1, bool> mIsLocalProfanityFilterEnabled;
    // NOLINTEND

};
