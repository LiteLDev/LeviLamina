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
    // vIndex: 0, symbol: __gen_??1ScheduleCommand@@UEAA@XZ
    virtual ~ScheduleCommand() = default;

    // vIndex: 2, symbol: ?execute@ScheduleCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@ScheduleCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_delay@ScheduleCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _delay(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?_onAreaLoaded@ScheduleCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _onAreaLoaded(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?_tryGetFunction@ScheduleCommand@@AEBA?AUFunctionInfo@1@AEAVFunctionManager@@AEAVCommandOutput@@@Z
    MCAPI struct ScheduleCommand::FunctionInfo
    _tryGetFunction(class FunctionManager& functionManager, class CommandOutput& output) const;

    // NOLINTEND
};
