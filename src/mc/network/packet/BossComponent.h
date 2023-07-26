#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BossComponent {

public:
    // prevent constructor by default
    BossComponent& operator=(BossComponent const&) = delete;
    BossComponent(BossComponent const&)            = delete;

public:
    /**
     * @symbol ??0BossComponent\@\@QEAA\@XZ
     */
    MCAPI BossComponent(); // NOLINT
    /**
     * @symbol ??0BossComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BossComponent(class BossComponent&&); // NOLINT
    /**
     * @symbol ?addPlayerToParty\@BossComponent\@\@QEAAXVUUID\@mce\@\@H\@Z
     */
    MCAPI void addPlayerToParty(class mce::UUID, int); // NOLINT
    /**
     * @symbol ?broadcastBossEvent\@BossComponent\@\@QEAAXAEAVActor\@\@W4BossEventUpdateType\@\@\@Z
     */
    MCAPI void broadcastBossEvent(class Actor&, enum class BossEventUpdateType); // NOLINT
    /**
     * @symbol ?getColor\@BossComponent\@\@QEBA?AW4BossBarColor\@\@XZ
     */
    MCAPI enum class BossBarColor getColor() const; // NOLINT
    /**
     * @symbol ?getCreateWorldFog\@BossComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCreateWorldFog() const; // NOLINT
    /**
     * @symbol ?getHealthPercent\@BossComponent\@\@QEBAMXZ
     */
    MCAPI float getHealthPercent() const; // NOLINT
    /**
     * @symbol ?getLastHealth\@BossComponent\@\@QEBAHXZ
     */
    MCAPI int getLastHealth() const; // NOLINT
    /**
     * @symbol
     * ?getLastPlayerUpdate\@BossComponent\@\@QEBA?AV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@XZ
     */
    MCAPI class std::chrono::time_point<
        struct std::chrono::steady_clock,
        class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>
    getLastPlayerUpdate() const; // NOLINT
    /**
     * @symbol
     * ?getName\@BossComponent\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?getOverlay\@BossComponent\@\@QEBA?AW4BossBarOverlay\@\@XZ
     */
    MCAPI enum class BossBarOverlay getOverlay() const; // NOLINT
    /**
     * @symbol
     * ?getPlayerParty\@BossComponent\@\@QEBAAEBV?$unordered_map\@VUUID\@mce\@\@HU?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@4\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@H\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        class mce::UUID,
        int,
        struct std::hash<class mce::UUID>,
        struct std::equal_to<class mce::UUID>,
        class std::allocator<struct std::pair<class mce::UUID const, int>>> const&
    getPlayerParty() const; // NOLINT
    /**
     * @symbol ?getShouldDarkenSky\@BossComponent\@\@QEBA_NXZ
     */
    MCAPI bool getShouldDarkenSky() const; // NOLINT
    /**
     * @symbol ?handleRegisterPlayers\@BossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void handleRegisterPlayers(class Actor&); // NOLINT
    /**
     * @symbol ??4BossComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BossComponent& operator=(class BossComponent&&); // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@BossComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?registerPlayer\@BossComponent\@\@QEAAXAEAVActor\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void registerPlayer(class Actor&, class Player*); // NOLINT
    /**
     * @symbol ?resendBossEventData\@BossComponent\@\@QEAAXAEAVActor\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void resendBossEventData(class Actor&, class Player*); // NOLINT
    /**
     * @symbol ?sendDeathTelemetry\@BossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendDeathTelemetry(class Actor&); // NOLINT
    /**
     * @symbol ?setHealthBarVisible\@BossComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void setHealthBarVisible(class Actor&, bool); // NOLINT
    /**
     * @symbol ?setHealthPercent\@BossComponent\@\@QEAAXAEAVActor\@\@M\@Z
     */
    MCAPI void setHealthPercent(class Actor&, float); // NOLINT
    /**
     * @symbol ?setLastHealth\@BossComponent\@\@QEAAXH\@Z
     */
    MCAPI void setLastHealth(int); // NOLINT
    /**
     * @symbol
     * ?setLastPlayerUpdate\@BossComponent\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void setLastPlayerUpdate(class std::chrono::time_point<
                                   struct std::chrono::steady_clock,
                                   class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
    /**
     * @symbol
     * ?setName\@BossComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(class Actor&, std::string const&); // NOLINT
    /**
     * @symbol ?tryRemoveBoss\@BossComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool tryRemoveBoss(class Actor&, class Player&); // NOLINT
    /**
     * @symbol ?unRegisterPlayer\@BossComponent\@\@QEAAXAEAVActor\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void unRegisterPlayer(class Actor&, class Player*); // NOLINT
    /**
     * @symbol ??1BossComponent\@\@QEAA\@XZ
     */
    MCAPI ~BossComponent(); // NOLINT

    // private:
    /**
     * @symbol ?_sendBossEvent\@BossComponent\@\@AEAAXAEAVActor\@\@W4BossEventUpdateType\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void _sendBossEvent(class Actor&, enum class BossEventUpdateType, class Player*); // NOLINT

private:
};
