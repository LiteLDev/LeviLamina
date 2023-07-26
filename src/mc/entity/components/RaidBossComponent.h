#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RaidBossComponent {

public:
    // prevent constructor by default
    RaidBossComponent& operator=(RaidBossComponent const&) = delete;
    RaidBossComponent(RaidBossComponent const&)            = delete;
    RaidBossComponent()                                    = delete;

public:
    /**
     * @symbol ??0RaidBossComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI RaidBossComponent(class RaidBossComponent&&); // NOLINT
    /**
     * @symbol ?getColor\@RaidBossComponent\@\@QEAA?AW4BossBarColor\@\@XZ
     */
    MCAPI enum class BossBarColor getColor(); // NOLINT
    /**
     * @symbol ?getHealthPercent\@RaidBossComponent\@\@QEAAMXZ
     */
    MCAPI float getHealthPercent(); // NOLINT
    /**
     * @symbol
     * ?getName\@RaidBossComponent\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName(); // NOLINT
    /**
     * @symbol ?getOwnerUniqueID\@RaidBossComponent\@\@QEAA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getOwnerUniqueID(); // NOLINT
    /**
     * @symbol ?getRaidInProgress\@RaidBossComponent\@\@QEAA_NXZ
     */
    MCAPI bool getRaidInProgress(); // NOLINT
    /**
     * @symbol ?getVillage\@RaidBossComponent\@\@QEAA?AV?$shared_ptr\@VVillage\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class Village> getVillage(); // NOLINT
    /**
     * @symbol ?getWaveStarted\@RaidBossComponent\@\@QEAA_NXZ
     */
    MCAPI bool getWaveStarted(); // NOLINT
    /**
     * @symbol ?initialize\@RaidBossComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void initialize(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?isWithinRange\@RaidBossComponent\@\@QEAA_NAEBVMob\@\@\@Z
     */
    MCAPI bool isWithinRange(class Mob const&); // NOLINT
    /**
     * @symbol ??4RaidBossComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class RaidBossComponent& operator=(class RaidBossComponent&&); // NOLINT
    /**
     * @symbol ?registerPlayer\@RaidBossComponent\@\@QEAAXPEAVPlayer\@\@\@Z
     */
    MCAPI void registerPlayer(class Player*); // NOLINT
    /**
     * @symbol ?removeBossBar\@RaidBossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void removeBossBar(class Actor&); // NOLINT
    /**
     * @symbol ?resendRaidBossEventData\@RaidBossComponent\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void resendRaidBossEventData(class Player&); // NOLINT
    /**
     * @symbol ?sendRegistryMessages\@RaidBossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendRegistryMessages(class Actor&); // NOLINT
    /**
     * @symbol ?setVillage\@RaidBossComponent\@\@QEAAXV?$weak_ptr\@VVillage\@\@\@std\@\@\@Z
     */
    MCAPI void setVillage(class std::weak_ptr<class Village>); // NOLINT
    /**
     * @symbol ?setWaveStarted\@RaidBossComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWaveStarted(bool); // NOLINT
    /**
     * @symbol ?setupBossBarInfo\@RaidBossComponent\@\@QEAAXAEAVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI void setupBossBarInfo(class Actor&, class Village*); // NOLINT
    /**
     * @symbol ?tryRemoveBoss\@RaidBossComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool tryRemoveBoss(class Actor&, class Player&); // NOLINT
    /**
     * @symbol ?unRegisterPlayer\@RaidBossComponent\@\@QEAAXPEAVPlayer\@\@\@Z
     */
    MCAPI void unRegisterPlayer(class Player*); // NOLINT
    /**
     * @symbol ?updateBossBarStats\@RaidBossComponent\@\@QEAAXAEAVActor\@\@AEBVRaid\@\@\@Z
     */
    MCAPI void updateBossBarStats(class Actor&, class Raid const&); // NOLINT
    /**
     * @symbol ?updateHealthBarVisible\@RaidBossComponent\@\@QEAAX_NAEAVActor\@\@\@Z
     */
    MCAPI void updateHealthBarVisible(bool, class Actor&); // NOLINT
    /**
     * @symbol ??1RaidBossComponent\@\@QEAA\@XZ
     */
    MCAPI ~RaidBossComponent(); // NOLINT

    // private:
    /**
     * @symbol ?_broadcastBossEvent\@RaidBossComponent\@\@AEAAXW4BossEventUpdateType\@\@AEAVActor\@\@\@Z
     */
    MCAPI void _broadcastBossEvent(enum class BossEventUpdateType, class Actor&); // NOLINT
    /**
     * @symbol ?_sendBossEvent\@RaidBossComponent\@\@AEAAXW4BossEventUpdateType\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void _sendBossEvent(enum class BossEventUpdateType, class Player&); // NOLINT

private:
};
