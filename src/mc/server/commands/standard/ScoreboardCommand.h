#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/WildcardCommandSelector.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Objective;
class Scoreboard;
class ServerLevel;
struct ActorUniqueID;
struct ScoreboardId;
// clang-format on

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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk2cc304;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit InitProxy(::ServerLevel& level);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::ServerLevel& level);
        // NOLINTEND
    };

    struct SetScoreOutput {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk9c3417;
        ::ll::UntypedStorage<4, 4>  mUnk8cf009;
        ::ll::UntypedStorage<8, 32> mUnk91e101;
        // NOLINTEND

    public:
        // prevent constructor by default
        SetScoreOutput& operator=(SetScoreOutput const&);
        SetScoreOutput(SetScoreOutput const&);
        SetScoreOutput();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SetScoreOutput();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    enum class Category : int {
        Objectives = 0,
        Players    = 1,
    };

    enum class Action : int {
        Invalid    = 0,
        Add        = 1,
        List       = 2,
        Operation  = 3,
        Random     = 4,
        Remove     = 5,
        Reset      = 6,
        Set        = 7,
        SetDisplay = 8,
        Test       = 9,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkf9fb5c;
    ::ll::UntypedStorage<4, 4>   mUnk1dde80;
    ::ll::UntypedStorage<8, 32>  mUnkea14e0;
    ::ll::UntypedStorage<8, 32>  mUnk7cb10b;
    ::ll::UntypedStorage<1, 1>   mUnke13bce;
    ::ll::UntypedStorage<8, 32>  mUnkdd65c4;
    ::ll::UntypedStorage<8, 32>  mUnk3e0250;
    ::ll::UntypedStorage<8, 32>  mUnkb1c093;
    ::ll::UntypedStorage<8, 200> mUnka68af1;
    ::ll::UntypedStorage<8, 200> mUnkc12ce9;
    ::ll::UntypedStorage<1, 1>   mUnk3d3370;
    ::ll::UntypedStorage<4, 8>   mUnk7d2df4;
    ::ll::UntypedStorage<4, 8>   mUnkbec487;
    ::ll::UntypedStorage<4, 4>   mUnk67a061;
    ::ll::UntypedStorage<4, 4>   mUnkbf069a;
    ::ll::UntypedStorage<4, 4>   mUnk48fdfd;
    ::ll::UntypedStorage<1, 1>   mUnk5354ab;
    // NOLINTEND

public:
    // prevent constructor by default
    ScoreboardCommand& operator=(ScoreboardCommand const&);
    ScoreboardCommand(ScoreboardCommand const&);
    ScoreboardCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~ScoreboardCommand() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _generateCumulativeOutput(
        ::ScoreboardCommand::SetScoreOutput const& cumulativeOutput,
        ::Objective const&                         objective,
        ::CommandOutput&                           output
    ) const;

    MCAPI ::Objective*
    _getObjective(::Scoreboard const& scoreboard, ::std::string const& name, bool forWrite, ::CommandOutput& output)
        const;

    MCAPI ::std::vector<::ScoreboardId> _getScoreboardIdsForSelector(
        ::Scoreboard&                             scoreboard,
        ::WildcardCommandSelector<::Actor> const& selector,
        ::CommandOrigin const&                    origin,
        ::CommandOutput&                          output,
        bool                                      shouldCreateMissingId
    ) const;

    MCAPI bool _getSelectorResultsForObjective(
        ::std::vector<::ScoreboardId>&            results,
        ::Scoreboard&                             scoreboard,
        ::WildcardCommandSelector<::Actor> const& selector,
        ::Objective&                              objective,
        ::CommandOrigin const&                    origin,
        ::CommandOutput&                          output,
        bool                                      shouldCreateMissingId
    ) const;

    MCAPI void addObjective(
        ::Scoreboard&        scoreboard,
        ::std::string const& name,
        ::std::string const& criteriaName,
        ::std::string const& displayName,
        ::CommandOutput&     output
    ) const;

    MCAPI void addPlayerScore(
        ::Scoreboard&                                                 scoreboard,
        ::PlayerScoreSetFunction                                      fn,
        ::ScoreboardId const&                                         targetId,
        ::Objective&                                                  objective,
        ::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver,
        ::CommandOutput&                                              output,
        ::ScoreboardCommand::SetScoreOutput&                          cumulativeOutput
    ) const;

    MCAPI bool applyPlayerOperation(
        ::Scoreboard&                                                 scoreboard,
        ::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver,
        ::ScoreboardId const&                                         targetId,
        ::Objective&                                                  targetObjective,
        ::Objective&                                                  objective,
        ::CommandOrigin const&                                        origin,
        ::CommandOutput&                                              output,
        ::ScoreboardCommand::SetScoreOutput&                          cumulativeOutput
    ) const;

    MCAPI void listObjectives(::Scoreboard const& scoreboard, ::CommandOutput& output) const;

    MCAPI void listPlayers(
        ::Scoreboard&                                                 scoreboard,
        ::ScoreboardId const&                                         targetId,
        ::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver,
        ::CommandOutput&                                              output
    ) const;

    MCAPI void objectives(::Scoreboard& scoreboard, ::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void players(::Scoreboard& scoreboard, ::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void removeObjective(::Scoreboard& scoreboard, ::std::string const& name, ::CommandOutput& output) const;

    MCAPI void resetPlayer(
        ::Scoreboard&                                                 scoreboard,
        ::ScoreboardId const&                                         targetId,
        ::Objective*                                                  objective,
        ::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver,
        ::CommandOutput&                                              output
    ) const;

    MCAPI void setDisplayObjective(
        ::Scoreboard&        scoreboard,
        ::std::string const& displaySlotName,
        ::std::string const& objectiveName,
        ::ObjectiveSortOrder order,
        ::CommandOutput&     output
    ) const;

    MCAPI bool setPlayerRandomScore(
        ::Scoreboard&                                                 scoreboard,
        ::ScoreboardId const&                                         targetId,
        ::Objective&                                                  targetObjective,
        ::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver,
        ::CommandOutput&                                              output,
        ::ScoreboardCommand::SetScoreOutput&                          cumulativeOutput
    ) const;

    MCAPI void testPlayerScore(
        ::ScoreboardId const&                                         targetId,
        ::Objective&                                                  objective,
        ::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver,
        ::CommandOutput&                                              output
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::string> _getNonSortableDisplaySlots(::Scoreboard& scoreboard);

    MCAPI static ::std::vector<::std::string> _getSortableDisplaySlots(::Scoreboard& scoreboard);

    MCAPI static void setup(::CommandRegistry& registry, ::ScoreboardCommand::InitProxy&& dependencies);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
