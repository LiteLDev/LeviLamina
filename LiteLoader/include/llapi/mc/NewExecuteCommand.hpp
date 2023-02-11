/**
 * @file  NewExecuteCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NewExecuteCommand.
 *
 */
class NewExecuteCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEWEXECUTECOMMAND
public:
    class NewExecuteCommand& operator=(class NewExecuteCommand const &) = delete;
    NewExecuteCommand(class NewExecuteCommand const &) = delete;
    NewExecuteCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NewExecuteCommand();
    /**
     * @hash   1980379357
     * @vftbl  1
     * @symbol  ?execute\@NewExecuteCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -991879305
     * @symbol  ?setup\@NewExecuteCommand\@\@SAXAEAVCommandRegistry\@\@H\@Z
     */
    MCAPI static void setup(class CommandRegistry &, int);

//private:
    /**
     * @hash   911114321
     * @symbol  ?_commandOutputFail\@NewExecuteCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$optional\@H\@std\@\@\@Z
     */
    MCAPI void _commandOutputFail(class CommandOutput &, class std::optional<int> const &) const;
    /**
     * @hash   224129484
     * @symbol  ?_commandOutputSuccess\@NewExecuteCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$optional\@H\@std\@\@\@Z
     */
    MCAPI void _commandOutputSuccess(class CommandOutput &, class std::optional<int> const &) const;
    /**
     * @hash   -1146857465
     * @symbol  ?_detectConditionSubcommand\@NewExecuteCommand\@\@AEBA_NAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAV?$optional\@H\@std\@\@\@Z
     */
    MCAPI bool _detectConditionSubcommand(class CommandOrigin const &, class CommandOutput &, class std::optional<int> &) const;
    /**
     * @hash   -781002147
     * @symbol  ?_getScoreFromSelectorOnObjective\@NewExecuteCommand\@\@AEBA?AV?$optional\@UScoreInfo\@\@\@std\@\@AEBVScoreboard\@\@AEBV?$CommandSelector\@VActor\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI class std::optional<struct ScoreInfo> _getScoreFromSelectorOnObjective(class Scoreboard const &, class CommandSelector<class Actor> const &, std::string const &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   450473100
     * @symbol  ?_getScoreboardIdForSelector\@NewExecuteCommand\@\@AEBA?AV?$optional\@UScoreboardId\@\@\@std\@\@AEBVScoreboard\@\@AEBV?$CommandSelector\@VActor\@\@\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI class std::optional<struct ScoreboardId> _getScoreboardIdForSelector(class Scoreboard const &, class CommandSelector<class Actor> const &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1614940627
     * @symbol  ?_handleScoreNotFound\@NewExecuteCommand\@\@AEBAXAEBVCommandOrigin\@\@AEBV?$CommandSelector\@VActor\@\@\@\@AEBVObjective\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleScoreNotFound(class CommandOrigin const &, class CommandSelector<class Actor> const &, class Objective const &, class CommandOutput &) const;

private:

};