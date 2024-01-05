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
    // symbol: ??0RaidBossComponent@@QEAA@$$QEAV0@@Z
    MCAPI RaidBossComponent(class RaidBossComponent&&);

    // symbol: ?getColor@RaidBossComponent@@QEAA?AW4BossBarColor@@XZ
    MCAPI ::BossBarColor getColor();

    // symbol: ?getHealthPercent@RaidBossComponent@@QEAAMXZ
    MCAPI float getHealthPercent();

    // symbol: ?getName@RaidBossComponent@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getName();

    // symbol: ?getOwnerUniqueID@RaidBossComponent@@QEAA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getOwnerUniqueID();

    // symbol: ?getRaidInProgress@RaidBossComponent@@QEAA_NXZ
    MCAPI bool getRaidInProgress();

    // symbol: ?getVillage@RaidBossComponent@@QEAA?AV?$shared_ptr@VVillage@@@std@@XZ
    MCAPI std::shared_ptr<class Village> getVillage();

    // symbol: ?getWaveStarted@RaidBossComponent@@QEAA_NXZ
    MCAPI bool getWaveStarted();

    // symbol: ?initialize@RaidBossComponent@@QEAAXUActorUniqueID@@@Z
    MCAPI void initialize(struct ActorUniqueID ownerID);

    // symbol: ?isWithinRange@RaidBossComponent@@QEAA_NAEBVMob@@@Z
    MCAPI bool isWithinRange(class Mob const& player);

    // symbol: ??4RaidBossComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class RaidBossComponent& operator=(class RaidBossComponent&&);

    // symbol: ?registerPlayer@RaidBossComponent@@QEAAXPEAVPlayer@@@Z
    MCAPI void registerPlayer(class Player* player);

    // symbol: ?removeBossBar@RaidBossComponent@@QEAAXAEAVActor@@@Z
    MCAPI void removeBossBar(class Actor& owner);

    // symbol: ?resendRaidBossEventData@RaidBossComponent@@QEAAXAEAVPlayer@@@Z
    MCAPI void resendRaidBossEventData(class Player& player);

    // symbol: ?sendRegistryMessages@RaidBossComponent@@QEAAXAEAVActor@@@Z
    MCAPI void sendRegistryMessages(class Actor& owner);

    // symbol: ?setVillage@RaidBossComponent@@QEAAXV?$weak_ptr@VVillage@@@std@@@Z
    MCAPI void setVillage(std::weak_ptr<class Village> village);

    // symbol: ?setWaveStarted@RaidBossComponent@@QEAAX_N@Z
    MCAPI void setWaveStarted(bool val);

    // symbol: ?setupBossBarInfo@RaidBossComponent@@QEAAXAEAVActor@@PEAVVillage@@@Z
    MCAPI void setupBossBarInfo(class Actor& owner, class Village* village);

    // symbol: ?tryRemoveBoss@RaidBossComponent@@QEAA_NAEAVActor@@AEAVPlayer@@@Z
    MCAPI bool tryRemoveBoss(class Actor& owner, class Player& player);

    // symbol: ?unRegisterPlayer@RaidBossComponent@@QEAAXPEAVPlayer@@@Z
    MCAPI void unRegisterPlayer(class Player* player);

    // symbol: ?updateBossBarStats@RaidBossComponent@@QEAAXAEAVActor@@AEBVRaid@@@Z
    MCAPI void updateBossBarStats(class Actor& owner, class Raid const& raid);

    // symbol: ?updateHealthBarVisible@RaidBossComponent@@QEAAX_NAEAVActor@@@Z
    MCAPI void updateHealthBarVisible(bool visible, class Actor& owner);

    // symbol: ??1RaidBossComponent@@QEAA@XZ
    MCAPI ~RaidBossComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_broadcastBossEvent@RaidBossComponent@@AEAAXW4BossEventUpdateType@@AEAVActor@@@Z
    MCAPI void _broadcastBossEvent(::BossEventUpdateType type, class Actor& owner);

    // symbol: ?_sendBossEvent@RaidBossComponent@@AEAAXW4BossEventUpdateType@@AEAVPlayer@@@Z
    MCAPI void _sendBossEvent(::BossEventUpdateType type, class Player& player);

    // NOLINTEND
};
