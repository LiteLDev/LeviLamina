#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ToggleDownfallCommand : public ::Command {
public:
    // prevent constructor by default
    ToggleDownfallCommand& operator=(ToggleDownfallCommand const&);
    ToggleDownfallCommand(ToggleDownfallCommand const&);
    ToggleDownfallCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ToggleDownfallCommand@@UEAA@XZ
    virtual ~ToggleDownfallCommand() = default;

    // vIndex: 2, symbol: ?execute@ToggleDownfallCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@ToggleDownfallCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
