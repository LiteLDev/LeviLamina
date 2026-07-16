#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
// clang-format on

class IdentityDictionary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::PlayerScoreboardId, ::ScoreboardId>> mPlayers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::ScoreboardId>>      mEntities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ScoreboardId>>        mFakes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, ::IdentityDefinition>> mIdentityDefs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool clearIdentity(::ScoreboardId const& scoreboardId);

#ifdef LL_PLAT_C
    MCAPI ::ScoreboardId const&
    convertFakeToReal(::ScoreboardId const& scoreboardId, ::PlayerScoreboardId const& playerId);
#endif

    MCAPI ::ScoreboardId const& getScoreboardId(::std::string const& fakePlayerName) const;
    // NOLINTEND
};
