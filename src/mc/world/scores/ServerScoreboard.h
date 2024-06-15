#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/enums/ObjectiveSortOrder.h"
#include "mc/world/scores/Scoreboard.h"

class ServerScoreboard : public ::Scoreboard {
public:
    // prevent constructor by default
    ServerScoreboard& operator=(ServerScoreboard const&);
    ServerScoreboard(ServerScoreboard const&);
    ServerScoreboard();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ServerScoreboard@@UEAA@XZ
    virtual ~ServerScoreboard();

    // vIndex: 1, symbol:
    // ?setDisplayObjective@ServerScoreboard@@UEAAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVObjective@@W4ObjectiveSortOrder@@@Z
    virtual class DisplayObjective const* setDisplayObjective(
        std::string const&     displaySlotName,
        class Objective const& objective,
        ::ObjectiveSortOrder   order
    );

    // vIndex: 2, symbol:
    // ?clearDisplayObjective@ServerScoreboard@@UEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class Objective* clearDisplayObjective(std::string const& displaySlotName);

    // vIndex: 3, symbol: ?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBVPlayer@@@Z
    virtual struct ScoreboardId const& createScoreboardId(class Player const& player);

    // vIndex: 4, symbol: ?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBVActor@@@Z
    virtual struct ScoreboardId const& createScoreboardId(class Actor const& entity);

    // vIndex: 5, symbol:
    // ?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual struct ScoreboardId const& createScoreboardId(std::string const& name);

    // vIndex: 6, symbol: ?onObjectiveAdded@ServerScoreboard@@UEAAXAEBVObjective@@@Z
    virtual void onObjectiveAdded(class Objective const& objective);

    // vIndex: 7, symbol: ?onObjectiveRemoved@ServerScoreboard@@UEAAXAEAVObjective@@@Z
    virtual void onObjectiveRemoved(class Objective& objective);

    // vIndex: 8, symbol: ?onScoreChanged@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
    virtual void onScoreChanged(struct ScoreboardId const& id, class Objective const& obj);

    // vIndex: 9, symbol: ?onPlayerScoreRemoved@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
    virtual void onPlayerScoreRemoved(struct ScoreboardId const& id, class Objective const& objective);

    // vIndex: 10, symbol: ?onPlayerJoined@ServerScoreboard@@UEAAXAEBVPlayer@@@Z
    virtual void onPlayerJoined(class Player const& player);

    // vIndex: 11, symbol: ?onPlayerIdentityUpdated@ServerScoreboard@@UEAAXAEBUPlayerScoreboardId@@@Z
    virtual void onPlayerIdentityUpdated(struct PlayerScoreboardId const& playerId);

    // vIndex: 12, symbol: ?tick@ServerScoreboard@@UEAAXXZ
    virtual void tick();

    // vIndex: 13, symbol: ?setPacketSender@ServerScoreboard@@UEAAXPEAVPacketSender@@@Z
    virtual void setPacketSender(class PacketSender* sender);

    // vIndex: 14, symbol: ?writeToLevelStorage@ServerScoreboard@@UEAAXXZ
    virtual void writeToLevelStorage();

    // vIndex: 15, symbol: ?isClientSide@ServerScoreboard@@MEBA_NXZ
    virtual bool isClientSide() const;

    // symbol:
    // ??0ServerScoreboard@@QEAA@VCommandSoftEnumRegistry@@PEAVLevelStorage@@AEBV?$not_null@V?$StackRefResult@VGameplayUserManager@@@@@gsl@@@Z
    MCAPI
    ServerScoreboard(class CommandSoftEnumRegistry, class LevelStorage*, gsl::not_null<class StackRefResult<class GameplayUserManager>> const&);

    // symbol:
    // ?deserialize@ServerScoreboard@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
    MCAPI void deserialize(std::unique_ptr<class CompoundTag> root);

    // symbol: ?initializeImGui@ServerScoreboard@@QEAAXAEAVLevel@@@Z
    MCAPI void initializeImGui(class Level& level);

    // symbol: ?initializeWithLevelStorageManager@ServerScoreboard@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    // symbol: ?intializeWithActorManager@ServerScoreboard@@QEAAXAEAVActorManager@@@Z
    MCAPI void intializeWithActorManager(class ActorManager&);

    // symbol:
    // ?serialize@ServerScoreboard@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_clearAllScoreTagsForObjective@ServerScoreboard@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVDisplayObjective@@@Z
    MCAPI void _clearAllScoreTagsForObjective(std::string const&, class DisplayObjective const&);

    // symbol: ?_getPlayer@ServerScoreboard@@AEBAPEAVPlayer@@UActorUniqueID@@@Z
    MCAPI class Player* _getPlayer(struct ActorUniqueID) const;

    // symbol: ?_getValidGameplayUserManager@ServerScoreboard@@AEBA?AV?$StackRefResult@VGameplayUserManager@@@@XZ
    MCAPI class StackRefResult<class GameplayUserManager> _getValidGameplayUserManager() const;

    // symbol: ?_onGameplayUserRemoved@ServerScoreboard@@AEAAXAEAVEntityContext@@@Z
    MCAPI void _onGameplayUserRemoved(class EntityContext&);

    // symbol: ?_onRemoveActorEntityReferences@ServerScoreboard@@AEAAXAEAVActor@@@Z
    MCAPI void _onRemoveActorEntityReferences(class Actor&);

    // symbol: ?_onSaveEvent@ServerScoreboard@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _onSaveEvent(class LevelStorage&);

    // symbol: ?_stopTrackingObjective@ServerScoreboard@@AEAAXAEBVObjective@@@Z
    MCAPI void _stopTrackingObjective(class Objective const& objective);

    // symbol:
    // ?_unpackIdentityDefToScorePacket@ServerScoreboard@@AEAA?AUScorePacketInfo@@AEBVScoreboardIdentityRef@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI struct ScorePacketInfo _unpackIdentityDefToScorePacket(
        class ScoreboardIdentityRef const& identityDef,
        std::string const&                 objName,
        int                                score
    );

    // symbol:
    // ?_updateAllScoreTagsForObjective@ServerScoreboard@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVDisplayObjective@@@Z
    MCAPI void _updateAllScoreTagsForObjective(std::string const&, class DisplayObjective const&);

    // symbol: ?_updateScoreTag@ServerScoreboard@@AEAAXAEBUScoreboardId@@_N@Z
    MCAPI void _updateScoreTag(struct ScoreboardId const&, bool);

    // NOLINTEND
};
