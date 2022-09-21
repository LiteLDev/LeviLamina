/**
 * @file  MC/ServerScoreboard.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~ServerScoreboard();
    /**
     * @hash   -1488447100
     * @vftbl  1
     * @symbol ?setDisplayObjective@ServerScoreboard@@UEAAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVObjective@@W4ObjectiveSortOrder@@@Z
     */
    virtual class DisplayObjective const * setDisplayObjective(std::string const &, class Objective const &, enum ObjectiveSortOrder);
    /**
     * @hash   -1537441757
     * @vftbl  2
     * @symbol ?clearDisplayObjective@ServerScoreboard@@UEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual class Objective * clearDisplayObjective(std::string const &);
    /**
     * @hash   -1020472144
     * @vftbl  3
     * @symbol ?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBVPlayer@@@Z
     */
    virtual struct ScoreboardId const & createScoreboardId(class Player const &);
    /**
     * @hash   -172736924
     * @vftbl  4
     * @symbol ?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBVActor@@@Z
     */
    virtual struct ScoreboardId const & createScoreboardId(class Actor const &);
    /**
     * @hash   -1683245076
     * @vftbl  5
     * @symbol ?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual struct ScoreboardId const & createScoreboardId(std::string const &);
    /**
     * @hash   -1579142406
     * @vftbl  6
     * @symbol ?onObjectiveAdded@ServerScoreboard@@UEAAXAEBVObjective@@@Z
     */
    virtual void onObjectiveAdded(class Objective const &);
    /**
     * @hash   2035018301
     * @vftbl  7
     * @symbol ?onObjectiveRemoved@ServerScoreboard@@UEAAXAEAVObjective@@@Z
     */
    virtual void onObjectiveRemoved(class Objective &);
    /**
     * @hash   -1497760286
     * @vftbl  8
     * @symbol ?onScoreChanged@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
     */
    virtual void onScoreChanged(struct ScoreboardId const &, class Objective const &);
    /**
     * @hash   -902960705
     * @vftbl  9
     * @symbol ?onPlayerScoreRemoved@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
     */
    virtual void onPlayerScoreRemoved(struct ScoreboardId const &, class Objective const &);
    /**
     * @hash   -2078637641
     * @vftbl  10
     * @symbol ?onPlayerJoined@ServerScoreboard@@UEAAXAEBVPlayer@@@Z
     */
    virtual void onPlayerJoined(class Player const &);
    /**
     * @hash   1743193281
     * @vftbl  11
     * @symbol ?onPlayerIdentityUpdated@ServerScoreboard@@UEAAXAEBUPlayerScoreboardId@@@Z
     */
    virtual void onPlayerIdentityUpdated(struct PlayerScoreboardId const &);
    /**
     * @hash   -837436723
     * @vftbl  12
     * @symbol ?tick@ServerScoreboard@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1691601588
     * @vftbl  13
     * @symbol ?setPacketSender@ServerScoreboard@@UEAAXPEAVPacketSender@@@Z
     */
    virtual void setPacketSender(class PacketSender *);
    /**
     * @hash   -346040207
     * @vftbl  14
     * @symbol ?writeToLevelStorage@ServerScoreboard@@UEAAXXZ
     */
    virtual void writeToLevelStorage();
    /**
     * @hash   -2083290010
     * @vftbl  15
     * @symbol ?isClientSide@ServerScoreboard@@MEBA_NXZ
     */
    virtual bool isClientSide() const;
    /**
     * @hash   617862334
     * @symbol ??0ServerScoreboard@@QEAA@VCommandSoftEnumRegistry@@PEAVLevelStorage@@@Z
     */
    MCAPI ServerScoreboard(class CommandSoftEnumRegistry, class LevelStorage *);
    /**
     * @hash   -1290087614
     * @symbol ?deserialize@ServerScoreboard@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
     */
    MCAPI void deserialize(std::unique_ptr<class CompoundTag>);
    /**
     * @hash   272346614
     * @symbol ?serialize@ServerScoreboard@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> serialize() const;
    /**
     * @hash   2051449076
     * @symbol ?setClearDisplayObjectiveCallback@ServerScoreboard@@QEAAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVDisplayObjective@@@Z@std@@@Z
     */
    MCAPI void setClearDisplayObjectiveCallback(class std::function<void (std::string const &, class DisplayObjective const &)>);
    /**
     * @hash   1543989843
     * @symbol ?setIdentityUpdatedCallback@ServerScoreboard@@QEAAXV?$function@$$A6AXAEBUScoreboardId@@@Z@std@@@Z
     */
    MCAPI void setIdentityUpdatedCallback(class std::function<void (struct ScoreboardId const &)>);
    /**
     * @hash   554307343
     * @symbol ?setScoreChangedCallback@ServerScoreboard@@QEAAXV?$function@$$A6AXAEBUScoreboardId@@@Z@std@@@Z
     */
    MCAPI void setScoreChangedCallback(class std::function<void (struct ScoreboardId const &)>);
    /**
     * @hash   -1172543913
     * @symbol ?setScoreRemovedCallback@ServerScoreboard@@QEAAXV?$function@$$A6AXAEBUScoreboardId@@@Z@std@@@Z
     */
    MCAPI void setScoreRemovedCallback(class std::function<void (struct ScoreboardId const &)>);
    /**
     * @hash   1725937124
     * @symbol ?setSetDisplayObjectiveCallback@ServerScoreboard@@QEAAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVDisplayObjective@@@Z@std@@@Z
     */
    MCAPI void setSetDisplayObjectiveCallback(class std::function<void (std::string const &, class DisplayObjective const &)>);

//private:
    /**
     * @hash   -988004262
     * @symbol ?_stopTrackingObjective@ServerScoreboard@@AEAAXAEBVObjective@@@Z
     */
    MCAPI void _stopTrackingObjective(class Objective const &);
    /**
     * @hash   -1264239687
     * @symbol ?_unpackIdentityDefToScorePacket@ServerScoreboard@@AEAA?AUScorePacketInfo@@AEBVScoreboardIdentityRef@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI struct ScorePacketInfo _unpackIdentityDefToScorePacket(class ScoreboardIdentityRef const &, std::string const &, int);

private:

};