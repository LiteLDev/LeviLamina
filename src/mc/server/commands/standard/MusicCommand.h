#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class MusicCommand : public ::Command {
public:
    // prevent constructor by default
    MusicCommand& operator=(MusicCommand const&);
    MusicCommand(MusicCommand const&);
    MusicCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MusicCommand() = default;

    // vIndex: 2, symbol: ?execute@MusicCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@MusicCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_handleActionQueueOrPlay@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
    MCAPI void _handleActionQueueOrPlay(class CompoundTag&, class CommandOutput&) const;

    // symbol: ?_handleActionStop@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
    MCAPI void _handleActionStop(class CompoundTag&, class CommandOutput&) const;

    // symbol: ?_handleActionVolume@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
    MCAPI void _handleActionVolume(class CompoundTag&, class CommandOutput&) const;

    // NOLINTEND
};
