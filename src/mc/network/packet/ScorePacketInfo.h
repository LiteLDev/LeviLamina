#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/IdentityDefinition.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
struct PlayerScoreboardId;
struct ScoreboardId;
// clang-format on

struct ScorePacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId>            mScoreboardId;
    ::ll::TypedStorage<8, 32, ::std::string>             mObjectiveName;
    ::ll::TypedStorage<4, 4, int>                        mScoreValue;
    ::ll::TypedStorage<1, 1, ::IdentityDefinition::Type> mIdentityType;
    ::ll::TypedStorage<8, 8, ::PlayerScoreboardId>       mPlayerId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mEntityId;
    ::ll::TypedStorage<8, 32, ::std::string>             mFakePlayerName;
    // NOLINTEND

public:
    ScorePacketInfo& operator=(ScorePacketInfo const&) = default;
    ScorePacketInfo(ScorePacketInfo const&)            = default;
    ScorePacketInfo()                                  = default;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScorePacketInfo(::ScorePacketInfo&&);

    MCAPI ~ScorePacketInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScorePacketInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
