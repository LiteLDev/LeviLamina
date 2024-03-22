#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSoftEnumRegistry.h"
#include "mc/world/events/PlayerScoreboardEventListener.h"
#include "mc/world/events/ScoreboardEventCoordinator.h"
#include "mc/world/scores/DisplayObjective.h"
#include "mc/world/scores/IdentityDictionary.h"
#include "mc/world/scores/ObjectiveCriteria.h"
#include "mc/world/scores/ScoreboardId.h"
#include "mc/world/scores/ScoreboardIdentityRef.h"

// auto generated inclusion list
#include "mc/enums/ObjectiveSortOrder.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/world/actor/player/PlayerScoreSetFunction.h"

class Scoreboard {
    // size 720
public:
    CommandSoftEnumRegistry                                             mRegistry;
    std::unordered_map<std::string, DisplayObjective>                   mDisplayObjectives;
    IdentityDictionary                                                  mIdentityDict;
    std::unordered_map<ScoreboardId, ScoreboardIdentityRef>             mIdentityRefs;
    bool                                                                mShouldUpdateUI;
    std::unordered_map<std::string, std::unique_ptr<Objective>>         mObjectives;
    std::unordered_map<std::string, std::unique_ptr<ObjectiveCriteria>> mCriteria;
    ScoreboardEventCoordinator                                          mScoreboardEventCoordinator; // this + 536
    PlayerScoreboardEventListener                                       mPlayerListener;             // this + 648
public:
    // prevent constructor by default
    Scoreboard& operator=(Scoreboard const&);
    Scoreboard(Scoreboard const&);
    Scoreboard();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Scoreboard@@UEAA@XZ
    virtual ~Scoreboard();

    // vIndex: 1, symbol:
    // ?setDisplayObjective@Scoreboard@@UEAAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVObjective@@W4ObjectiveSortOrder@@@Z
    virtual class DisplayObjective const* setDisplayObjective(
        std::string const&     displaySlotName,
        class Objective const& objective,
        ::ObjectiveSortOrder   order
    );

    // vIndex: 2, symbol:
    // ?clearDisplayObjective@Scoreboard@@UEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class Objective* clearDisplayObjective(std::string const& displaySlotName);

    // vIndex: 3, symbol: ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBVPlayer@@@Z
    virtual struct ScoreboardId const& createScoreboardId(class Player const& player);

    // vIndex: 4, symbol: ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBVActor@@@Z
    virtual struct ScoreboardId const& createScoreboardId(class Actor const& entity);

    // vIndex: 5, symbol:
    // ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual struct ScoreboardId const& createScoreboardId(std::string const& fakePlayer);

    // vIndex: 6, symbol: ?onObjectiveAdded@Scoreboard@@UEAAXAEBVObjective@@@Z
    virtual void onObjectiveAdded(class Objective const& objective);

    // vIndex: 7, symbol: ?onObjectiveRemoved@Scoreboard@@UEAAXAEAVObjective@@@Z
    virtual void onObjectiveRemoved(class Objective& objective);

    // vIndex: 8, symbol: ?onScoreChanged@Scoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
    virtual void onScoreChanged(struct ScoreboardId const& id, class Objective const& obj);

    // vIndex: 9, symbol: ?onPlayerScoreRemoved@Scoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
    virtual void onPlayerScoreRemoved(struct ScoreboardId const& id, class Objective const& objective);

    // vIndex: 10, symbol: ?onPlayerJoined@Scoreboard@@UEAAXAEBVPlayer@@@Z
    virtual void onPlayerJoined(class Player const& player);

    // vIndex: 11, symbol: ?onPlayerIdentityUpdated@Scoreboard@@UEAAXAEBUPlayerScoreboardId@@@Z
    virtual void onPlayerIdentityUpdated(struct PlayerScoreboardId const& playerId);

    // vIndex: 12, symbol: ?tick@Scoreboard@@UEAAXXZ
    virtual void tick();

    // vIndex: 13, symbol: ?setPacketSender@Scoreboard@@UEAAXPEAVPacketSender@@@Z
    virtual void setPacketSender(class PacketSender* sender);

    // vIndex: 14, symbol: ?writeToLevelStorage@Scoreboard@@UEAAXXZ
    virtual void writeToLevelStorage();

    // vIndex: 15, symbol: ?isClientSide@Scoreboard@@MEBA_NXZ
    virtual bool isClientSide() const;

    // symbol: ??0Scoreboard@@QEAA@VCommandSoftEnumRegistry@@@Z
    MCAPI explicit Scoreboard(class CommandSoftEnumRegistry registry);

    // symbol:
    // ?addObjective@Scoreboard@@QEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBVObjectiveCriteria@@@Z
    MCAPI class Objective*
    addObjective(std::string const& name, std::string const& displayName, class ObjectiveCriteria const& criteria);

    // symbol:
    // ?addScoreListener@Scoreboard@@QEAAXAEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addScoreListener(class Player&, std::string const& objective);

    // symbol:
    // ?applyPlayerOperation@Scoreboard@@QEAAHAEA_NAEAV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@AEBUScoreboardId@@AEAVObjective@@13W4CommandOperator@@@Z
    MCAPI int applyPlayerOperation(
        bool&                             success,
        std::vector<struct ScoreboardId>& sourceErrorIds,
        struct ScoreboardId const&        target,
        class Objective&                  targetObjective,
        std::vector<struct ScoreboardId>& selector,
        class Objective&                  objective,
        ::CommandOperator                 opCode
    );

    // symbol: ?forEachIdentityRef@Scoreboard@@QEAAXV?$function@$$A6AXAEAVScoreboardIdentityRef@@@Z@std@@@Z
    MCAPI void forEachIdentityRef(std::function<void(class ScoreboardIdentityRef&)> callback);

    // symbol: ?forEachObjective@Scoreboard@@QEAAXV?$function@$$A6AXAEAVObjective@@@Z@std@@@Z
    MCAPI void forEachObjective(std::function<void(class Objective&)> callback);

    // symbol:
    // ?getCriteria@Scoreboard@@QEBAPEAVObjectiveCriteria@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class ObjectiveCriteria* getCriteria(std::string const& criteriaName) const;

    // symbol:
    // ?getCriteriaNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getCriteriaNames() const;

    // symbol: ?getDefaultCriteria@Scoreboard@@QEBAAEBVObjectiveCriteria@@XZ
    MCAPI class ObjectiveCriteria const& getDefaultCriteria() const;

    // symbol:
    // ?getDisplayInfoFiltered@Scoreboard@@QEBA?AV?$vector@UPlayerScore@@V?$allocator@UPlayerScore@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<struct PlayerScore> getDisplayInfoFiltered(std::string const& displaySlot) const;

    // symbol:
    // ?getDisplayObjective@Scoreboard@@QEBAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class DisplayObjective const* getDisplayObjective(std::string const& displaySlotName) const;

    // symbol:
    // ?getDisplayObjectiveSlotNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getDisplayObjectiveSlotNames() const;

    // symbol:
    // ?getIdScores@Scoreboard@@QEBA?AV?$vector@UScoreInfo@@V?$allocator@UScoreInfo@@@std@@@std@@AEBUScoreboardId@@@Z
    MCAPI std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const& id) const;

    // symbol:
    // ?getObjective@Scoreboard@@QEBAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Objective* getObjective(std::string const& name) const;

    // symbol:
    // ?getObjectiveNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getObjectiveNames() const;

    // symbol: ?getObjectives@Scoreboard@@QEBA?AV?$vector@PEBVObjective@@V?$allocator@PEBVObjective@@@std@@@std@@XZ
    MCAPI std::vector<class Objective const*> getObjectives() const;

    // symbol: ?getScoreboardEventCoordinator@Scoreboard@@QEAAAEAVScoreboardEventCoordinator@@XZ
    MCAPI class ScoreboardEventCoordinator& getScoreboardEventCoordinator();

    // symbol: ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBVActor@@@Z
    MCAPI struct ScoreboardId const& getScoreboardId(class Actor const& entity) const;

    // symbol: ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBVPlayer@@@Z
    MCAPI struct ScoreboardId const& getScoreboardId(class Player const& player) const;

    // symbol:
    // ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct ScoreboardId const& getScoreboardId(std::string const& name) const;

    // symbol: ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBUActorUniqueID@@@Z
    MCAPI struct ScoreboardId const& getScoreboardId(struct ActorUniqueID const& entityId) const;

    // symbol: ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
    MCAPI struct ScoreboardId const& getScoreboardId(struct PlayerScoreboardId const& playerId) const;

    // symbol: ?getScoreboardIdentityRef@Scoreboard@@QEAAPEAVScoreboardIdentityRef@@AEBUScoreboardId@@@Z
    MCAPI class ScoreboardIdentityRef* getScoreboardIdentityRef(struct ScoreboardId const& scoreboardId);

    // symbol:
    // ?getScoreboardIdentityRefs@Scoreboard@@QEBA?AV?$vector@VScoreboardIdentityRef@@V?$allocator@VScoreboardIdentityRef@@@std@@@std@@XZ
    MCAPI std::vector<class ScoreboardIdentityRef> getScoreboardIdentityRefs() const;

    // symbol: ?getTrackedIds@Scoreboard@@QEBA?AV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@XZ
    MCAPI std::vector<struct ScoreboardId> getTrackedIds() const;

    // symbol: ?hasIdentityFor@Scoreboard@@QEBA_NAEBUScoreboardId@@@Z
    MCAPI bool hasIdentityFor(struct ScoreboardId const& scoreboardId) const;

    // symbol:
    // ?modifyPlayerScore@Scoreboard@@QEAAHAEA_NPEAVScoreboardIdentityRef@@AEAVObjective@@HW4PlayerScoreSetFunction@@@Z
    MCAPI int modifyPlayerScore(
        bool&                        success,
        class ScoreboardIdentityRef* id,
        class Objective&             objective,
        int                          scoreValue,
        ::PlayerScoreSetFunction     action
    );

    // symbol: ?modifyPlayerScore@Scoreboard@@QEAAHAEA_NAEBUScoreboardId@@AEAVObjective@@HW4PlayerScoreSetFunction@@@Z
    MCAPI int modifyPlayerScore(
        bool&                      success,
        struct ScoreboardId const& id,
        class Objective&           objective,
        int                        scoreValue,
        ::PlayerScoreSetFunction   action
    );

    // symbol:
    // ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const& scoreboardId, std::string const& name);

    // symbol:
    // ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBUActorUniqueID@@@Z
    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const& scoreboardId, struct ActorUniqueID const& entityId);

    // symbol:
    // ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const& scoreboardId, struct PlayerScoreboardId const& playerId);

    // symbol: ?removeObjective@Scoreboard@@QEAA_NPEAVObjective@@@Z
    MCAPI bool removeObjective(class Objective* objective);

    // symbol: ?removeScoreListener@Scoreboard@@QEAAXAEBVPlayer@@@Z
    MCAPI void removeScoreListener(class Player const& player);

    // symbol:
    // ?removeScoreListener@Scoreboard@@QEAAXAEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removeScoreListener(class Player const& player, std::string const& objective);

    // symbol: ?resetPlayerScore@Scoreboard@@QEAA_NAEBUScoreboardId@@AEAVObjective@@@Z
    MCAPI bool resetPlayerScore(struct ScoreboardId const& id, class Objective& objective);

    // symbol: ?resetPlayerScore@Scoreboard@@QEAAXAEBUScoreboardId@@@Z
    MCAPI void resetPlayerScore(struct ScoreboardId const& id);

    // symbol: ?tryGetIdScore@Scoreboard@@QEBA?AV?$optional@UScoreInfo@@@std@@AEBUScoreboardId@@AEB_K@Z
    MCAPI std::optional<struct ScoreInfo> tryGetIdScore(struct ScoreboardId const&, uint64 const&) const;

    // symbol: ?shouldClearScoresOnDeath@Scoreboard@@SA_NAEBVActor@@@Z
    MCAPI static bool shouldClearScoresOnDeath(class Actor const& actor);

    // symbol: ?DEFAULT_CRITERIA@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DEFAULT_CRITERIA;

    // symbol: ?DISPLAY_SLOT_BELOWNAME@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DISPLAY_SLOT_BELOWNAME;

    // symbol: ?DISPLAY_SLOT_LIST@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DISPLAY_SLOT_LIST;

    // symbol: ?DISPLAY_SLOT_SIDEBAR@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DISPLAY_SLOT_SIDEBAR;

    // symbol: ?OBJECTIVES_ENUM@Scoreboard@@2PEBDEB
    MCAPI static char const* OBJECTIVES_ENUM;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_init@Scoreboard@@AEAAXXZ
    MCAPI void _init();

    // NOLINTEND
};
