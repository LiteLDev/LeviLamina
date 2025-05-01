#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Player;
class Raid;
class Village;
// clang-format on

class RaidBossComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Village>>             mVillage;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                         mOwnerID;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>    mName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mProgress;
    ::ll::TypedStorage<4, 4, int>                                     mPlayersRegistered;
    ::ll::TypedStorage<1, 1, bool>                                    mWaveStarted;
    ::ll::TypedStorage<1, 1, bool>                                    mRaidInProgress;
    ::ll::TypedStorage<1, 1, bool>                                    mHealthBarVisible;
    ::ll::TypedStorage<4, 4, float>                                   mHealthPercent;
    ::ll::TypedStorage<4, 24, ::AABB>                                 mBossBarVisibleBounds;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastPlayerUpdate;
    // NOLINTEND

public:
    // prevent constructor by default
    RaidBossComponent& operator=(RaidBossComponent const&);
    RaidBossComponent(RaidBossComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RaidBossComponent(::RaidBossComponent&&);

    MCNAPI void _broadcastBossEvent(::BossEventUpdateType type, ::Actor& owner);

    MCNAPI void _handleRegisterPlayers(::Actor& owner);

    MCNAPI void _sendBossEvent(::BossEventUpdateType type, ::Player& player);

    MCNAPI ::Bedrock::Safety::RedactableString getName();

    MCNAPI bool isWithinRange(::Mob const& player);

    MCNAPI ::RaidBossComponent& operator=(::RaidBossComponent&&);

    MCNAPI void removeBossBar(::Actor& owner);

    MCNAPI bool tryRemoveBoss(::Actor& owner, ::Player& player);

    MCNAPI void updateBossBarStats(::Actor& owner, ::Raid const& raid);

    MCNAPI void updateHealthBarVisible(bool visible, ::Actor& owner);

    MCNAPI ~RaidBossComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RaidBossComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
