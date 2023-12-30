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
    // vIndex: 0, symbol: __gen_??1HelpCommand@@UEAA@XZ
    virtual ~HelpCommand() = default;

    // vIndex: 2, symbol: ?execute@HelpCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@HelpCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getCommandHelp@HelpCommand@@AEBAXAEBVCommandRegistry@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void getCommandHelp(
        class CommandRegistry const& registry,
        class CommandOrigin const&   origin,
        class CommandOutput&         output
    ) const;

    // symbol: ?getHelpPage@HelpCommand@@AEBAXAEBVCommandRegistry@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void
    getHelpPage(class CommandRegistry const& registry, class CommandOrigin const& origin, class CommandOutput& output)
        const;

    // NOLINTEND
};
