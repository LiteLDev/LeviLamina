#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ObjectiveSortOrder.h"
#include "mc/server/commands/WildcardCommandSelector.h"
#include "mc/world/actor/player/PlayerScoreSetFunction.h"
#include "mc/world/level/Command.h"

class ScoreboardCommand : public ::Command {
public:
    // ScoreboardCommand inner types declare
    // clang-format off
    struct InitProxy;
    struct SetScoreOutput;
    // clang-format on

    // ScoreboardCommand inner types define
    struct InitProxy {
    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();

    public:
        // NOLINTBEGIN
        // symbol: ??0InitProxy@ScoreboardCommand@@QEAA@AEAVServerLevel@@@Z
        MCAPI explicit InitProxy(class ServerLevel& level);

        // NOLINTEND
    };

    struct SetScoreOutput {
    public:
        // prevent constructor by default
        SetScoreOutput& operator=(SetScoreOutput const&);
        SetScoreOutput(SetScoreOutput const&);
        SetScoreOutput();

    public:
        // NOLINTBEGIN
        // symbol: ??1SetScoreOutput@ScoreboardCommand@@QEAA@XZ
        MCAPI ~SetScoreOutput();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScoreboardCommand& operator=(ScoreboardCommand const&);
    ScoreboardCommand(ScoreboardCommand const&);
    ScoreboardCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScoreboardCommand@@UEAA@XZ
    virtual ~ScoreboardCommand();

    // vIndex: 2, symbol: ?execute@ScoreboardCommand@@EEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@ScoreboardCommand@@SAXAEAVCommandRegistry@@$$QEAUInitProxy@1@@Z
    MCAPI static void setup(class CommandRegistry& registry, struct ScoreboardCommand::InitProxy&& dependencies);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateCumulativeOutput@ScoreboardCommand@@AEBAXAEBUSetScoreOutput@1@AEBVObjective@@AEAVCommandOutput@@@Z
    MCAPI void _generateCumulativeOutput(
        struct ScoreboardCommand::SetScoreOutput const& cumulativeOutput,
        class Objective const&                          objective,
        class CommandOutput&                            output
    ) const;

    // symbol:
    // ?_getObjective@ScoreboardCommand@@AEBAPEAVObjective@@AEBVScoreboard@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NAEAVCommandOutput@@@Z
    MCAPI class Objective* _getObjective(
        class Scoreboard const& scoreboard,
        std::string const&      name,
        bool                    forWrite,
        class CommandOutput&    output
    ) const;

    // symbol:
    // ?_getScoreboardIdsForSelector@ScoreboardCommand@@AEBA?AV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@AEAVScoreboard@@AEBV?$WildcardCommandSelector@VActor@@@@AEBVCommandOrigin@@AEAVCommandOutput@@_N@Z
    MCAPI std::vector<struct ScoreboardId> _getScoreboardIdsForSelector(
        class Scoreboard&                                 scoreboard,
        class WildcardCommandSelector<class Actor> const& selector,
        class CommandOrigin const&                        origin,
        class CommandOutput&                              output,
        bool                                              shouldCreateMissingId
    ) const;

    // symbol:
    // ?_getSelectorResultsForObjective@ScoreboardCommand@@AEBA_NAEAV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@AEAVScoreboard@@AEBV?$WildcardCommandSelector@VActor@@@@AEAVObjective@@AEBVCommandOrigin@@AEAVCommandOutput@@_N@Z
    MCAPI bool _getSelectorResultsForObjective(
        std::vector<struct ScoreboardId>&                 results,
        class Scoreboard&                                 scoreboard,
        class WildcardCommandSelector<class Actor> const& selector,
        class Objective&                                  objective,
        class CommandOrigin const&                        origin,
        class CommandOutput&                              output,
        bool                                              shouldCreateMissingId
    ) const;

    // symbol:
    // ?addObjective@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11AEAVCommandOutput@@@Z
    MCAPI void addObjective(
        class Scoreboard&    scoreboard,
        std::string const&   name,
        std::string const&   criteriaName,
        std::string const&   displayName,
        class CommandOutput& output
    ) const;

    // symbol:
    // ?addPlayerScore@ScoreboardCommand@@AEBAXAEAVScoreboard@@W4PlayerScoreSetFunction@@AEBUScoreboardId@@AEAVObjective@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEAVCommandOutput@@AEAUSetScoreOutput@1@@Z
    MCAPI void addPlayerScore(
        class Scoreboard&                                              scoreboard,
        ::PlayerScoreSetFunction                                       fn,
        struct ScoreboardId const&                                     targetId,
        class Objective&                                               objective,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        class CommandOutput&                                           output,
        struct ScoreboardCommand::SetScoreOutput&                      cumulativeOutput
    ) const;

    // symbol:
    // ?applyPlayerOperation@ScoreboardCommand@@AEBA_NAEAVScoreboard@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEBUScoreboardId@@AEAVObjective@@3AEBVCommandOrigin@@AEAVCommandOutput@@AEAUSetScoreOutput@1@@Z
    MCAPI bool applyPlayerOperation(
        class Scoreboard&                                              scoreboard,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        struct ScoreboardId const&                                     targetId,
        class Objective&                                               targetObjective,
        class Objective&                                               objective,
        class CommandOrigin const&                                     origin,
        class CommandOutput&                                           output,
        struct ScoreboardCommand::SetScoreOutput&                      cumulativeOutput
    ) const;

    // symbol: ?listObjectives@ScoreboardCommand@@AEBAXAEBVScoreboard@@AEAVCommandOutput@@@Z
    MCAPI void listObjectives(class Scoreboard const& scoreboard, class CommandOutput& output) const;

    // symbol:
    // ?listPlayers@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBUScoreboardId@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEAVCommandOutput@@@Z
    MCAPI void listPlayers(
        class Scoreboard&                                              scoreboard,
        struct ScoreboardId const&                                     targetId,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        class CommandOutput&                                           output
    ) const;

    // symbol: ?objectives@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void
    objectives(class Scoreboard& scoreboard, class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?players@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void
    players(class Scoreboard& scoreboard, class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol:
    // ?removeObjective@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVCommandOutput@@@Z
    MCAPI void
    removeObjective(class Scoreboard& scoreboard, std::string const& name, class CommandOutput& output) const;

    // symbol:
    // ?resetPlayer@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBUScoreboardId@@PEAVObjective@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEAVCommandOutput@@@Z
    MCAPI void resetPlayer(
        class Scoreboard&                                              scoreboard,
        struct ScoreboardId const&                                     targetId,
        class Objective*                                               objective,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        class CommandOutput&                                           output
    ) const;

    // symbol:
    // ?setDisplayObjective@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4ObjectiveSortOrder@@AEAVCommandOutput@@@Z
    MCAPI void setDisplayObjective(
        class Scoreboard&    scoreboard,
        std::string const&   displaySlotName,
        std::string const&   objectiveName,
        ::ObjectiveSortOrder order,
        class CommandOutput& output
    ) const;

    // symbol:
    // ?setPlayerRandomScore@ScoreboardCommand@@AEBA_NAEAVScoreboard@@AEBUScoreboardId@@AEAVObjective@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEAVCommandOutput@@AEAUSetScoreOutput@1@@Z
    MCAPI bool setPlayerRandomScore(
        class Scoreboard&                                              scoreboard,
        struct ScoreboardId const&                                     targetId,
        class Objective&                                               targetObjective,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        class CommandOutput&                                           output,
        struct ScoreboardCommand::SetScoreOutput&                      cumulativeOutput
    ) const;

    // symbol:
    // ?testPlayerScore@ScoreboardCommand@@AEBAXAEBUScoreboardId@@AEAVObjective@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEAVCommandOutput@@@Z
    MCAPI void testPlayerScore(
        struct ScoreboardId const&                                     targetId,
        class Objective&                                               objective,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        class CommandOutput&                                           output
    ) const;

    // symbol:
    // ?_getNonSortableDisplaySlots@ScoreboardCommand@@CA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAVScoreboard@@@Z
    MCAPI static std::vector<std::string> _getNonSortableDisplaySlots(class Scoreboard&);

    // symbol:
    // ?_getSortableDisplaySlots@ScoreboardCommand@@CA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAVScoreboard@@@Z
    MCAPI static std::vector<std::string> _getSortableDisplaySlots(class Scoreboard&);

    // NOLINTEND
};
