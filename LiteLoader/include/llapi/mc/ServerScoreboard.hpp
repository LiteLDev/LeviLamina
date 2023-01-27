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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerScoreboard();
    /**
     * @hash   -759686204
     * @vftbl  1
     * @symbol  ?setDisplayObjective\@ServerScoreboard\@\@UEAAPEBVDisplayObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVObjective\@\@W4ObjectiveSortOrder\@\@\@Z
     */
    virtual class DisplayObjective const * setDisplayObjective(std::string const &, class Objective const &, enum class ObjectiveSortOrder);
    /**
     * @hash   -808619357
     * @vftbl  2
     * @symbol  ?clearDisplayObjective\@ServerScoreboard\@\@UEAAPEAVObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Objective * clearDisplayObjective(std::string const &);
    /**
     * @hash   -291634368
     * @vftbl  3
     * @symbol  ?createScoreboardId\@ServerScoreboard\@\@UEAAAEBUScoreboardId\@\@AEBVPlayer\@\@\@Z
     */
    virtual struct ScoreboardId const & createScoreboardId(class Player const &);
    /**
     * @hash   556100852
     * @vftbl  4
     * @symbol  ?createScoreboardId\@ServerScoreboard\@\@UEAAAEBUScoreboardId\@\@AEBVActor\@\@\@Z
     */
    virtual struct ScoreboardId const & createScoreboardId(class Actor const &);
    /**
     * @hash   -954407300
     * @vftbl  5
     * @symbol  ?createScoreboardId\@ServerScoreboard\@\@UEAAAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual struct ScoreboardId const & createScoreboardId(std::string const &);
    /**
     * @hash   -850304630
     * @vftbl  6
     * @symbol  ?onObjectiveAdded\@ServerScoreboard\@\@UEAAXAEBVObjective\@\@\@Z
     */
    virtual void onObjectiveAdded(class Objective const &);
    /**
     * @hash   -1531126595
     * @vftbl  7
     * @symbol  ?onObjectiveRemoved\@ServerScoreboard\@\@UEAAXAEAVObjective\@\@\@Z
     */
    virtual void onObjectiveRemoved(class Objective &);
    /**
     * @hash   -768999390
     * @vftbl  8
     * @symbol  ?onScoreChanged\@ServerScoreboard\@\@UEAAXAEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    virtual void onScoreChanged(struct ScoreboardId const &, class Objective const &);
    /**
     * @hash   -174184433
     * @vftbl  9
     * @symbol  ?onPlayerScoreRemoved\@ServerScoreboard\@\@UEAAXAEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    virtual void onPlayerScoreRemoved(struct ScoreboardId const &, class Objective const &);
    /**
     * @hash   -1349845993
     * @vftbl  10
     * @symbol  ?onPlayerJoined\@ServerScoreboard\@\@UEAAXAEBVPlayer\@\@\@Z
     */
    virtual void onPlayerJoined(class Player const &);
    /**
     * @hash   -1822982367
     * @vftbl  11
     * @symbol  ?onPlayerIdentityUpdated\@ServerScoreboard\@\@UEAAXAEBUPlayerScoreboardId\@\@\@Z
     */
    virtual void onPlayerIdentityUpdated(struct PlayerScoreboardId const &);
    /**
     * @hash   -108706579
     * @vftbl  12
     * @symbol  ?tick\@ServerScoreboard\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1874727820
     * @vftbl  13
     * @symbol  ?setPacketSender\@ServerScoreboard\@\@UEAAXPEAVPacketSender\@\@\@Z
     */
    virtual void setPacketSender(class PacketSender *);
    /**
     * @hash   382689937
     * @vftbl  14
     * @symbol  ?writeToLevelStorage\@ServerScoreboard\@\@UEAAXXZ
     */
    virtual void writeToLevelStorage();
    /**
     * @hash   -1982669466
     * @vftbl  15
     * @symbol  ?isClientSide\@ServerScoreboard\@\@MEBA_NXZ
     */
    virtual bool isClientSide() const;
    /**
     * @hash   1346454094
     * @symbol  ??0ServerScoreboard\@\@QEAA\@VCommandSoftEnumRegistry\@\@PEAVLevelStorage\@\@\@Z
     */
    MCAPI ServerScoreboard(class CommandSoftEnumRegistry, class LevelStorage *);
    /**
     * @hash   -561249838
     * @symbol  ?deserialize\@ServerScoreboard\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void deserialize(std::unique_ptr<class CompoundTag>);
    /**
     * @hash   1001092134
     * @symbol  ?serialize\@ServerScoreboard\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;
    /**
     * @hash   -1514788076
     * @symbol  ?setClearDisplayObjectiveCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVDisplayObjective\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setClearDisplayObjectiveCallback(class std::function<void (std::string const &, class DisplayObjective const &)>);
    /**
     * @hash   -2022370317
     * @symbol  ?setIdentityUpdatedCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBUScoreboardId\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setIdentityUpdatedCallback(class std::function<void (struct ScoreboardId const &)>);
    /**
     * @hash   1282945231
     * @symbol  ?setScoreChangedCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBUScoreboardId\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setScoreChangedCallback(class std::function<void (struct ScoreboardId const &)>);
    /**
     * @hash   -443875273
     * @symbol  ?setScoreRemovedCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBUScoreboardId\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setScoreRemovedCallback(class std::function<void (struct ScoreboardId const &)>);
    /**
     * @hash   -1840330780
     * @symbol  ?setSetDisplayObjectiveCallback\@ServerScoreboard\@\@QEAAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVDisplayObjective\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setSetDisplayObjectiveCallback(class std::function<void (std::string const &, class DisplayObjective const &)>);

//private:
    /**
     * @hash   -259350998
     * @symbol  ?_stopTrackingObjective\@ServerScoreboard\@\@AEAAXAEBVObjective\@\@\@Z
     */
    MCAPI void _stopTrackingObjective(class Objective const &);
    /**
     * @hash   -535586423
     * @symbol  ?_unpackIdentityDefToScorePacket\@ServerScoreboard\@\@AEAA?AUScorePacketInfo\@\@AEBVScoreboardIdentityRef\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI struct ScorePacketInfo _unpackIdentityDefToScorePacket(class ScoreboardIdentityRef const &, std::string const &, int);

private:

};