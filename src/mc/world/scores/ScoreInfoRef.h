#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Objective;
// clang-format on

struct ScoreInfoRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Objective const*> mObjective;
    ::ll::TypedStorage<1, 1, bool>               mValid;
    ::ll::TypedStorage<8, 8, int*>               mValue;
    // NOLINTEND
};
