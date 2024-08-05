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
    // vIndex: 0
    virtual ~ScheduleCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _delay(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void _onAreaLoaded(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI struct ScheduleCommand::FunctionInfo
    _tryGetFunction(class FunctionManager& functionManager, class CommandOutput& output) const;

    // NOLINTEND
};
