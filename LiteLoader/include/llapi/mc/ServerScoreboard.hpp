/**
 * @file  ServerScoreboard.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Scoreboard.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerScoreboard.
 *
 */
class ServerScoreboard {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSCOREBOARD
public:
    class ServerScoreboard& operator=(class ServerScoreboard const &) = delete;
    ServerScoreboard(class ServerScoreboard const &) = delete;
    ServerScoreboard() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?setDisplayObjective\@ServerScoreboard\@\@UEAAPEBVDisplayObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVObjective\@\@W4ObjectiveSortOrder\@\@\@Z
     */
    virtual class DisplayObjective const * setDisplayObjective(std::string const &, class Objective const &, enum class ObjectiveSortOrder);
    /**
     * @vftbl 2
     * @symbol ?clearDisplayObjective\@ServerScoreboard\@\@UEAAPEAVObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Objective * clearDisplayObjective(std::string const &);
    /**
     * @vftbl 3
     * @symbol ?createScoreboardId\@ServerScoreboard\@\@UEAAAEBUScoreboardId\@\@AEBVPlayer\@\@\@Z
     */
    virtual struct ScoreboardId const & createScoreboardId(class Player const &);
    /**
     * @vftbl 4
     * @symbol ?createScoreboardId\@ServerScoreboard\@\@UEAAAEBUScoreboardId\@\@AEBVActor\@\@\@Z
     */
    virtual struct ScoreboardId const & createScoreboardId(class Actor const &);
    /**
     * @vftbl 5
     * @symbol ?createScoreboardId\@ServerScoreboard\@\@UEAAAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual struct ScoreboardId const & createScoreboardId(std::string const &);
    /**
     * @vftbl 6
     * @symbol ?onObjectiveAdded\@ServerScoreboard\@\@UEAAXAEBVObjective\@\@\@Z
     */
    virtual void onObjectiveAdded(class Objective const &);
    /**
     * @vftbl 7
     * @symbol ?onObjectiveRemoved\@ServerScoreboard\@\@UEAAXAEAVObjective\@\@\@Z
     */
    virtual void onObjectiveRemoved(class Objective &);
    /**
     * @vftbl 8
     * @symbol ?onScoreChanged\@ServerScoreboard\@\@UEAAXAEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    virtual void onScoreChanged(struct ScoreboardId const &, class Objective const &);
    /**
     * @vftbl 9
     * @symbol ?onPlayerScoreRemoved\@ServerScoreboard\@\@UEAAXAEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    virtual void onPlayerScoreRemoved(struct ScoreboardId const &, class Objective const &);
    /**
     * @vftbl 10
     * @symbol ?onPlayerJoined\@ServerScoreboard\@\@UEAAXAEBVPlayer\@\@\@Z
     */
    virtual void onPlayerJoined(class Player const &);
    /**
     * @vftbl 11
     * @symbol ?onPlayerIdentityUpdated\@ServerScoreboard\@\@UEAAXAEBUPlayerScoreboardId\@\@\@Z
     */
    virtual void onPlayerIdentityUpdated(struct PlayerScoreboardId const &);
    /**
     * @vftbl 12
     * @symbol ?tick\@ServerScoreboard\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 13
     * @symbol ?setPacketSender\@ServerScoreboard\@\@UEAAXPEAVPacketSender\@\@\@Z
     */
    virtual void setPacketSender(class PacketSender *);
    /**
     * @vftbl 14
     * @symbol ?writeToLevelStorage\@ServerScoreboard\@\@UEAAXXZ
     */
    virtual void writeToLevelStorage();
    /**
     * @vftbl 15
     * @symbol ?isClientSide\@ServerScoreboard\@\@MEBA_NXZ
     */
    virtual bool isClientSide() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERSCOREBOARD
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerScoreboard();
#endif
    /**
     * @symbol ??0ServerScoreboard\@\@QEAA\@VCommandSoftEnumRegistry\@\@PEAVLevelStorage\@\@\@Z
     */
    MCAPI ServerScoreboard(class CommandSoftEnumRegistry, class LevelStorage *);
    /**
     * @symbol ?deserialize\@ServerScoreboard\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void deserialize(std::unique_ptr<class CompoundTag>);
    /**
     * @symbol ?initializeImGui\@ServerScoreboard\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void initializeImGui(class Level &);
    /**
     * @symbol ?serialize\@ServerScoreboard\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;
    /**
     * @symbol ?setClearDisplayObjectiveCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVDisplayObjective\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setClearDisplayObjectiveCallback(class std::function<void (std::string const &, class DisplayObjective const &)>);
    /**
     * @symbol ?setIdentityUpdatedCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBUScoreboardId\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setIdentityUpdatedCallback(class std::function<void (struct ScoreboardId const &)>);
    /**
     * @symbol ?setScoreChangedCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBUScoreboardId\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setScoreChangedCallback(class std::function<void (struct ScoreboardId const &)>);
    /**
     * @symbol ?setScoreRemovedCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBUScoreboardId\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setScoreRemovedCallback(class std::function<void (struct ScoreboardId const &)>);
    /**
     * @symbol ?setSetDisplayObjectiveCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVDisplayObjective\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setSetDisplayObjectiveCallback(class std::function<void (std::string const &, class DisplayObjective const &)>);

//private:
    /**
     * @symbol ?_stopTrackingObjective\@ServerScoreboard\@\@AEAAXAEBVObjective\@\@\@Z
     */
    MCAPI void _stopTrackingObjective(class Objective const &);
    /**
     * @symbol ?_unpackIdentityDefToScorePacket\@ServerScoreboard\@\@AEAA?AUScorePacketInfo\@\@AEBVScoreboardIdentityRef\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI struct ScorePacketInfo _unpackIdentityDefToScorePacket(class ScoreboardIdentityRef const &, std::string const &, int);

private:

};
