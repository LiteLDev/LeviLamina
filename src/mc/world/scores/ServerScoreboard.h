#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/BasicTimer.h"

// auto generated inclusion list
#include "mc/enums/ObjectiveSortOrder.h"
#include "mc/world/scores/Scoreboard.h"

class LevelStorage;

class ServerScoreboard : public ::Scoreboard {
public:
    using ScoreChangedLevelCallback          = std::function<void(ScoreboardId const&)>;
    using ScoreRemovedLevelCallback          = std::function<void(ScoreboardId const&)>;
    using SetDisplayObjectiveLevelCallback   = std::function<void(std::string const&, DisplayObjective const&)>;
    using ClearDisplayObjectiveLevelCallback = std::function<void(std::string const&, DisplayObjective const&)>;
    using IdentityUpdatedLevelCallback       = std::function<void(ScoreboardId const&)>;

    std::unique_ptr<BasicTimer>        mSaveTimer;
    LevelStorage*                      mLevelStorage;
    bool                               mIsDirty;
    ScoreChangedLevelCallback          mScoreChangedLevelCallback;
    ScoreRemovedLevelCallback          mScoreRemovedLevelCallback;
    SetDisplayObjectiveLevelCallback   mSetDisplayObjectiveLevelCallback;
    ClearDisplayObjectiveLevelCallback mClearDisplayObjectiveLevelCallback;
    IdentityUpdatedLevelCallback       mIdentityUpdatedLevelCallback;
    std::vector<Objective const*>      mTrackedObjectives;
    PacketSender*                      mPacketSender;
    ScoreboardId                       mLastUniqueSBID;

public:
    // prevent constructor by default
    ServerScoreboard() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ServerScoreboard@@UEAA@XZ
    virtual ~ServerScoreboard();

    // vIndex: 1, symbol:
    // ?setDisplayObjective@ServerScoreboard@@UEAAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVObjective@@W4ObjectiveSortOrder@@@Z
    virtual class DisplayObjective const*
    setDisplayObjective(std::string const& displaySlotName, class Objective const&, ::ObjectiveSortOrder);

    // vIndex: 2, symbol:
    // ?clearDisplayObjective@ServerScoreboard@@UEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class Objective* clearDisplayObjective(std::string const& displaySlotName);

    // vIndex: 3, symbol: ?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBVPlayer@@@Z
    virtual struct ScoreboardId const& createScoreboardId(class Player const&);

    // vIndex: 4, symbol: ?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBVActor@@@Z
    virtual struct ScoreboardId const& createScoreboardId(class Actor const&);

    // vIndex: 5, symbol:
    // ?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual struct ScoreboardId const& createScoreboardId(std::string const&);

    // vIndex: 6, symbol: ?onObjectiveAdded@ServerScoreboard@@UEAAXAEBVObjective@@@Z
    virtual void onObjectiveAdded(class Objective const&);

    // vIndex: 7, symbol: ?onObjectiveRemoved@ServerScoreboard@@UEAAXAEAVObjective@@@Z
    virtual void onObjectiveRemoved(class Objective&);

    // vIndex: 8, symbol: ?onScoreChanged@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
    virtual void onScoreChanged(struct ScoreboardId const&, class Objective const&);

    // vIndex: 9, symbol: ?onPlayerScoreRemoved@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
    virtual void onPlayerScoreRemoved(struct ScoreboardId const&, class Objective const&);

    // vIndex: 10, symbol: ?onPlayerJoined@ServerScoreboard@@UEAAXAEBVPlayer@@@Z
    virtual void onPlayerJoined(class Player const&);

    // vIndex: 11, symbol: ?onPlayerIdentityUpdated@ServerScoreboard@@UEAAXAEBUPlayerScoreboardId@@@Z
    virtual void onPlayerIdentityUpdated(struct PlayerScoreboardId const&);

    // vIndex: 12, symbol: ?tick@ServerScoreboard@@UEAAXXZ
    virtual void tick();

    // vIndex: 13, symbol: ?setPacketSender@ServerScoreboard@@UEAAXPEAVPacketSender@@@Z
    virtual void setPacketSender(class PacketSender*);

    // vIndex: 14, symbol: ?writeToLevelStorage@ServerScoreboard@@UEAAXXZ
    virtual void writeToLevelStorage();

    // vIndex: 15, symbol: ?isClientSide@ServerScoreboard@@MEBA_NXZ
    virtual bool isClientSide() const;

    // symbol: ??0ServerScoreboard@@QEAA@VCommandSoftEnumRegistry@@PEAVLevelStorage@@@Z
    MCAPI ServerScoreboard(class CommandSoftEnumRegistry, class LevelStorage*);

    // symbol:
    // ?deserialize@ServerScoreboard@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
    MCAPI void deserialize(std::unique_ptr<class CompoundTag>);

    // symbol: ?initializeImGui@ServerScoreboard@@QEAAXAEAVLevel@@@Z
    MCAPI void initializeImGui(class Level&);

    // symbol: ?initializeWithLevelStorageManager@ServerScoreboard@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    // symbol:
    // ?serialize@ServerScoreboard@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;

    // symbol:
    // ?setClearDisplayObjectiveCallback@ServerScoreboard@@QEAAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVDisplayObjective@@@Z@std@@@Z
    MCAPI void setClearDisplayObjectiveCallback(std::function<void(std::string const&, class DisplayObjective const&)>);

    // symbol: ?setIdentityUpdatedCallback@ServerScoreboard@@QEAAXV?$function@$$A6AXAEBUScoreboardId@@@Z@std@@@Z
    MCAPI void setIdentityUpdatedCallback(std::function<void(struct ScoreboardId const&)>);

    // symbol: ?setScoreChangedCallback@ServerScoreboard@@QEAAXV?$function@$$A6AXAEBUScoreboardId@@@Z@std@@@Z
    MCAPI void setScoreChangedCallback(std::function<void(struct ScoreboardId const&)>);

    // symbol: ?setScoreRemovedCallback@ServerScoreboard@@QEAAXV?$function@$$A6AXAEBUScoreboardId@@@Z@std@@@Z
    MCAPI void setScoreRemovedCallback(std::function<void(struct ScoreboardId const&)>);

    // symbol:
    // ?setSetDisplayObjectiveCallback@ServerScoreboard@@QEAAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVDisplayObjective@@@Z@std@@@Z
    MCAPI void setSetDisplayObjectiveCallback(std::function<void(std::string const&, class DisplayObjective const&)>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onSaveEvent@ServerScoreboard@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _onSaveEvent(class LevelStorage&);

    // symbol: ?_stopTrackingObjective@ServerScoreboard@@AEAAXAEBVObjective@@@Z
    MCAPI void _stopTrackingObjective(class Objective const&);

    // symbol:
    // ?_unpackIdentityDefToScorePacket@ServerScoreboard@@AEAA?AUScorePacketInfo@@AEBVScoreboardIdentityRef@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI struct ScorePacketInfo
    _unpackIdentityDefToScorePacket(class ScoreboardIdentityRef const&, std::string const&, int);

    // NOLINTEND
};
