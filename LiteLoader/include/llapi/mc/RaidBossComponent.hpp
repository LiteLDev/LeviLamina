/**
 * @file  RaidBossComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   622914613
     * @symbol ??0RaidBossComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI RaidBossComponent(class RaidBossComponent &&);
    /**
     * @hash   2056926626
     * @symbol ?getColor@RaidBossComponent@@QEAA?AW4BossBarColor@@XZ
     */
    MCAPI enum class BossBarColor getColor();
    /**
     * @hash   -1054441236
     * @symbol ?getHealthPercent@RaidBossComponent@@QEAAMXZ
     */
    MCAPI float getHealthPercent();
    /**
     * @hash   448260256
     * @symbol ?getName@RaidBossComponent@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getName();
    /**
     * @hash   -2065833146
     * @symbol ?getOwnerUniqueID@RaidBossComponent@@QEAA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getOwnerUniqueID();
    /**
     * @hash   1723083026
     * @symbol ?getRaidInProgress@RaidBossComponent@@QEAA_NXZ
     */
    MCAPI bool getRaidInProgress();
    /**
     * @hash   -1361952265
     * @symbol ?getVillage@RaidBossComponent@@QEAA?AV?$shared_ptr@VVillage@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class Village> getVillage();
    /**
     * @hash   1027817956
     * @symbol ?getWaveStarted@RaidBossComponent@@QEAA_NXZ
     */
    MCAPI bool getWaveStarted();
    /**
     * @hash   -1341406564
     * @symbol ?initialize@RaidBossComponent@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void initialize(struct ActorUniqueID);
    /**
     * @hash   -174898317
     * @symbol ?isWithinRange@RaidBossComponent@@QEAA_NAEBVMob@@@Z
     */
    MCAPI bool isWithinRange(class Mob const &);
    /**
     * @hash   -1701007152
     * @symbol ??4RaidBossComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class RaidBossComponent & operator=(class RaidBossComponent &&);
    /**
     * @hash   611472047
     * @symbol ?registerPlayer@RaidBossComponent@@QEAAXPEAVPlayer@@@Z
     */
    MCAPI void registerPlayer(class Player *);
    /**
     * @hash   -1353536858
     * @symbol ?removeBossBar@RaidBossComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void removeBossBar(class Actor &);
    /**
     * @symbol ?resendRaidBossEventData@RaidBossComponent@@QEAAXAEAVPlayer@@@Z
     */
    MCAPI void resendRaidBossEventData(class Player &);
    /**
     * @hash   1362358186
     * @symbol ?sendRegistryMessages@RaidBossComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void sendRegistryMessages(class Actor &);
    /**
     * @hash   1380422419
     * @symbol ?setVillage@RaidBossComponent@@QEAAXV?$weak_ptr@VVillage@@@std@@@Z
     */
    MCAPI void setVillage(class std::weak_ptr<class Village>);
    /**
     * @hash   1182406616
     * @symbol ?setWaveStarted@RaidBossComponent@@QEAAX_N@Z
     */
    MCAPI void setWaveStarted(bool);
    /**
     * @hash   -768515848
     * @symbol ?setupBossBarInfo@RaidBossComponent@@QEAAXAEAVActor@@PEAVVillage@@@Z
     */
    MCAPI void setupBossBarInfo(class Actor &, class Village *);
    /**
     * @hash   -2101490540
     * @symbol ?tryRemoveBoss@RaidBossComponent@@QEAA_NAEAVActor@@AEAVPlayer@@@Z
     */
    MCAPI bool tryRemoveBoss(class Actor &, class Player &);
    /**
     * @hash   -654640369
     * @symbol ?unRegisterPlayer@RaidBossComponent@@QEAAXPEAVPlayer@@@Z
     */
    MCAPI void unRegisterPlayer(class Player *);
    /**
     * @hash   -985811965
     * @symbol ?updateBossBarStats@RaidBossComponent@@QEAAXAEAVActor@@AEBVRaid@@@Z
     */
    MCAPI void updateBossBarStats(class Actor &, class Raid const &);
    /**
     * @hash   680595154
     * @symbol ??1RaidBossComponent@@QEAA@XZ
     */
    MCAPI ~RaidBossComponent();

//private:
    /**
     * @hash   2107640446
     * @symbol ?_broadcastBossEvent@RaidBossComponent@@AEAAXW4BossEventUpdateType@@AEAVActor@@@Z
     */
    MCAPI void _broadcastBossEvent(enum class BossEventUpdateType, class Actor &);
    /**
     * @hash   928284573
     * @symbol ?_sendBossEvent@RaidBossComponent@@AEAAXW4BossEventUpdateType@@AEAVPlayer@@@Z
     */
    MCAPI void _sendBossEvent(enum class BossEventUpdateType, class Player &);

private:

};