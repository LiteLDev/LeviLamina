#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/scores/ScoreInfo.h"

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
    [[nodiscard]] ScoreInfo getPlayerScore(::ScoreboardId const& id) const {
        auto it = mScores->find(id);
        if (it == mScores->end()) {
            return ScoreInfo{nullptr, false, 0};
        }
        return ScoreInfo{this, true, it->second};
    }

public:
    // prevent constructor by default
    Objective& operator=(Objective const&);
    Objective(Objective const&);
    Objective();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Objective(::std::string const& name, ::ObjectiveCriteria const& criteria);

#ifdef LL_PLAT_C
    MCAPI ::std::vector<::ScoreboardId> getPlayers() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, ::ObjectiveCriteria const& criteria);
    // NOLINTEND
};
