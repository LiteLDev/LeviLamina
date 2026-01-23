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
    // prevent constructor by default
    BossComponent& operator=(BossComponent const&);
    BossComponent(BossComponent const&);
    BossComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BossComponent(::BossComponent&&);

    MCAPI void _sendBossEvent(::Actor& owner, ::BossEventUpdateType type, ::Player* player);

    MCAPI void broadcastBossEvent(::Actor& owner, ::BossEventUpdateType type);

    MCAPI void handleRegisterPlayers(::Actor& owner);

    MCAPI ::BossComponent& operator=(::BossComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void sendDeathTelemetry(::Actor& owner);

    MCAPI void setName(::Actor& owner, ::Bedrock::Safety::RedactableString const& name);

    MCAPI bool tryRemoveBoss(::Actor& owner, ::Player& player);

    MCAPI void unRegisterPlayer(::Actor& owner, ::Player* player);

    MCAPI ~BossComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BossComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
