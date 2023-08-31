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
    BossComponent& operator=(BossComponent const&) = delete;
    BossComponent(BossComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BossComponent\@\@QEAA\@XZ
     */
    MCAPI BossComponent();
    /**
     * @symbol ??0BossComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BossComponent(class BossComponent&&);
    /**
     * @symbol ?addPlayerToParty\@BossComponent\@\@QEAAXVUUID\@mce\@\@H\@Z
     */
    MCAPI void addPlayerToParty(class mce::UUID, int32_t);
    /**
     * @symbol ?broadcastBossEvent\@BossComponent\@\@QEAAXAEAVActor\@\@W4BossEventUpdateType\@\@\@Z
     */
    MCAPI void broadcastBossEvent(class Actor&, enum class BossEventUpdateType);
    /**
     * @symbol ?getColor\@BossComponent\@\@QEBA?AW4BossBarColor\@\@XZ
     */
    MCAPI enum class BossBarColor getColor() const;
    /**
     * @symbol ?getCreateWorldFog\@BossComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCreateWorldFog() const;
    /**
     * @symbol ?getHealthPercent\@BossComponent\@\@QEBAMXZ
     */
    MCAPI float getHealthPercent() const;
    /**
     * @symbol ?getLastHealth\@BossComponent\@\@QEBAHXZ
     */
    MCAPI int32_t getLastHealth() const;
    /**
     * @symbol
     * ?getLastPlayerUpdate\@BossComponent\@\@QEBA?AV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@XZ
     */
    MCAPI std::chrono::steady_clock::time_point getLastPlayerUpdate() const;
    /**
     * @symbol
     * ?getName\@BossComponent\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @symbol ?getOverlay\@BossComponent\@\@QEBA?AW4BossBarOverlay\@\@XZ
     */
    MCAPI enum class BossBarOverlay getOverlay() const;
    /**
     * @symbol
     * ?getPlayerParty\@BossComponent\@\@QEBAAEBV?$unordered_map\@VUUID\@mce\@\@HU?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@4\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@H\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI std::unordered_map<class mce::UUID, int32_t> const& getPlayerParty() const;
    /**
     * @symbol ?getShouldDarkenSky\@BossComponent\@\@QEBA_NXZ
     */
    MCAPI bool getShouldDarkenSky() const;
    /**
     * @symbol ?handleRegisterPlayers\@BossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void handleRegisterPlayers(class Actor&);
    /**
     * @symbol ??4BossComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BossComponent& operator=(class BossComponent&&);
    /**
     * @symbol ?readAdditionalSaveData\@BossComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?registerPlayer\@BossComponent\@\@QEAAXAEAVActor\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void registerPlayer(class Actor&, class Player*);
    /**
     * @symbol ?resendBossEventData\@BossComponent\@\@QEAAXAEAVActor\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void resendBossEventData(class Actor&, class Player*);
    /**
     * @symbol ?sendDeathTelemetry\@BossComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void sendDeathTelemetry(class Actor&);
    /**
     * @symbol ?setHealthBarVisible\@BossComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void setHealthBarVisible(class Actor&, bool);
    /**
     * @symbol ?setHealthPercent\@BossComponent\@\@QEAAXAEAVActor\@\@M\@Z
     */
    MCAPI void setHealthPercent(class Actor&, float);
    /**
     * @symbol ?setLastHealth\@BossComponent\@\@QEAAXH\@Z
     */
    MCAPI void setLastHealth(int32_t);
    /**
     * @symbol
     * ?setLastPlayerUpdate\@BossComponent\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void setLastPlayerUpdate(std::chrono::steady_clock::time_point);
    /**
     * @symbol
     * ?setName\@BossComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(class Actor&, std::string const&);
    /**
     * @symbol ?tryRemoveBoss\@BossComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool tryRemoveBoss(class Actor&, class Player&);
    /**
     * @symbol ?unRegisterPlayer\@BossComponent\@\@QEAAXAEAVActor\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void unRegisterPlayer(class Actor&, class Player*);
    /**
     * @symbol ??1BossComponent\@\@QEAA\@XZ
     */
    MCAPI ~BossComponent();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_sendBossEvent\@BossComponent\@\@AEAAXAEAVActor\@\@W4BossEventUpdateType\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void _sendBossEvent(class Actor&, enum class BossEventUpdateType, class Player*);
    // NOLINTEND
};
