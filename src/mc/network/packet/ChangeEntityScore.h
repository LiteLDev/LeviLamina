#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/scores/ScoreboardId.h"

struct ChangeEntityScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId> mScoreboardId;
    ::ll::TypedStorage<8, 32, ::std::string>  mObjectiveName;
    ::ll::TypedStorage<4, 4, int>             mScoreValue;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEntityId;
    // NOLINTEND
};
