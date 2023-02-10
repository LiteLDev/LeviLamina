/**
 * @file  RaidBossComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RaidBossComponent.
 *
 */
class RaidBossComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDBOSSCOMPONENT
public:
    class RaidBossComponent& operator=(class RaidBossComponent const &) = delete;
    RaidBossComponent(class RaidBossComponent const &) = delete;
    RaidBossComponent() = delete;
#endif

public:
    /**
     * @hash   836471877
     * @symbol  ??0RaidBossComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI RaidBossComponent(class RaidBossComponent &&);
    /**
     * @hash   -1966746526
     * @symbol  ?getColor\@RaidBossComponent\@\@QEAA?AW4BossBarColor\@\@XZ
     */
    MCAPI enum class BossBarColor getColor();
    /**
     * @hash   -1905302948
     * @symbol  ?getHealthPercent\@RaidBossComponent\@\@QEAAMXZ
     */
    MCAPI float getHealthPercent();
    /**
     * @hash   -402601456
     * @symbol  ?getName\@RaidBossComponent\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName();
    /**
     * @hash   1378472326
     * @symbol  ?getOwnerUniqueID\@RaidBossComponent\@\@QEAA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getOwnerUniqueID();
    /**
     * @hash   872421202
     * @symbol  ?getRaidInProgress\@RaidBossComponent\@\@QEAA_NXZ
     */
    MCAPI bool getRaidInProgress();
    /**
     * @hash   2082353207
     * @symbol  ?getVillage\@RaidBossComponent\@\@QEAA?AV?$shared_ptr\@VVillage\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class Village> getVillage();
    /**
     * @hash   177156132
     * @symbol  ?getWaveStarted\@RaidBossComponent\@\@QEAA_NXZ
     */
    MCAPI bool getWaveStarted();
    /**
     * @hash   2102898908
     * @symbol  ?initialize\@RaidBossComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void initialize(struct ActorUniqueID);
    /**
     * @hash   -1025560141
     * @symbol  ?isWithinRange\@RaidBossComponent\@\@QEAA_NAEBVMob\@\@\@Z
     */
    MCAPI bool isWithinRange(class Mob const &);
    /**
     * @hash   -1487572896
     * @symbol  ??4RaidBossComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class RaidBossComponent & operator=(class RaidBossComponent &&);
    /**
     * @hash   -239143649
     * @symbol  ?registerPlayer\@RaidBossComponent\@\@QEAAXPEAVPlayer\@\@\@Z
     */
    MCAPI void registerPlayer(class Player *);
    /**
     * @hash   2090830118
     * @symbol  ?removeBossBar\@RaidBossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void removeBossBar(class Actor &);
    /**
     * @hash   1776059782
     * @symbol  ?resendRaidBossEventData\@RaidBossComponent\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void resendRaidBossEventData(class Player &);
    /**
     * @hash   511773242
     * @symbol  ?sendRegistryMessages\@RaidBossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendRegistryMessages(class Actor &);
    /**
     * @hash   529868227
     * @symbol  ?setVillage\@RaidBossComponent\@\@QEAAXV?$weak_ptr\@VVillage\@\@\@std\@\@\@Z
     */
    MCAPI void setVillage(class std::weak_ptr<class Village>);
    /**
     * @hash   331867800
     * @symbol  ?setWaveStarted\@RaidBossComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setWaveStarted(bool);
    /**
     * @hash   -1619054664
     * @symbol  ?setupBossBarInfo\@RaidBossComponent\@\@QEAAXAEAVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI void setupBossBarInfo(class Actor &, class Village *);
    /**
     * @hash   1342953316
     * @symbol  ?tryRemoveBoss\@RaidBossComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool tryRemoveBoss(class Actor &, class Player &);
    /**
     * @hash   -1505117681
     * @symbol  ?unRegisterPlayer\@RaidBossComponent\@\@QEAAXPEAVPlayer\@\@\@Z
     */
    MCAPI void unRegisterPlayer(class Player *);
    /**
     * @hash   -1836273901
     * @symbol  ?updateBossBarStats\@RaidBossComponent\@\@QEAAXAEAVActor\@\@AEBVRaid\@\@\@Z
     */
    MCAPI void updateBossBarStats(class Actor &, class Raid const &);
    /**
     * @hash   894029410
     * @symbol  ??1RaidBossComponent\@\@QEAA\@XZ
     */
    MCAPI ~RaidBossComponent();

//private:
    /**
     * @hash   1256747982
     * @symbol  ?_broadcastBossEvent\@RaidBossComponent\@\@AEAAXW4BossEventUpdateType\@\@AEAVActor\@\@\@Z
     */
    MCAPI void _broadcastBossEvent(enum class BossEventUpdateType, class Actor &);
    /**
     * @hash   77407485
     * @symbol  ?_sendBossEvent\@RaidBossComponent\@\@AEAAXW4BossEventUpdateType\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void _sendBossEvent(enum class BossEventUpdateType, class Player &);

private:

};