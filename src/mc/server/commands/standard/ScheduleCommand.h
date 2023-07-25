#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ScheduleCommand : public ::Command {
public:
    // ScheduleCommand inner types declare
    // clang-format off
    struct FunctionInfo;
    // clang-format on

    // ScheduleCommand inner types define
    struct FunctionInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULECOMMAND_FUNCTIONINFO
    public:
        FunctionInfo& operator=(FunctionInfo const&) = delete;
        FunctionInfo(FunctionInfo const&)            = delete;
        FunctionInfo()                               = delete;
#endif

    public:
        /**
         * @symbol ??1FunctionInfo\@ScheduleCommand\@\@QEAA\@XZ
         */
        MCAPI ~FunctionInfo();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULECOMMAND
public:
    ScheduleCommand& operator=(ScheduleCommand const&) = delete;
    ScheduleCommand(ScheduleCommand const&)            = delete;
    ScheduleCommand()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@ScheduleCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@ScheduleCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:
    /**
     * @symbol ?_delay\@ScheduleCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _delay(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?_onAreaLoaded\@ScheduleCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _onAreaLoaded(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol
     * ?_tryGetFunction\@ScheduleCommand\@\@AEBA?AUFunctionInfo\@1\@AEAVFunctionManager\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI struct ScheduleCommand::FunctionInfo _tryGetFunction(class FunctionManager&, class CommandOutput&) const;

private:
};
