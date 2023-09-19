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
        FunctionInfo& operator=(FunctionInfo const&);
        FunctionInfo(FunctionInfo const&);
        FunctionInfo();

    public:
        // NOLINTBEGIN
        // symbol: ??1FunctionInfo@ScheduleCommand@@QEAA@XZ
        MCAPI ~FunctionInfo();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScheduleCommand& operator=(ScheduleCommand const&);
    ScheduleCommand(ScheduleCommand const&);
    ScheduleCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@ScheduleCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@ScheduleCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_delay@ScheduleCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _delay(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?_onAreaLoaded@ScheduleCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _onAreaLoaded(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?_tryGetFunction@ScheduleCommand@@AEBA?AUFunctionInfo@1@AEAVFunctionManager@@AEAVCommandOutput@@@Z
    MCAPI struct ScheduleCommand::FunctionInfo _tryGetFunction(class FunctionManager&, class CommandOutput&) const;

    // NOLINTEND
};
