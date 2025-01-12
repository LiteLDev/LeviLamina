#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
struct PlayerScoreboardId;
struct ScoreboardId;
// clang-format on

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
    MCAPI IdentityDefinition(::IdentityDefinition&& o);

    MCAPI IdentityDefinition(::IdentityDefinition const& o);

    MCFOLD ::ActorUniqueID const& getEntityId() const;

    MCFOLD ::std::string const& getFakePlayerName() const;

    MCFOLD ::IdentityDefinition::Type getIdentityType() const;

    MCAPI ::std::string const& getName(::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver
    ) const;

    MCFOLD ::PlayerScoreboardId const& getPlayerId() const;

    MCFOLD ::ScoreboardId const& getScoreboardId() const;

    MCAPI bool isEntityType() const;

    MCAPI bool isPlayerType() const;

    MCAPI bool isValid() const;

    MCAPI ::IdentityDefinition& operator=(::IdentityDefinition&& o);

    MCAPI ::IdentityDefinition& operator=(::IdentityDefinition const& o);

    MCAPI ~IdentityDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::IdentityDefinition const& Invalid();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IdentityDefinition&& o);

    MCAPI void* $ctor(::IdentityDefinition const& o);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
