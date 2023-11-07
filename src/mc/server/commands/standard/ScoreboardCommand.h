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
        MCAPI explicit InitProxy(class ServerLevel&);

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
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@ScoreboardCommand@@SAXAEAVCommandRegistry@@$$QEAUInitProxy@1@@Z
    MCAPI static void setup(class CommandRegistry&, struct ScoreboardCommand::InitProxy&&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateCumulativeOutput@ScoreboardCommand@@AEBAXAEBUSetScoreOutput@1@AEBVObjective@@AEAVCommandOutput@@@Z
    MCAPI void
    _generateCumulativeOutput(struct ScoreboardCommand::SetScoreOutput const&, class Objective const&, class CommandOutput&)
        const;

    // symbol:
    // ?_getObjective@ScoreboardCommand@@AEBAPEAVObjective@@AEBVScoreboard@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NAEAVCommandOutput@@@Z
    MCAPI class Objective* _getObjective(class Scoreboard const&, std::string const&, bool, class CommandOutput&) const;

    // symbol:
    // ?_getScoreboardIdsForSelector@ScoreboardCommand@@AEBA?AV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@AEAVScoreboard@@AEBV?$WildcardCommandSelector@VActor@@@@AEBVCommandOrigin@@AEAVCommandOutput@@_N@Z
    MCAPI std::vector<struct ScoreboardId> _getScoreboardIdsForSelector(
        class Scoreboard&,
        class WildcardCommandSelector<class Actor> const&,
        class CommandOrigin const&,
        class CommandOutput&,
        bool
    ) const;

    // symbol:
    // ?_getSelectorResultsForObjective@ScoreboardCommand@@AEBA_NAEAV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@AEAVScoreboard@@AEBV?$WildcardCommandSelector@VActor@@@@AEAVObjective@@AEBVCommandOrigin@@AEAVCommandOutput@@_N@Z
    MCAPI bool _getSelectorResultsForObjective(
        std::vector<struct ScoreboardId>&,
        class Scoreboard&,
        class WildcardCommandSelector<class Actor> const&,
        class Objective&,
        class CommandOrigin const&,
        class CommandOutput&,
        bool
    ) const;

    // symbol:
    // ?addObjective@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11AEAVCommandOutput@@@Z
    MCAPI void
    addObjective(class Scoreboard&, std::string const&, std::string const&, std::string const&, class CommandOutput&)
        const;

    // symbol:
    // ?addPlayerScore@ScoreboardCommand@@AEBAXAEAVScoreboard@@W4PlayerScoreSetFunction@@AEBUScoreboardId@@AEAVObjective@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEAVCommandOutput@@AEAUSetScoreOutput@1@@Z
    MCAPI void
    addPlayerScore(class Scoreboard&, ::PlayerScoreSetFunction, struct ScoreboardId const&, class Objective&, std::function<std::string const&(struct ActorUniqueID)> const&, class CommandOutput&, struct ScoreboardCommand::SetScoreOutput&)
        const;

    // symbol:
    // ?applyPlayerOperation@ScoreboardCommand@@AEBA_NAEAVScoreboard@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEBUScoreboardId@@AEAVObjective@@3AEBVCommandOrigin@@AEAVCommandOutput@@AEAUSetScoreOutput@1@@Z
    MCAPI bool
    applyPlayerOperation(class Scoreboard&, std::function<std::string const&(struct ActorUniqueID)> const&, struct ScoreboardId const&, class Objective&, class Objective&, class CommandOrigin const&, class CommandOutput&, struct ScoreboardCommand::SetScoreOutput&)
        const;

    // symbol: ?listObjectives@ScoreboardCommand@@AEBAXAEBVScoreboard@@AEAVCommandOutput@@@Z
    MCAPI void listObjectives(class Scoreboard const&, class CommandOutput&) const;

    // symbol:
    // ?listPlayers@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBUScoreboardId@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEAVCommandOutput@@@Z
    MCAPI void
    listPlayers(class Scoreboard&, struct ScoreboardId const&, std::function<std::string const&(struct ActorUniqueID)> const&, class CommandOutput&)
        const;

    // symbol: ?objectives@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void objectives(class Scoreboard&, class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?players@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void players(class Scoreboard&, class CommandOrigin const&, class CommandOutput&) const;

    // symbol:
    // ?removeObjective@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVCommandOutput@@@Z
    MCAPI void removeObjective(class Scoreboard&, std::string const&, class CommandOutput&) const;

    // symbol:
    // ?resetPlayer@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBUScoreboardId@@PEAVObjective@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEAVCommandOutput@@@Z
    MCAPI void
    resetPlayer(class Scoreboard&, struct ScoreboardId const&, class Objective*, std::function<std::string const&(struct ActorUniqueID)> const&, class CommandOutput&)
        const;

    // symbol:
    // ?setDisplayObjective@ScoreboardCommand@@AEBAXAEAVScoreboard@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4ObjectiveSortOrder@@AEAVCommandOutput@@@Z
    MCAPI void
    setDisplayObjective(class Scoreboard&, std::string const&, std::string const&, ::ObjectiveSortOrder, class CommandOutput&)
        const;

    // symbol:
    // ?setPlayerRandomScore@ScoreboardCommand@@AEBA_NAEAVScoreboard@@AEBUScoreboardId@@AEAVObjective@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEAVCommandOutput@@AEAUSetScoreOutput@1@@Z
    MCAPI bool
    setPlayerRandomScore(class Scoreboard&, struct ScoreboardId const&, class Objective&, std::function<std::string const&(struct ActorUniqueID)> const&, class CommandOutput&, struct ScoreboardCommand::SetScoreOutput&)
        const;

    // symbol:
    // ?testPlayerScore@ScoreboardCommand@@AEBAXAEBUScoreboardId@@AEAVObjective@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@std@@AEAVCommandOutput@@@Z
    MCAPI void
    testPlayerScore(struct ScoreboardId const&, class Objective&, std::function<std::string const&(struct ActorUniqueID)> const&, class CommandOutput&)
        const;

    // symbol:
    // ?_getNonSortableDisplaySlots@ScoreboardCommand@@CA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAVScoreboard@@@Z
    MCAPI static std::vector<std::string> _getNonSortableDisplaySlots(class Scoreboard&);

    // symbol:
    // ?_getSortableDisplaySlots@ScoreboardCommand@@CA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAVScoreboard@@@Z
    MCAPI static std::vector<std::string> _getSortableDisplaySlots(class Scoreboard&);

    // NOLINTEND
};
