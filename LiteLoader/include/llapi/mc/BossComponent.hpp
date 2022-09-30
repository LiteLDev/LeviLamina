/**
 * @file  BossComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BossComponent.
 *
 */
class BossComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSCOMPONENT
public:
    class BossComponent& operator=(class BossComponent const &) = delete;
    BossComponent(class BossComponent const &) = delete;
#endif

public:
    /**
     * @hash   -941432724
     * @symbol ??0BossComponent@@QEAA@XZ
     */
    MCAPI BossComponent();
    /**
     * @hash   -82094775
     * @symbol ??0BossComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI BossComponent(class BossComponent &&);
    /**
     * @hash   1465142955
     * @symbol ?addPlayerToParty@BossComponent@@QEAAXVUUID@mce@@H@Z
     */
    MCAPI void addPlayerToParty(class mce::UUID, int);
    /**
     * @hash   370209679
     * @symbol ?broadcastBossEvent@BossComponent@@QEAAXAEAVActor@@W4BossEventUpdateType@@@Z
     */
    MCAPI void broadcastBossEvent(class Actor &, enum class BossEventUpdateType);
    /**
     * @hash   -1411549874
     * @symbol ?getColor@BossComponent@@QEBA?AW4BossBarColor@@XZ
     */
    MCAPI enum class BossBarColor getColor() const;
    /**
     * @hash   405638414
     * @symbol ?getCreateWorldFog@BossComponent@@QEBA_NXZ
     */
    MCAPI bool getCreateWorldFog() const;
    /**
     * @hash   189634170
     * @symbol ?getHealthPercent@BossComponent@@QEBAMXZ
     */
    MCAPI float getHealthPercent() const;
    /**
     * @hash   -537684984
     * @symbol ?getLastHealth@BossComponent@@QEBAHXZ
     */
    MCAPI int getLastHealth() const;
    /**
     * @hash   1993261625
     * @symbol ?getLastPlayerUpdate@BossComponent@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ
     */
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> getLastPlayerUpdate() const;
    /**
     * @hash   -782229476
     * @symbol ?getName@BossComponent@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @hash   210228932
     * @symbol ?getOverlay@BossComponent@@QEBA?AW4BossBarOverlay@@XZ
     */
    MCAPI enum class BossBarOverlay getOverlay() const;
    /**
     * @hash   776400451
     * @symbol ?getPlayerParty@BossComponent@@QEBAAEBV?$unordered_map@VUUID@mce@@HU?$hash@VUUID@mce@@@std@@U?$equal_to@VUUID@mce@@@4@V?$allocator@U?$pair@$$CBVUUID@mce@@H@std@@@4@@std@@XZ
     */
    MCAPI class std::unordered_map<class mce::UUID, int, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, int>>> const & getPlayerParty() const;
    /**
     * @hash   1478456656
     * @symbol ?getShouldDarkenSky@BossComponent@@QEBA_NXZ
     */
    MCAPI bool getShouldDarkenSky() const;
    /**
     * @hash   182924636
     * @symbol ?handleRegisterPlayers@BossComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void handleRegisterPlayers(class Actor &);
    /**
     * @hash   -765388572
     * @symbol ??4BossComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class BossComponent & operator=(class BossComponent &&);
    /**
     * @hash   1118807040
     * @symbol ?readAdditionalSaveData@BossComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -666824434
     * @symbol ?registerPlayer@BossComponent@@QEAAXAEAVActor@@PEAVPlayer@@@Z
     */
    MCAPI void registerPlayer(class Actor &, class Player *);
    /**
     * @hash   -1980974868
     * @symbol ?resendBossEventData@BossComponent@@QEAAXAEAVActor@@PEAVPlayer@@@Z
     */
    MCAPI void resendBossEventData(class Actor &, class Player *);
    /**
     * @hash   -572334702
     * @symbol ?sendDeathTelemetry@BossComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void sendDeathTelemetry(class Actor &);
    /**
     * @hash   -258781899
     * @symbol ?setHealthBarVisible@BossComponent@@QEAAXAEAVActor@@_N@Z
     */
    MCAPI void setHealthBarVisible(class Actor &, bool);
    /**
     * @hash   1232968867
     * @symbol ?setHealthPercent@BossComponent@@QEAAXAEAVActor@@M@Z
     */
    MCAPI void setHealthPercent(class Actor &, float);
    /**
     * @hash   1868794862
     * @symbol ?setLastHealth@BossComponent@@QEAAXH@Z
     */
    MCAPI void setLastHealth(int);
    /**
     * @hash   -52507653
     * @symbol ?setLastPlayerUpdate@BossComponent@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     */
    MCAPI void setLastPlayerUpdate(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @hash   -2123023927
     * @symbol ?setName@BossComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setName(class Actor &, std::string const &);
    /**
     * @hash   1429039268
     * @symbol ?tryRemoveBoss@BossComponent@@QEAA_NAEAVActor@@AEAVPlayer@@@Z
     */
    MCAPI bool tryRemoveBoss(class Actor &, class Player &);
    /**
     * @hash   472141886
     * @symbol ?unRegisterPlayer@BossComponent@@QEAAXAEAVActor@@PEAVPlayer@@@Z
     */
    MCAPI void unRegisterPlayer(class Actor &, class Player *);
    /**
     * @hash   -1657629588
     * @symbol ??1BossComponent@@QEAA@XZ
     */
    MCAPI ~BossComponent();

//private:
    /**
     * @hash   115590802
     * @symbol ?_sendBossEvent@BossComponent@@AEAAXAEAVActor@@W4BossEventUpdateType@@PEAVPlayer@@@Z
     */
    MCAPI void _sendBossEvent(class Actor &, enum class BossEventUpdateType, class Player *);

private:

};