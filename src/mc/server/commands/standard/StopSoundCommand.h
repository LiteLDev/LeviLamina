#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class StopSoundCommand : public ::Command {
public:
    // prevent constructor by default
    StopSoundCommand& operator=(StopSoundCommand const&);
    StopSoundCommand(StopSoundCommand const&);
    StopSoundCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~StopSoundCommand() = default;

    // vIndex: 2, symbol: ?execute@StopSoundCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@StopSoundCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
