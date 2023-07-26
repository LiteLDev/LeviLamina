#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerScoreboard {

public:
    // prevent constructor by default
    ServerScoreboard& operator=(ServerScoreboard const&) = delete;
    ServerScoreboard(ServerScoreboard const&)            = delete;
    ServerScoreboard()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?setDisplayObjective\@ServerScoreboard\@\@UEAAPEBVDisplayObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVObjective\@\@W4ObjectiveSortOrder\@\@\@Z
     */
    virtual class DisplayObjective const*
    setDisplayObjective(std::string const&, class Objective const&, enum class ObjectiveSortOrder); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?clearDisplayObjective\@ServerScoreboard\@\@UEAAPEAVObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Objective* clearDisplayObjective(std::string const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?createScoreboardId\@ServerScoreboard\@\@UEAAAEBUScoreboardId\@\@AEBVPlayer\@\@\@Z
     */
    virtual struct ScoreboardId const& createScoreboardId(class Player const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?createScoreboardId\@ServerScoreboard\@\@UEAAAEBUScoreboardId\@\@AEBVActor\@\@\@Z
     */
    virtual struct ScoreboardId const& createScoreboardId(class Actor const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?createScoreboardId\@ServerScoreboard\@\@UEAAAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual struct ScoreboardId const& createScoreboardId(std::string const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?onObjectiveAdded\@ServerScoreboard\@\@UEAAXAEBVObjective\@\@\@Z
     */
    virtual void onObjectiveAdded(class Objective const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?onObjectiveRemoved\@ServerScoreboard\@\@UEAAXAEAVObjective\@\@\@Z
     */
    virtual void onObjectiveRemoved(class Objective&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?onScoreChanged\@ServerScoreboard\@\@UEAAXAEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    virtual void onScoreChanged(struct ScoreboardId const&, class Objective const&); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?onPlayerScoreRemoved\@ServerScoreboard\@\@UEAAXAEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    virtual void onPlayerScoreRemoved(struct ScoreboardId const&, class Objective const&); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?onPlayerJoined\@ServerScoreboard\@\@UEAAXAEBVPlayer\@\@\@Z
     */
    virtual void onPlayerJoined(class Player const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?onPlayerIdentityUpdated\@ServerScoreboard\@\@UEAAXAEBUPlayerScoreboardId\@\@\@Z
     */
    virtual void onPlayerIdentityUpdated(struct PlayerScoreboardId const&); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?tick\@ServerScoreboard\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?setPacketSender\@ServerScoreboard\@\@UEAAXPEAVPacketSender\@\@\@Z
     */
    virtual void setPacketSender(class PacketSender*); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?writeToLevelStorage\@ServerScoreboard\@\@UEAAXXZ
     */
    virtual void writeToLevelStorage(); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?isClientSide\@ServerScoreboard\@\@MEBA_NXZ
     */
    virtual bool isClientSide() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERSCOREBOARD
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerScoreboard(); // NOLINT
#endif
    /**
     * @symbol ??0ServerScoreboard\@\@QEAA\@VCommandSoftEnumRegistry\@\@PEAVLevelStorage\@\@\@Z
     */
    MCAPI ServerScoreboard(class CommandSoftEnumRegistry, class LevelStorage*); // NOLINT
    /**
     * @symbol
     * ?deserialize\@ServerScoreboard\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void deserialize(std::unique_ptr<class CompoundTag>); // NOLINT
    /**
     * @symbol ?initializeImGui\@ServerScoreboard\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void initializeImGui(class Level&); // NOLINT
    /**
     * @symbol ?initializeWithLevelStorageManager\@ServerScoreboard\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&); // NOLINT
    /**
     * @symbol
     * ?serialize\@ServerScoreboard\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize() const; // NOLINT
    /**
     * @symbol
     * ?setClearDisplayObjectiveCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVDisplayObjective\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setClearDisplayObjectiveCallback(class std::function<
                                                void(std::string const&, class DisplayObjective const&)>); // NOLINT
    /**
     * @symbol
     * ?setIdentityUpdatedCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBUScoreboardId\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setIdentityUpdatedCallback(class std::function<void(struct ScoreboardId const&)>); // NOLINT
    /**
     * @symbol ?setScoreChangedCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBUScoreboardId\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setScoreChangedCallback(class std::function<void(struct ScoreboardId const&)>); // NOLINT
    /**
     * @symbol ?setScoreRemovedCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBUScoreboardId\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setScoreRemovedCallback(class std::function<void(struct ScoreboardId const&)>); // NOLINT
    /**
     * @symbol
     * ?setSetDisplayObjectiveCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVDisplayObjective\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setSetDisplayObjectiveCallback(class std::function<
                                              void(std::string const&, class DisplayObjective const&)>); // NOLINT

    // private:
    /**
     * @symbol ?_onSaveEvent\@ServerScoreboard\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _onSaveEvent(class LevelStorage&); // NOLINT
    /**
     * @symbol ?_stopTrackingObjective\@ServerScoreboard\@\@AEAAXAEBVObjective\@\@\@Z
     */
    MCAPI void _stopTrackingObjective(class Objective const&); // NOLINT
    /**
     * @symbol
     * ?_unpackIdentityDefToScorePacket\@ServerScoreboard\@\@AEAA?AUScorePacketInfo\@\@AEBVScoreboardIdentityRef\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI struct ScorePacketInfo
    _unpackIdentityDefToScorePacket(class ScoreboardIdentityRef const&, std::string const&, int); // NOLINT

private:
};
