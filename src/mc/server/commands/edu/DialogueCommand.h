#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DialogueCommand : public ::Command {
public:
    // prevent constructor by default
    DialogueCommand& operator=(DialogueCommand const&);
    DialogueCommand(DialogueCommand const&);
    DialogueCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DialogueCommand() = default;

    // vIndex: 2, symbol: ?execute@DialogueCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@DialogueCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
