#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class PlaySoundCommand : public ::Command {
public:
    // prevent constructor by default
    PlaySoundCommand& operator=(PlaySoundCommand const&);
    PlaySoundCommand(PlaySoundCommand const&);
    PlaySoundCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~PlaySoundCommand();

    // vIndex: 2, symbol: ?execute@PlaySoundCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@PlaySoundCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
