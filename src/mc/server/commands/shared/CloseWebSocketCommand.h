#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CloseWebSocketCommand : public ::Command {
public:
    // prevent constructor by default
    CloseWebSocketCommand& operator=(CloseWebSocketCommand const&);
    CloseWebSocketCommand(CloseWebSocketCommand const&);
    CloseWebSocketCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CloseWebSocketCommand@@UEAA@XZ
    virtual ~CloseWebSocketCommand() = default;

    // vIndex: 2, symbol: ?execute@CloseWebSocketCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput&) const;

    // symbol: ?setup@CloseWebSocketCommand@@SAXAEAVCommandRegistry@@AEAVIMinecraftApp@@@Z
    MCAPI static void setup(class CommandRegistry& registry, class IMinecraftApp& app);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mApp@CloseWebSocketCommand@@0PEAVIMinecraftApp@@EA
    MCAPI static class IMinecraftApp* mApp;

    // NOLINTEND
};
