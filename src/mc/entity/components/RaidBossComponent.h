#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RaidBossComponent {

public:
    // prevent constructor by default
    RaidBossComponent& operator=(RaidBossComponent const&) = delete;
    RaidBossComponent(RaidBossComponent const&)            = delete;
    RaidBossComponent()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0RaidBossComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI RaidBossComponent(class RaidBossComponent&&);
    /**
     * @symbol ?getColor\@RaidBossComponent\@\@QEAA?AW4BossBarColor\@\@XZ
     */
    MCAPI enum class BossBarColor getColor();
    /**
     * @symbol ?getHealthPercent\@RaidBossComponent\@\@QEAAMXZ
     */
    MCAPI float getHealthPercent();
    /**
     * @symbol
     * ?getName\@RaidBossComponent\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName();
    /**
     * @symbol ?getOwnerUniqueID\@RaidBossComponent\@\@QEAA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getOwnerUniqueID();
    /**
     * @symbol ?getRaidInProgress\@RaidBossComponent\@\@QEAA_NXZ
     */
    MCAPI bool getRaidInProgress();
    /**
     * @symbol ?getVillage\@RaidBossComponent\@\@QEAA?AV?$shared_ptr\@VVillage\@\@\@std\@\@XZ
     */
    MCAPI std::shared_ptr<class Village> getVillage();
    /**
     * @symbol ?getWaveStarted\@RaidBossComponent\@\@QEAA_NXZ
     */
    MCAPI bool getWaveStarted();
    /**
     * @symbol ?initialize\@RaidBossComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void initialize(struct ActorUniqueID);
    /**
     * @symbol ?isWithinRange\@RaidBossComponent\@\@QEAA_NAEBVMob\@\@\@Z
     */
    MCAPI bool isWithinRange(class Mob const&);
    /**
     * @symbol ??4RaidBossComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class RaidBossComponent& operator=(class RaidBossComponent&&);
    /**
     * @symbol ?registerPlayer\@RaidBossComponent\@\@QEAAXPEAVPlayer\@\@\@Z
     */
    MCAPI void registerPlayer(class Player*);
    /**
     * @symbol ?removeBossBar\@RaidBossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void removeBossBar(class Actor&);
    /**
     * @symbol ?resendRaidBossEventData\@RaidBossComponent\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void resendRaidBossEventData(class Player&);
    /**
     * @symbol ?sendRegistryMessages\@RaidBossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendRegistryMessages(class Actor&);
    /**
     * @symbol ?setVillage\@RaidBossComponent\@\@QEAAXV?$weak_ptr\@VVillage\@\@\@std\@\@\@Z
     */
    MCAPI void setVillage(std::weak_ptr<class Village>);
    /**
     * @symbol ?setWaveStarted\@RaidBossComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWaveStarted(bool);
    /**
     * @symbol ?setupBossBarInfo\@RaidBossComponent\@\@QEAAXAEAVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI void setupBossBarInfo(class Actor&, class Village*);
    /**
     * @symbol ?tryRemoveBoss\@RaidBossComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool tryRemoveBoss(class Actor&, class Player&);
    /**
     * @symbol ?unRegisterPlayer\@RaidBossComponent\@\@QEAAXPEAVPlayer\@\@\@Z
     */
    MCAPI void unRegisterPlayer(class Player*);
    /**
     * @symbol ?updateBossBarStats\@RaidBossComponent\@\@QEAAXAEAVActor\@\@AEBVRaid\@\@\@Z
     */
    MCAPI void updateBossBarStats(class Actor&, class Raid const&);
    /**
     * @symbol ?updateHealthBarVisible\@RaidBossComponent\@\@QEAAX_NAEAVActor\@\@\@Z
     */
    MCAPI void updateHealthBarVisible(bool, class Actor&);
    /**
     * @symbol ??1RaidBossComponent\@\@QEAA\@XZ
     */
    MCAPI ~RaidBossComponent();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_broadcastBossEvent\@RaidBossComponent\@\@AEAAXW4BossEventUpdateType\@\@AEAVActor\@\@\@Z
     */
    MCAPI void _broadcastBossEvent(enum class BossEventUpdateType, class Actor&);
    /**
     * @symbol ?_sendBossEvent\@RaidBossComponent\@\@AEAAXW4BossEventUpdateType\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void _sendBossEvent(enum class BossEventUpdateType, class Player&);
    // NOLINTEND
};
