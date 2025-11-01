#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
struct ActorUniqueID;
struct PlayerScoreboardId;
struct ScoreboardId;
// clang-format on

class IdentityDictionary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::PlayerScoreboardId, ::ScoreboardId>> mPlayers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::ScoreboardId>> mEntities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ScoreboardId>> mFakes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, ::IdentityDefinition>> mIdentityDefs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IdentityDictionary();

    MCAPI bool clearIdentity(::ScoreboardId const& scoreboardId);

    MCAPI ::ScoreboardId const& convertFakeToReal(::ScoreboardId const& scoreboardId, ::PlayerScoreboardId const& playerId);

    MCAPI ~IdentityDictionary();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
