#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BossBarColor.h"
#include "mc/world/events/BossEventUpdateType.h"

class RaidBossComponent {
public:
    // prevent constructor by default
    RaidBossComponent& operator=(RaidBossComponent const&);
    RaidBossComponent(RaidBossComponent const&);
    RaidBossComponent();

public:
    // NOLINTBEGIN
    MCAPI RaidBossComponent(class RaidBossComponent&&);

    MCAPI ::BossBarColor getColor();

    MCAPI float getHealthPercent();

    MCAPI std::string getName();

    MCAPI struct ActorUniqueID getOwnerUniqueID();

    MCAPI bool getRaidInProgress();

    MCAPI std::shared_ptr<class Village> getVillage();

    MCAPI bool getWaveStarted();

    MCAPI void initialize(struct ActorUniqueID ownerID);

    MCAPI bool isWithinRange(class Mob const& player);

    MCAPI class RaidBossComponent& operator=(class RaidBossComponent&&);

    MCAPI void registerPlayer(class Player* player);

    MCAPI void removeBossBar(class Actor& owner);

    MCAPI void resendRaidBossEventData(class Player& player);

    MCAPI void sendRegistryMessages(class Actor& owner);

    MCAPI void setVillage(std::weak_ptr<class Village> village);

    MCAPI void setWaveStarted(bool val);

    MCAPI void setupBossBarInfo(class Actor& owner, class Village* village);

    MCAPI bool tryRemoveBoss(class Actor& owner, class Player& player);

    MCAPI void unRegisterPlayer(class Player* player);

    MCAPI void updateBossBarStats(class Actor& owner, class Raid const& raid);

    MCAPI void updateHealthBarVisible(bool visible, class Actor& owner);

    MCAPI ~RaidBossComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _broadcastBossEvent(::BossEventUpdateType type, class Actor& owner);

    MCAPI void _sendBossEvent(::BossEventUpdateType type, class Player& player);

    // NOLINTEND
};
