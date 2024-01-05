#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"

// auto generated inclusion list
#include "mc/server/commands/CommandChainedSubcommand.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/level/Command.h"

class NewExecuteCommand : public ::Command {
public:
    // NewExecuteCommand inner types declare
    // clang-format off
    class ExecuteChainedSubcommand;
    // clang-format on

    // NewExecuteCommand inner types define
    class ExecuteChainedSubcommand : public ::CommandChainedSubcommand {
    public:
        // ExecuteChainedSubcommand inner types define
        enum class Subcommand {};

    public:
        // prevent constructor by default
        ExecuteChainedSubcommand& operator=(ExecuteChainedSubcommand const&);
        ExecuteChainedSubcommand(ExecuteChainedSubcommand const&);
        ExecuteChainedSubcommand();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1ExecuteChainedSubcommand@NewExecuteCommand@@UEAA@XZ
        virtual ~ExecuteChainedSubcommand() = default;

        // vIndex: 1, symbol:
        // ?getCommandName@ExecuteChainedSubcommand@NewExecuteCommand@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        virtual std::string getCommandName() const;

        // symbol:
        // ?getSubcommandName@ExecuteChainedSubcommand@NewExecuteCommand@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Subcommand@12@@Z
        MCAPI static std::string getSubcommandName(::NewExecuteCommand::ExecuteChainedSubcommand::Subcommand);

        // symbol: ?setup@ExecuteChainedSubcommand@NewExecuteCommand@@SAXAEAVCommandRegistry@@@Z
        MCAPI static void setup(class CommandRegistry& registry);

        // symbol: ?CHAINED_OPTION_0@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* CHAINED_OPTION_0;

        // symbol: ?CONDITION_SUBCOMMAND_OPTION_BLOCK@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* CONDITION_SUBCOMMAND_OPTION_BLOCK;

        // symbol: ?CONDITION_SUBCOMMAND_OPTION_BLOCKS@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* CONDITION_SUBCOMMAND_OPTION_BLOCKS;

        // symbol: ?CONDITION_SUBCOMMAND_OPTION_ENTITY@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* CONDITION_SUBCOMMAND_OPTION_ENTITY;

        // symbol: ?CONDITION_SUBCOMMAND_OPTION_SCORE@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* CONDITION_SUBCOMMAND_OPTION_SCORE;

        // symbol: ?SUBCOMMAND_ALIGN@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_ALIGN;

        // symbol: ?SUBCOMMAND_ANCHORED@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_ANCHORED;

        // symbol: ?SUBCOMMAND_AS@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_AS;

        // symbol: ?SUBCOMMAND_AT@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_AT;

        // symbol: ?SUBCOMMAND_BLOCK@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_BLOCK;

        // symbol: ?SUBCOMMAND_BLOCKS@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_BLOCKS;

        // symbol: ?SUBCOMMAND_ENTITY@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_ENTITY;

        // symbol: ?SUBCOMMAND_FACING@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_FACING;

        // symbol: ?SUBCOMMAND_IF@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_IF;

        // symbol: ?SUBCOMMAND_IN@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_IN;

        // symbol: ?SUBCOMMAND_OPTION_ALIGN@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_ALIGN;

        // symbol: ?SUBCOMMAND_OPTION_ANCHORED@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_ANCHORED;

        // symbol: ?SUBCOMMAND_OPTION_AS@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_AS;

        // symbol: ?SUBCOMMAND_OPTION_AT@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_AT;

        // symbol: ?SUBCOMMAND_OPTION_ENTITY@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_ENTITY;

        // symbol: ?SUBCOMMAND_OPTION_FACING@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_FACING;

        // symbol: ?SUBCOMMAND_OPTION_IF_UNLESS@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_IF_UNLESS;

        // symbol: ?SUBCOMMAND_OPTION_IN@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_IN;

        // symbol: ?SUBCOMMAND_OPTION_POSITIONED@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_POSITIONED;

        // symbol: ?SUBCOMMAND_OPTION_ROTATED@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_ROTATED;

        // symbol: ?SUBCOMMAND_OPTION_RUN@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_OPTION_RUN;

        // symbol: ?SUBCOMMAND_POSITIONED@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_POSITIONED;

        // symbol: ?SUBCOMMAND_ROTATED@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_ROTATED;

        // symbol: ?SUBCOMMAND_RUN@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_RUN;

        // symbol: ?SUBCOMMAND_SCORE@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_SCORE;

        // symbol: ?SUBCOMMAND_UNLESS@ExecuteChainedSubcommand@NewExecuteCommand@@2PEBDEB
        MCAPI static char const* SUBCOMMAND_UNLESS;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NewExecuteCommand& operator=(NewExecuteCommand const&);
    NewExecuteCommand(NewExecuteCommand const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NewExecuteCommand@@UEAA@XZ
    virtual ~NewExecuteCommand();

    // vIndex: 2, symbol: ?execute@NewExecuteCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ??0NewExecuteCommand@@QEAA@XZ
    MCAPI NewExecuteCommand();

    // symbol: ?setup@NewExecuteCommand@@SAXAEAVCommandRegistry@@H@Z
    MCAPI static void setup(class CommandRegistry& registry, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_commandOutputFail@NewExecuteCommand@@AEBAXAEAVCommandOutput@@AEBV?$optional@H@std@@@Z
    MCAPI void _commandOutputFail(class CommandOutput& output, std::optional<int> const&) const;

    // symbol: ?_commandOutputSuccess@NewExecuteCommand@@AEBAXAEAVCommandOutput@@AEBV?$optional@H@std@@@Z
    MCAPI void _commandOutputSuccess(class CommandOutput& output, std::optional<int> const&) const;

    // symbol:
    // ?_detectConditionSubcommand@NewExecuteCommand@@AEBA_NAEBVCommandOrigin@@AEAVCommandOutput@@AEAV?$optional@H@std@@@Z
    MCAPI bool
    _detectConditionSubcommand(class CommandOrigin const& origin, class CommandOutput& output, std::optional<int>&)
        const;

    // symbol:
    // ?_getScoreFromSelectorOnObjective@NewExecuteCommand@@AEBA?AV?$optional@UScoreInfo@@@std@@AEBVScoreboard@@AEBV?$CommandSelector@VActor@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI std::optional<struct ScoreInfo> _getScoreFromSelectorOnObjective(
        class Scoreboard const&                   scoreboard,
        class CommandSelector<class Actor> const& selector,
        std::string const&                        objectiveName,
        class CommandOrigin const&                origin,
        class CommandOutput&                      output
    ) const;

    // symbol:
    // ?_getScoreboardIdForSelector@NewExecuteCommand@@AEBA?AV?$optional@UScoreboardId@@@std@@AEBVScoreboard@@AEBV?$CommandSelector@VActor@@@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI std::optional<struct ScoreboardId> _getScoreboardIdForSelector(
        class Scoreboard const&                   scoreboard,
        class CommandSelector<class Actor> const& selector,
        class CommandOrigin const&                origin,
        class CommandOutput&                      output
    ) const;

    // NOLINTEND
};

MCTAPI Bedrock::typeid_t<CommandRegistry>
       Bedrock::type_id<CommandRegistry, NewExecuteCommand::ExecuteChainedSubcommand>();
