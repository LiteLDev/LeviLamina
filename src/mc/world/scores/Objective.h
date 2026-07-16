#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated forward declare list
// clang-format off
class ObjectiveCriteria;
// clang-format on

class Objective : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, int>> mScores;
    ::ll::TypedStorage<8, 32, ::std::string const>                       mName;
    ::ll::TypedStorage<8, 32, ::std::string>                             mDisplayName;
    ::ll::TypedStorage<8, 8, ::ObjectiveCriteria const&>                 mCriteria;
    // NOLINTEND

public:
    // prevent constructor by default
    Objective& operator=(Objective const&);
    Objective(Objective const&);
    Objective();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::std::vector<::ScoreboardId> getPlayers() const;
#endif
    // NOLINTEND
};
