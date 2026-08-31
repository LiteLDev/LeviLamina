#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/IdentityDefinition.h"

struct ScoreboardCacheData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>             mName;
    ::ll::TypedStorage<8, 8, int64>                      mId;
    ::ll::TypedStorage<8, 32, ::std::string>             mScore;
    ::ll::TypedStorage<1, 1, ::IdentityDefinition::Type> mType;
    // NOLINTEND
};
