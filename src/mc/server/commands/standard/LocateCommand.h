#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class LocateCommand : public ::Command {
public:
    // prevent constructor by default
    LocateCommand& operator=(LocateCommand const&);
    LocateCommand(LocateCommand const&);
    LocateCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LocateCommand@@UEAA@XZ
    virtual ~LocateCommand() = default;

    // vIndex: 2, symbol: ?execute@LocateCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@LocateCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_executeLocateBiome@LocateCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _executeLocateBiome(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?_executeLocateStructure@LocateCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _executeLocateStructure(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
