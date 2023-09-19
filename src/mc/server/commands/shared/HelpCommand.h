#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class HelpCommand : public ::Command {
public:
    // prevent constructor by default
    HelpCommand& operator=(HelpCommand const&);
    HelpCommand(HelpCommand const&);
    HelpCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@HelpCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@HelpCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getCommandHelp@HelpCommand@@AEBAXAEBVCommandRegistry@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void getCommandHelp(class CommandRegistry const&, class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?getHelpPage@HelpCommand@@AEBAXAEBVCommandRegistry@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void getHelpPage(class CommandRegistry const&, class CommandOrigin const&, class CommandOutput&) const;

    // NOLINTEND
};
