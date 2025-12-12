#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"

class IdentityDefinition {
public:
    // IdentityDefinition inner types define
    enum class Type : uchar {
        Invalid    = 0,
        Player     = 1,
        Entity     = 2,
        FakePlayer = 3,
    };

    using PlayerNameResolver = ::std::function<::std::string const&(::ActorUniqueID)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId>            mScoreboardId;
    ::ll::TypedStorage<1, 1, bool>                       mIsHiddenFakePlayer;
    ::ll::TypedStorage<8, 8, ::PlayerScoreboardId>       mPlayerId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mEntityId;
    ::ll::TypedStorage<8, 32, ::std::string>             mPlayerName;
    ::ll::TypedStorage<1, 1, ::IdentityDefinition::Type> mIdentityType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const&
    getName(::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver) const;

    MCAPI ~IdentityDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::IdentityDefinition const& Invalid();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
