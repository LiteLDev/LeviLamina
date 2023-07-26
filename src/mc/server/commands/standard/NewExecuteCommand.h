#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/level/Command.h"

class NewExecuteCommand : public ::Command {
public:
    // NewExecuteCommand inner types declare
    // clang-format off
    class ExecuteChainedSubcommand;
    // clang-format on

    // NewExecuteCommand inner types define
    class ExecuteChainedSubcommand : public ::Command {
    public:
        // ExecuteChainedSubcommand inner types declare
        // clang-format off

        // clang-format on

        // ExecuteChainedSubcommand inner types define
        enum class Subcommand {};

    public:
        // prevent constructor by default
        ExecuteChainedSubcommand& operator=(ExecuteChainedSubcommand const&) = delete;
        ExecuteChainedSubcommand(ExecuteChainedSubcommand const&)            = delete;
        ExecuteChainedSubcommand()                                           = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 1
         * @symbol
         * ?getCommandName\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
         */
        virtual std::string getCommandName() const; // NOLINT
        /**
         * @symbol
         * ?getSubcommandName\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Subcommand\@12\@\@Z
         */
        MCAPI static std::string getSubcommandName(enum class NewExecuteCommand::ExecuteChainedSubcommand::Subcommand
        ); // NOLINT
        /**
         * @symbol ?setup\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
         */
        MCAPI static void setup(class CommandRegistry&); // NOLINT
        /**
         * @symbol ?CHAINED_OPTION_0\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* CHAINED_OPTION_0; // NOLINT
        /**
         * @symbol ?CONDITION_SUBCOMMAND_OPTION_BLOCK\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* CONDITION_SUBCOMMAND_OPTION_BLOCK; // NOLINT
        /**
         * @symbol ?CONDITION_SUBCOMMAND_OPTION_BLOCKS\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* CONDITION_SUBCOMMAND_OPTION_BLOCKS; // NOLINT
        /**
         * @symbol ?CONDITION_SUBCOMMAND_OPTION_ENTITY\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* CONDITION_SUBCOMMAND_OPTION_ENTITY; // NOLINT
        /**
         * @symbol ?CONDITION_SUBCOMMAND_OPTION_SCORE\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* CONDITION_SUBCOMMAND_OPTION_SCORE; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_ALIGN\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_ALIGN; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_ANCHORED\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_ANCHORED; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_AS\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_AS; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_AT\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_AT; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_BLOCK\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_BLOCK; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_BLOCKS\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_BLOCKS; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_ENTITY\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_ENTITY; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_FACING\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_FACING; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_IF\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_IF; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_IN\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_IN; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_ALIGN\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_ALIGN; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_ANCHORED\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_ANCHORED; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_AS\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_AS; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_AT\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_AT; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_ENTITY\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_ENTITY; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_FACING\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_FACING; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_IF_UNLESS\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_IF_UNLESS; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_IN\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_IN; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_POSITIONED\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_POSITIONED; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_ROTATED\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_ROTATED; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_OPTION_RUN\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_OPTION_RUN; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_POSITIONED\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_POSITIONED; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_ROTATED\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_ROTATED; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_RUN\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_RUN; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_SCORE\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_SCORE; // NOLINT
        /**
         * @symbol ?SUBCOMMAND_UNLESS\@ExecuteChainedSubcommand\@NewExecuteCommand\@\@2PEBDEB
         */
        MCAPI static char const* SUBCOMMAND_UNLESS; // NOLINT
    };

public:
    // prevent constructor by default
    NewExecuteCommand& operator=(NewExecuteCommand const&) = delete;
    NewExecuteCommand(NewExecuteCommand const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@NewExecuteCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEWEXECUTECOMMAND
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NewExecuteCommand(); // NOLINT
#endif
    /**
     * @symbol ??0NewExecuteCommand\@\@QEAA\@XZ
     */
    MCAPI NewExecuteCommand(); // NOLINT
    /**
     * @symbol ?setup\@NewExecuteCommand\@\@SAXAEAVCommandRegistry\@\@H\@Z
     */
    MCAPI static void setup(class CommandRegistry&, int); // NOLINT

    // private:
    /**
     * @symbol ?_commandOutputFail\@NewExecuteCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$optional\@H\@std\@\@\@Z
     */
    MCAPI void _commandOutputFail(class CommandOutput&, class std::optional<int> const&) const; // NOLINT
    /**
     * @symbol ?_commandOutputSuccess\@NewExecuteCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$optional\@H\@std\@\@\@Z
     */
    MCAPI void _commandOutputSuccess(class CommandOutput&, class std::optional<int> const&) const; // NOLINT
    /**
     * @symbol
     * ?_detectConditionSubcommand\@NewExecuteCommand\@\@AEBA_NAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAV?$optional\@H\@std\@\@\@Z
     */
    MCAPI bool _detectConditionSubcommand(class CommandOrigin const&, class CommandOutput&, class std::optional<int>&)
        const; // NOLINT
    /**
     * @symbol
     * ?_getScoreFromSelectorOnObjective\@NewExecuteCommand\@\@AEBA?AV?$optional\@UScoreInfo\@\@\@std\@\@AEBVScoreboard\@\@AEBV?$CommandSelector\@VActor\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI class std::optional<struct ScoreInfo>
    _getScoreFromSelectorOnObjective(class Scoreboard const&, class CommandSelector<class Actor> const&, std::string const&, class CommandOrigin const&, class CommandOutput&)
        const; // NOLINT
    /**
     * @symbol
     * ?_getScoreboardIdForSelector\@NewExecuteCommand\@\@AEBA?AV?$optional\@UScoreboardId\@\@\@std\@\@AEBVScoreboard\@\@AEBV?$CommandSelector\@VActor\@\@\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI class std::optional<struct ScoreboardId>
    _getScoreboardIdForSelector(class Scoreboard const&, class CommandSelector<class Actor> const&, class CommandOrigin const&, class CommandOutput&)
        const; // NOLINT
    /**
     * @symbol
     * ?_handleScoreNotFound\@NewExecuteCommand\@\@AEBAXAEBVCommandOrigin\@\@AEBV?$CommandSelector\@VActor\@\@\@\@AEBVObjective\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void
    _handleScoreNotFound(class CommandOrigin const&, class CommandSelector<class Actor> const&, class Objective const&, class CommandOutput&)
        const; // NOLINT

private:
};
