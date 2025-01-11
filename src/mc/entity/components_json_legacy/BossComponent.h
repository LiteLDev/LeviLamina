#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::TypedStorage<8, 32, ::std::string>                          mName;
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

    MCAPI BossComponent(::BossComponent&&);

    MCAPI void _sendBossEvent(::Actor& owner, ::BossEventUpdateType type, ::Player* player);

    MCAPI void addPlayerToParty(::mce::UUID id, int damage);

    MCAPI void broadcastBossEvent(::Actor& owner, ::BossEventUpdateType type);

    MCFOLD ::BossBarColor getColor() const;

    MCFOLD bool getCreateWorldFog() const;

    MCFOLD float getHealthPercent() const;

    MCFOLD int getLastHealth() const;

    MCFOLD ::std::chrono::steady_clock::time_point getLastPlayerUpdate() const;

    MCFOLD ::std::string getName() const;

    MCFOLD ::BossBarOverlay getOverlay() const;

    MCFOLD ::std::unordered_map<::mce::UUID, int> const& getPlayerParty() const;

    MCFOLD bool getShouldDarkenSky() const;

    MCAPI void handleRegisterPlayers(::Actor& owner);

    MCAPI ::BossComponent& operator=(::BossComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void registerPlayer(::Actor& owner, ::Player* player);

    MCAPI void resendBossEventData(::Actor& owner, ::Player* player);

    MCAPI void sendDeathTelemetry(::Actor& owner);

    MCAPI void setColor(::Actor& owner, ::BossBarColor color);

    MCAPI void setHealthBarVisible(::Actor& owner, bool visible);

    MCAPI void setHealthPercent(::Actor& owner, float percent);

    MCAPI void setLastHealth(int lastHealth);

    MCFOLD void setLastPlayerUpdate(::std::chrono::steady_clock::time_point lastUpdate);

    MCAPI void setName(::Actor& owner, ::std::string const& name);

    MCAPI bool tryRemoveBoss(::Actor& owner, ::Player& player);

    MCAPI void unRegisterPlayer(::Actor& owner, ::Player* player);

    MCAPI ~BossComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BossComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
