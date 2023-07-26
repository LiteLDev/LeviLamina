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

    public:
        // prevent constructor by default
        FunctionInfo& operator=(FunctionInfo const&) = delete;
        FunctionInfo(FunctionInfo const&)            = delete;
        FunctionInfo()                               = delete;

    public:
        /**
         * @symbol ??1FunctionInfo\@ScheduleCommand\@\@QEAA\@XZ
         */
        MCAPI ~FunctionInfo(); // NOLINT
    };

public:
    // prevent constructor by default
    ScheduleCommand& operator=(ScheduleCommand const&) = delete;
    ScheduleCommand(ScheduleCommand const&)            = delete;
    ScheduleCommand()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@ScheduleCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@ScheduleCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_delay\@ScheduleCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _delay(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?_onAreaLoaded\@ScheduleCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _onAreaLoaded(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol
     * ?_tryGetFunction\@ScheduleCommand\@\@AEBA?AUFunctionInfo\@1\@AEAVFunctionManager\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI struct ScheduleCommand::FunctionInfo
    _tryGetFunction(class FunctionManager&, class CommandOutput&) const; // NOLINT

private:
};
