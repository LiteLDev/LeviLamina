#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/enums/BossBarColor.h"
#include "mc/enums/BossBarOverlay.h"

// auto generated inclusion list
#include "mc/enums/BossBarColor.h"
#include "mc/enums/BossBarOverlay.h"
#include "mc/world/events/BossEventUpdateType.h"

// auto generated forward declare list

class BossComponent {
public:
    std::string                           mName;              // this+0x0
    bool                                  mHealthBarVisible;  // this+0x20
    float                                 mHealthPercent;     // this+0x24
    bool                                  mShouldDarkenSky;   // this+0x28
    bool                                  mCreateWorldFog;    // this+0x29
    BossBarColor                          mColor;             // this+0x2c
    BossBarOverlay                        mOverlay;           // this+0x30
    int                                   mPlayersRegistered; // this+0x34
    int                                   mLastHealth;        // this+0x38
    int                                   mHudRangeSquared;   // this+0x3c
    std::chrono::steady_clock::time_point mLastPlayerUpdate;  // this+0x40
    std::unordered_map<mce::UUID, int>    mPlayerParty;       // this+0x48

    // prevent constructor by default
    BossComponent& operator=(BossComponent const&);
    BossComponent(BossComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BossComponent();

    MCAPI BossComponent(class BossComponent&&);

    MCAPI void addPlayerToParty(class mce::UUID id, int damage);

    MCAPI void broadcastBossEvent(class Actor& owner, ::BossEventUpdateType type);

    MCAPI ::BossBarColor getColor() const;

    MCAPI bool getCreateWorldFog() const;

    MCAPI float getHealthPercent() const;

    MCAPI int getLastHealth() const;

    MCAPI std::chrono::steady_clock::time_point getLastPlayerUpdate() const;

    MCAPI std::string getName() const;

    MCAPI ::BossBarOverlay getOverlay() const;

    MCAPI std::unordered_map<class mce::UUID, int> const& getPlayerParty() const;

    MCAPI bool getShouldDarkenSky() const;

    MCAPI void handleRegisterPlayers(class Actor& owner);

    MCAPI class BossComponent& operator=(class BossComponent&&);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void registerPlayer(class Actor& owner, class Player* player);

    MCAPI void resendBossEventData(class Actor& owner, class Player* player);

    MCAPI void sendDeathTelemetry(class Actor& owner);

    MCAPI void setColor(class Actor& owner, ::BossBarColor color);

    MCAPI void setHealthBarVisible(class Actor& owner, bool visible);

    MCAPI void setHealthPercent(class Actor& owner, float percent);

    MCAPI void setLastHealth(int lastHealth);

    MCAPI void setLastPlayerUpdate(std::chrono::steady_clock::time_point lastUpdate);

    MCAPI void setName(class Actor& owner, std::string const& name);

    MCAPI bool tryRemoveBoss(class Actor& owner, class Player& player);

    MCAPI void unRegisterPlayer(class Actor& owner, class Player* player);

    MCAPI ~BossComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _sendBossEvent(class Actor& owner, ::BossEventUpdateType type, class Player* player);

    // NOLINTEND
};
