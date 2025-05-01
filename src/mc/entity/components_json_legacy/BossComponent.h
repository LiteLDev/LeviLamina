#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/actor/ai/util/BossBarOverlay.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class Player;
namespace mce { class UUID; }
// clang-format on

class BossComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>    mName;
    ::ll::TypedStorage<1, 1, bool>                                    mHealthBarVisible;
    ::ll::TypedStorage<4, 4, float>                                   mHealthPercent;
    ::ll::TypedStorage<1, 1, bool>                                    mShouldDarkenSky;
    ::ll::TypedStorage<1, 1, bool>                                    mCreateWorldFog;
    ::ll::TypedStorage<4, 4, ::BossBarColor>                          mColor;
    ::ll::TypedStorage<4, 4, ::BossBarOverlay>                        mOverlay;
    ::ll::TypedStorage<4, 4, int>                                     mPlayersRegistered;
    ::ll::TypedStorage<4, 4, int>                                     mLastHealth;
    ::ll::TypedStorage<4, 4, int>                                     mHudRangeSquared;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastPlayerUpdate;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, int>> mPlayerParty;
    // NOLINTEND

public:
    // prevent constructor by default
    BossComponent& operator=(BossComponent const&);
    BossComponent(BossComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BossComponent();

    MCNAPI BossComponent(::BossComponent&&);

    MCNAPI void _sendBossEvent(::Actor& owner, ::BossEventUpdateType type, ::Player* player);

    MCNAPI void broadcastBossEvent(::Actor& owner, ::BossEventUpdateType type);

    MCNAPI void handleRegisterPlayers(::Actor& owner);

    MCNAPI ::BossComponent& operator=(::BossComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void sendDeathTelemetry(::Actor& owner);

    MCNAPI void setName(::Actor& owner, ::Bedrock::Safety::RedactableString const& name);

    MCNAPI bool tryRemoveBoss(::Actor& owner, ::Player& player);

    MCNAPI void unRegisterPlayer(::Actor& owner, ::Player* player);

    MCNAPI ~BossComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BossComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
