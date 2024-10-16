#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandChainedSubcommand.h"
#include "mc/server/commands/CommandSelector.h"

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
        // vIndex: 0
        virtual ~ExecuteChainedSubcommand() = default;

        // vIndex: 1
        virtual std::string getCommandName() const;

        MCAPI static std::string getSubcommandName(::NewExecuteCommand::ExecuteChainedSubcommand::Subcommand subcommand
        );

        MCAPI static void setup(class CommandRegistry& registry);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** vftable();

        MCAPI std::string getCommandName$() const;

        MCAPI static char const* const& CHAINED_OPTION_0();

        MCAPI static char const* const& CONDITION_SUBCOMMAND_OPTION_BLOCK();

        MCAPI static char const* const& CONDITION_SUBCOMMAND_OPTION_BLOCKS();

        MCAPI static char const* const& CONDITION_SUBCOMMAND_OPTION_ENTITY();

        MCAPI static char const* const& CONDITION_SUBCOMMAND_OPTION_SCORE();

        MCAPI static char const* const& SUBCOMMAND_ALIGN();

        MCAPI static char const* const& SUBCOMMAND_ANCHORED();

        MCAPI static char const* const& SUBCOMMAND_AS();

        MCAPI static char const* const& SUBCOMMAND_AT();

        MCAPI static char const* const& SUBCOMMAND_BLOCK();

        MCAPI static char const* const& SUBCOMMAND_BLOCKS();

        MCAPI static char const* const& SUBCOMMAND_ENTITY();

        MCAPI static char const* const& SUBCOMMAND_FACING();

        MCAPI static char const* const& SUBCOMMAND_IF();

        MCAPI static char const* const& SUBCOMMAND_IN();

        MCAPI static char const* const& SUBCOMMAND_OPTION_ALIGN();

        MCAPI static char const* const& SUBCOMMAND_OPTION_ANCHORED();

        MCAPI static char const* const& SUBCOMMAND_OPTION_AS();

        MCAPI static char const* const& SUBCOMMAND_OPTION_AT();

        MCAPI static char const* const& SUBCOMMAND_OPTION_ENTITY();

        MCAPI static char const* const& SUBCOMMAND_OPTION_FACING();

        MCAPI static char const* const& SUBCOMMAND_OPTION_IF_UNLESS();

        MCAPI static char const* const& SUBCOMMAND_OPTION_IN();

        MCAPI static char const* const& SUBCOMMAND_OPTION_POSITIONED();

        MCAPI static char const* const& SUBCOMMAND_OPTION_ROTATED();

        MCAPI static char const* const& SUBCOMMAND_OPTION_RUN();

        MCAPI static char const* const& SUBCOMMAND_POSITIONED();

        MCAPI static char const* const& SUBCOMMAND_ROTATED();

        MCAPI static char const* const& SUBCOMMAND_RUN();

        MCAPI static char const* const& SUBCOMMAND_SCORE();

        MCAPI static char const* const& SUBCOMMAND_UNLESS();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NewExecuteCommand& operator=(NewExecuteCommand const&);
    NewExecuteCommand(NewExecuteCommand const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NewExecuteCommand();

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI NewExecuteCommand();

    MCAPI static void setup(class CommandRegistry& registry, int newExecuteStartVersion);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _commandOutputFail(class CommandOutput& output, std::optional<int> const& testPassCount) const;

    MCAPI void _commandOutputSuccess(class CommandOutput& output, std::optional<int> const& testPassCount) const;

    MCAPI bool _detectConditionSubcommand(
        class CommandOrigin const& origin,
        class CommandOutput&       output,
        std::optional<int>&        testPassCount
    ) const;

    MCAPI std::optional<struct ScoreInfo> _getScoreFromSelectorOnObjective(
        class Scoreboard const&                   scoreboard,
        class CommandSelector<class Actor> const& selector,
        std::string const&                        objectiveName,
        class CommandOrigin const&                origin,
        class CommandOutput&                      output
    ) const;

    MCAPI std::optional<struct ScoreboardId> _getScoreboardIdForSelector(
        class Scoreboard const&                   scoreboard,
        class CommandSelector<class Actor> const& selector,
        class CommandOrigin const&                origin,
        class CommandOutput&                      output
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
