#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ResourceUriCommand : public ::Command {
public:
    // prevent constructor by default
    ResourceUriCommand& operator=(ResourceUriCommand const&);
    ResourceUriCommand(ResourceUriCommand const&);
    ResourceUriCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ResourceUriCommand@@UEAA@XZ
    virtual ~ResourceUriCommand() = default;

    // vIndex: 2, symbol: ?execute@ResourceUriCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@ResourceUriCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_executeClear@ResourceUriCommand@@AEBAXAEAVLevel@@PEAVPlayer@@AEAVCommandOutput@@@Z
    MCAPI void _executeClear(class Level&, class Player*, class CommandOutput&) const;

    // symbol: ?_executeNamed@ResourceUriCommand@@AEBAXAEAVLevel@@PEAVPlayer@@AEAVCommandOutput@@@Z
    MCAPI void _executeNamed(class Level&, class Player*, class CommandOutput&) const;

    // symbol: ?_executeUriOnly@ResourceUriCommand@@AEBAXAEAVLevel@@PEAVPlayer@@AEAVCommandOutput@@@Z
    MCAPI void _executeUriOnly(class Level&, class Player*, class CommandOutput&) const;

    // NOLINTEND
};
