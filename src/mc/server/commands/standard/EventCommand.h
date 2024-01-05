#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class EventCommand : public ::Command {
public:
    // prevent constructor by default
    EventCommand& operator=(EventCommand const&);
    EventCommand(EventCommand const&);
    EventCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EventCommand@@UEAA@XZ
    virtual ~EventCommand() = default;

    // vIndex: 2, symbol: ?execute@EventCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@EventCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
