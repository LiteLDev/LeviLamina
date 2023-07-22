/**
 * @file  ScheduleCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScheduleCommand.
 *
 */
class ScheduleCommand : public Command {

#define AFTER_EXTRA
// Add Member There
public:
struct FunctionInfo {
    FunctionInfo() = delete;
    FunctionInfo(FunctionInfo const&) = delete;
    FunctionInfo(FunctionInfo const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULECOMMAND
public:
    class ScheduleCommand& operator=(class ScheduleCommand const &) = delete;
    ScheduleCommand(class ScheduleCommand const &) = delete;
    ScheduleCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScheduleCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@ScheduleCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@ScheduleCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol  ?_delay\@ScheduleCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _delay(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?_onAreaLoaded\@ScheduleCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _onAreaLoaded(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?_tryGetFunction\@ScheduleCommand\@\@AEBA?AUFunctionInfo\@1\@AEAVFunctionManager\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI struct ScheduleCommand::FunctionInfo _tryGetFunction(class FunctionManager &, class CommandOutput &) const;

private:

};