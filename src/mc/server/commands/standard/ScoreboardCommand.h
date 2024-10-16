#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/WildcardCommandSelector.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

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
        MCAPI explicit InitProxy(class ServerLevel& level);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(class ServerLevel& level);

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
        MCAPI ~SetScoreOutput();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScoreboardCommand& operator=(ScoreboardCommand const&);
    ScoreboardCommand(ScoreboardCommand const&);
    ScoreboardCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScoreboardCommand();

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry, struct ScoreboardCommand::InitProxy&& dependencies);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _generateCumulativeOutput(
        struct ScoreboardCommand::SetScoreOutput const& cumulativeOutput,
        class Objective const&                          objective,
        class CommandOutput&                            output
    ) const;

    MCAPI class Objective* _getObjective(
        class Scoreboard const& scoreboard,
        std::string const&      name,
        bool                    forWrite,
        class CommandOutput&    output
    ) const;

    MCAPI std::vector<struct ScoreboardId> _getScoreboardIdsForSelector(
        class Scoreboard&                                 scoreboard,
        class WildcardCommandSelector<class Actor> const& selector,
        class CommandOrigin const&                        origin,
        class CommandOutput&                              output,
        bool                                              shouldCreateMissingId
    ) const;

    MCAPI bool _getSelectorResultsForObjective(
        std::vector<struct ScoreboardId>&                 results,
        class Scoreboard&                                 scoreboard,
        class WildcardCommandSelector<class Actor> const& selector,
        class Objective&                                  objective,
        class CommandOrigin const&                        origin,
        class CommandOutput&                              output,
        bool                                              shouldCreateMissingId
    ) const;

    MCAPI void addObjective(
        class Scoreboard&    scoreboard,
        std::string const&   name,
        std::string const&   criteriaName,
        std::string const&   displayName,
        class CommandOutput& output
    ) const;

    MCAPI void addPlayerScore(
        class Scoreboard&                                              scoreboard,
        ::PlayerScoreSetFunction                                       fn,
        struct ScoreboardId const&                                     targetId,
        class Objective&                                               objective,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        class CommandOutput&                                           output,
        struct ScoreboardCommand::SetScoreOutput&                      cumulativeOutput
    ) const;

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

    MCAPI void listObjectives(class Scoreboard const& scoreboard, class CommandOutput& output) const;

    MCAPI void listPlayers(
        class Scoreboard&                                              scoreboard,
        struct ScoreboardId const&                                     targetId,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        class CommandOutput&                                           output
    ) const;

    MCAPI void
    objectives(class Scoreboard& scoreboard, class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void
    players(class Scoreboard& scoreboard, class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void
    removeObjective(class Scoreboard& scoreboard, std::string const& name, class CommandOutput& output) const;

    MCAPI void resetPlayer(
        class Scoreboard&                                              scoreboard,
        struct ScoreboardId const&                                     targetId,
        class Objective*                                               objective,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        class CommandOutput&                                           output
    ) const;

    MCAPI void setDisplayObjective(
        class Scoreboard&    scoreboard,
        std::string const&   displaySlotName,
        std::string const&   objectiveName,
        ::ObjectiveSortOrder order,
        class CommandOutput& output
    ) const;

    MCAPI bool setPlayerRandomScore(
        class Scoreboard&                                              scoreboard,
        struct ScoreboardId const&                                     targetId,
        class Objective&                                               targetObjective,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        class CommandOutput&                                           output,
        struct ScoreboardCommand::SetScoreOutput&                      cumulativeOutput
    ) const;

    MCAPI void testPlayerScore(
        struct ScoreboardId const&                                     targetId,
        class Objective&                                               objective,
        std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver,
        class CommandOutput&                                           output
    ) const;

    MCAPI static std::vector<std::string> _getNonSortableDisplaySlots(class Scoreboard& scoreboard);

    MCAPI static std::vector<std::string> _getSortableDisplaySlots(class Scoreboard& scoreboard);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
