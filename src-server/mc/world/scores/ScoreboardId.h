#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
// clang-format on

struct ScoreboardId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64>                 mRawID;
    ::ll::TypedStorage<8, 8, ::IdentityDefinition*> mIdentityDef;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ScoreboardId& INVALID();
    // NOLINTEND
};
