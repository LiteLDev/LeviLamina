/**
 * @file  BossComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0BossComponent\@\@QEAA\@XZ
     */
    MCAPI BossComponent();
    /**
     * @symbol  ??0BossComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BossComponent(class BossComponent &&);
    /**
     * @symbol  ?addPlayerToParty\@BossComponent\@\@QEAAXVUUID\@mce\@\@H\@Z
     */
    MCAPI void addPlayerToParty(class mce::UUID, int);
    /**
     * @symbol  ?broadcastBossEvent\@BossComponent\@\@QEAAXAEAVActor\@\@W4BossEventUpdateType\@\@\@Z
     */
    MCAPI void broadcastBossEvent(class Actor &, enum class BossEventUpdateType);
    /**
     * @symbol  ?getColor\@BossComponent\@\@QEBA?AW4BossBarColor\@\@XZ
     */
    MCAPI enum class BossBarColor getColor() const;
    /**
     * @symbol  ?getCreateWorldFog\@BossComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCreateWorldFog() const;
    /**
     * @symbol  ?getHealthPercent\@BossComponent\@\@QEBAMXZ
     */
    MCAPI float getHealthPercent() const;
    /**
     * @symbol  ?getLastHealth\@BossComponent\@\@QEBAHXZ
     */
    MCAPI int getLastHealth() const;
    /**
     * @symbol  ?getLastPlayerUpdate\@BossComponent\@\@QEBA?AV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@XZ
     */
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> getLastPlayerUpdate() const;
    /**
     * @symbol  ?getName\@BossComponent\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @symbol  ?getOverlay\@BossComponent\@\@QEBA?AW4BossBarOverlay\@\@XZ
     */
    MCAPI enum class BossBarOverlay getOverlay() const;
    /**
     * @symbol  ?getPlayerParty\@BossComponent\@\@QEBAAEBV?$unordered_map\@VUUID\@mce\@\@HU?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@4\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@H\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<class mce::UUID, int, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, int>>> const & getPlayerParty() const;
    /**
     * @symbol  ?getShouldDarkenSky\@BossComponent\@\@QEBA_NXZ
     */
    MCAPI bool getShouldDarkenSky() const;
    /**
     * @symbol  ?handleRegisterPlayers\@BossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void handleRegisterPlayers(class Actor &);
    /**
     * @symbol  ??4BossComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BossComponent & operator=(class BossComponent &&);
    /**
     * @symbol  ?readAdditionalSaveData\@BossComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?registerPlayer\@BossComponent\@\@QEAAXAEAVActor\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void registerPlayer(class Actor &, class Player *);
    /**
     * @symbol  ?resendBossEventData\@BossComponent\@\@QEAAXAEAVActor\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void resendBossEventData(class Actor &, class Player *);
    /**
     * @symbol  ?sendDeathTelemetry\@BossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendDeathTelemetry(class Actor &);
    /**
     * @symbol  ?setHealthBarVisible\@BossComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void setHealthBarVisible(class Actor &, bool);
    /**
     * @symbol  ?setHealthPercent\@BossComponent\@\@QEAAXAEAVActor\@\@M\@Z
     */
    MCAPI void setHealthPercent(class Actor &, float);
    /**
     * @symbol  ?setLastHealth\@BossComponent\@\@QEAAXH\@Z
     */
    MCAPI void setLastHealth(int);
    /**
     * @symbol  ?setLastPlayerUpdate\@BossComponent\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void setLastPlayerUpdate(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol  ?setName\@BossComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(class Actor &, std::string const &);
    /**
     * @symbol  ?tryRemoveBoss\@BossComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool tryRemoveBoss(class Actor &, class Player &);
    /**
     * @symbol  ?unRegisterPlayer\@BossComponent\@\@QEAAXAEAVActor\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void unRegisterPlayer(class Actor &, class Player *);
    /**
     * @symbol  ??1BossComponent\@\@QEAA\@XZ
     */
    MCAPI ~BossComponent();

//private:
    /**
     * @symbol  ?_sendBossEvent\@BossComponent\@\@AEAAXAEAVActor\@\@W4BossEventUpdateType\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void _sendBossEvent(class Actor &, enum class BossEventUpdateType, class Player *);

private:

};