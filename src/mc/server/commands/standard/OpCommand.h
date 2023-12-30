#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class OpCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    OpCommand& operator=(OpCommand const&);
    OpCommand(OpCommand const&);
    OpCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OpCommand@@UEAA@XZ
    virtual ~OpCommand() = default;

    // vIndex: 2, symbol: ?execute@OpCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@OpCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
