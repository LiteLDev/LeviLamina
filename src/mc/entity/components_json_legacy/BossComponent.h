#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
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
// clang-format on

struct BossComponent {
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
    // member functions
    // NOLINTBEGIN
    MCAPI BossComponent();

    MCAPI void _sendBossEvent(::Actor& owner, ::BossEventUpdateType type, ::Player* player);

    MCAPI void addPlayerToParty(::mce::UUID id, int damage);

    MCAPI void broadcastBossEvent(::Actor& owner, ::BossEventUpdateType type);

    MCAPI void handleRegisterPlayers(::Actor& owner);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void registerPlayer(::Actor& owner, ::Player* player);

    MCAPI void resendBossEventData(::Actor& owner, ::Player* player);

    MCAPI void sendDeathTelemetry(::Actor& owner);

    MCAPI void setColor(::Actor& owner, ::BossBarColor color);

    MCAPI void setHealthBarVisible(::Actor& owner, bool visible);

    MCAPI void setHealthPercent(::Actor& owner, float percent);

    MCAPI void setName(::Actor& owner, ::Bedrock::Safety::RedactableString const& name);

    MCAPI bool tryRemoveBoss(::Actor& owner, ::Player& player);

    MCAPI void unRegisterPlayer(::Actor& owner, ::Player* player);

    MCAPI ~BossComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
